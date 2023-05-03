import MadGraphControl.MadGraph_NNPDF30NLO_Base_Fragment
from MadGraphControl.MadGraphUtils import *

beamEnergy=-999
if hasattr(runArgs,'ecmEnergy'):
    beamEnergy = runArgs.ecmEnergy / 2.
else:
    raise RuntimeError("No center of mass energy found.")

#---------------------------------------------------------------------------------------------------
# Due to the low filter efficiency, the number of generated events are set to safefactor times maxEvents,
# to avoid crashing due to not having enough events
# Also putting protection to avoid from crashing when maxEvents=-1
#---------------------------------------------------------------------------------------------------
safefactor=30
nevents=5000*safefactor
if runArgs.maxEvents > 0:
    nevents=runArgs.maxEvents*safefactor

mode=0

#---------------------------------------------------------------------------------------------------
# Setting parameters for param_card.dat
#---------------------------------------------------------------------------------------------------
parameters = {}
parameters['NEW'] = {'CV':  '1.50000000',  # CV
                     'C2V': '1.0000000',  # C2V
                     'C3':  '1.0000000'}  # C3

#---------------------------------------------------------------------------------------------------
# Setting higgs mass to 125 GeV for param_card.dat
#---------------------------------------------------------------------------------------------------
parameters['MASS']={'25':'1.250000e+02'} #MH  

#---------------------------------------------------------------------------------------------------
# Setting some parameters for run_card.dat
#---------------------------------------------------------------------------------------------------
extras = { 'lhe_version':'2.0', 
           'cut_decays':'F', 
           'scale':'125',
           'dsqrt_q2fact1':'125',
           'dsqrt_q2fact2':'125',
           'nevents':int(nevents)}

#---------------------------------------------------------------------------------------------------
# Generating non-resonant VBF-Only HH process with MadGraph
# Parameters are set above
#---------------------------------------------------------------------------------------------------
process="""
import model sm
define p = g u c d s u~ c~ d~ s~
define j = g u c d s u~ c~ d~ s~
import model /cvmfs/atlas.cern.ch/repo/sw/Generators/madgraph/models/latest/HHVBF_UFO
generate p p > h h j j $$ z w+ w- / a j QED=4
output -f"""

process_dir = new_process(process)

#---------------------------------------------------------------------------------------------------
# Using the helper function from MadGraphControl for setting up the run_card
# https://gitlab.cern.ch/atlas/athena/-/tree/master/Generators/MadGraphControl
# Build a new run_card.dat from an existing one
# Using the values given in "extras" above for the selected parameters when setting up the run_card
# If not set in "extras", default values are used 
#---------------------------------------------------------------------------------------------------
modify_run_card(process_dir=process_dir,runArgs=runArgs,settings=extras)

#---------------------------------------------------------------------------------------------------
# Using the helper function from MadGraphControl for setting up the param_card
# https://gitlab.cern.ch/atlas/athena/-/tree/master/Generators/MadGraphControl
# Build a new param_card.dat from an existing one
# Used values given in "parameters" for CV, C2V, C3
# Higgs mass is set to 125 GeV by "higgsMass"
#---------------------------------------------------------------------------------------------------
modify_param_card(process_dir=process_dir,params=parameters)

#---------------------------------------------------------------------------------------------------
# Printing cards   
#---------------------------------------------------------------------------------------------------
print_cards()

#---------------------------------------------------------------------------------------------------
# Generate events                                                               
#---------------------------------------------------------------------------------------------------     
generate(process_dir=process_dir,runArgs=runArgs)

#---------------------------------------------------------------------------------------------------
# Move output files into the appropriate place, with the appropriate name
#---------------------------------------------------------------------------------------------------   
arrange_output(process_dir=process_dir,runArgs=runArgs,lhe_version=2,saveProcDir=True)

#---------------------------------------------------------------------------------------------------
# EVGEN Configuration
#---------------------------------------------------------------------------------------------------
evgenConfig.generators = ["MadGraph", "Pythia8"]
evgenConfig.description = "Non-resonant LO di-Higgs production through vector-boson-fusion (VBF) which decays to bbtautau (hadhad)."
evgenConfig.keywords = ["hh","SM", "SMHiggs", "nonResonant", "bbtautau", "VBF", "bottom"]
evgenConfig.contact = ['Tulin Varol Mete <Tulin.Varol@cern.ch>']

evgenConfig.nEventsPerJob = 10000
#evgenConfig.tune = "MMHT2014"

#--------------------------------------------------------------
# Pythia8 showering
#--------------------------------------------------------------
include("Pythia8_i/Pythia8_A14_NNPDF23LO_EvtGen_Common.py")
include("Pythia8_i/Pythia8_MadGraph.py")

genSeq.Pythia8.Commands += [ "25:oneChannel = on 0.5 100 5 -5",    # bb decay
                             "25:addChannel = on 0.5 100 15 -15" ] # tautau decay 

#--------------------------------------------------------------                                                                                   
# Dipole option Pythia8                                                                                                          
#--------------------------------------------------------------
genSeq.Pythia8.Commands += [ "SpaceShower:dipoleRecoil = on" ]

#---------------------------------------------------------------------------------------------------
# Filter for bbtautau
#---------------------------------------------------------------------------------------------------                                                           
from GeneratorFilters.GeneratorFiltersConf import ParentChildFilter
filtSeq += ParentChildFilter("HbbFilter", PDGParent = [25], PDGChild = [5])
filtSeq += ParentChildFilter("HTauTauFilter", PDGParent = [25], PDGChild = [15])

from GeneratorFilters.GeneratorFiltersConf import XtoVVDecayFilterExtended
filtSeq += XtoVVDecayFilterExtended("TauTauHadHadFilter")
filtSeq.TauTauHadHadFilter.PDGGrandParent = 25
filtSeq.TauTauHadHadFilter.PDGParent = 15
filtSeq.TauTauHadHadFilter.StatusParent = 2
filtSeq.TauTauHadHadFilter.PDGChild1 = [211,213,215,311,321,323,10232,10323,20213,20232,20323,30213,100213,100323,1000213]
filtSeq.TauTauHadHadFilter.PDGChild2 = [211,213,215,311,321,323,10232,10323,20213,20232,20323,30213,100213,100323,1000213]

#---------------------------------------------------------------------------------------------------
# Filter for 2 leptons (tau(had) tau(had)) with pt cuts
#---------------------------------------------------------------------------------------------------                                                             
from GeneratorFilters.GeneratorFiltersConf import MultiElecMuTauFilter
filtSeq += MultiElecMuTauFilter("TauPtFilter")
filtSeq.TauPtFilter.IncludeHadTaus = True
filtSeq.TauPtFilter.NLeptons = 2
filtSeq.TauPtFilter.MinPt = 13000.
filtSeq.TauPtFilter.MinVisPtHadTau = 15000.
filtSeq.TauPtFilter.MaxEta = 3.

#---------------------------------------------------------------------------------------------------
# Leading tau filter
#---------------------------------------------------------------------------------------------------
filtSeq += MultiElecMuTauFilter("LeadTauPtFilter")
filtSeq.LeadTauPtFilter.IncludeHadTaus = True
filtSeq.LeadTauPtFilter.NLeptons = 1
filtSeq.LeadTauPtFilter.MinPt = 13000.
filtSeq.LeadTauPtFilter.MinVisPtHadTau = 35000.
filtSeq.LeadTauPtFilter.MaxEta = 3.

filtSeq.Expression = "HbbFilter and HTauTauFilter and TauTauHadHadFilter and TauPtFilter and LeadTauPtFilter"

