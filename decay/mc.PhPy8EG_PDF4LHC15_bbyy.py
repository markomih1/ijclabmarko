#--------------------------------------------------------------
# Pythia8 showering setup
#--------------------------------------------------------------
# initialize Pythia8 generator configuration for showering

from GeneratorFilters.GeneratorFiltersConf import ParentChildFilter
runArgs.inputGeneratorFile = runArgs.inputGeneratorFile

include("Pythia8_i/Pythia8_A14_NNPDF23LO_EvtGen_Common.py")

#--------------------------------------------------------------
# Edit merged LHE file to remove problematic lines
#--------------------------------------------------------------
include("Pythia8_i/Pythia8_Powheg.py")

#---------------------------------------------------------------------------------------------------
# EVGEN Configuration
#---------------------------------------------------------------------------------------------------
evgenConfig.generators = ["Powheg", "Pythia8"]
evgenConfig.description = "SM diHiggs production, decay to bbyy."
evgenConfig.keywords = ["hh", "nonResonant"]
evgenConfig.contact = ['Stefano Manzoni <Stefano.Manzoni@cern.ch>']
evgenConfig.inputFilesPerJob = 5  # 500 / 0.25 * 1.1 / 500


#evgenConfig.tune = "MMHT2014"

#--------------------------------------------------------------
# Pythia8 showering
#--------------------------------------------------------------
include("Pythia8_i/Pythia8_Powheg_Main31.py")

genSeq.Pythia8.Commands += ['25:m0 = 125.0',
                            '25:onMode = off',
                            '25:onIfMatch = 5 -5',
                            '25:onIfMatch = 15 -15',
                            'ResonanceDecayFilter:filter = on',
                            'ResonanceDecayFilter:exclusive = on', #off: require at least the specified number of daughters, on: require exactly the specified number of daughters
                            'ResonanceDecayFilter:mothers = 25', #list of mothers not specified -> count all particles in hard process+resonance decays (better to avoid specifying mothers when including leptons from the lhe in counting, since intermediate resonances are not gauranteed to appear in general
                            'ResonanceDecayFilter:daughters = 5,5,15,15',
                            ]  # Z/gamma* combination scale

#--------------------------------------------------------------
# Dipole option Pythia8
#--------------------------------------------------------------
genSeq.Pythia8.Commands += ["SpaceShower:dipoleRecoil = on"]

#---------------------------------------------------------------------------------------------------
# Generator Filters
#---------------------------------------------------------------------------------------------------
from GeneratorFilters.GeneratorFiltersConf import ParentChildFilter
filtSeq += ParentChildFilter("hbbFilter", PDGParent=[25], PDGChild=[5])
filtSeq += ParentChildFilter("HyyFilter", PDGParent=[25], PDGChild=[15])
filtSeq.Expression = "hbbFilter and HyyFilter"

