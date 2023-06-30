#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1F.h>
#include <TCanvas.h>
#include <TString.h>
#include <TLegend.h>
#include <TLorentzVector.h>
#include <THStack.h>
#include <TGraph.h>
#include <TH2F.h>
#include <TF1.h>
#include<TMath.h>
#include<TPad.h>
//C++ libraries
#include <iostream>
#include <vector>
#include <TStyle.h>
#include <TMultiGraph.h>
#include <TGraphErrors.h>
#include "TLatex.h"
#include "TH1D.h"
#include <iomanip>
#include <TLatex.h>
#include <thread>


#include <TGraph2D.h>
using namespace std;

class Analyzer
{
  public:
    Analyzer();
    ~Analyzer();
    void Plot();

    


  private:
    
   vector<float> *px,*py,*pz,*energy,*mass,*theta,*pxb,*pyb,*pzb,*energyb;
   vector<float> *elpx,*elpy,*elpz,*elenergy,*mupx,*mupy,*mupz,*muenergy,*pt_vis,*eta_vis,*phi_vis,*m_vis;
   vector<char> *IsHadronicTau;
};