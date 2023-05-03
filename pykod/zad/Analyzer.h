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



using namespace std;

class Analyzer
{
  public:
    Analyzer();
    ~Analyzer();
    void Plot();
    


  private:
    TFile *file,*file1,*file2,*file3,*file4,*file5,*file6,*file7;
    TTree *tree1,*tree2,*tree3,*tree4,*tree5,*tree6,*tree7;
   
    TH1F *hist, *hist1,*hist2, *hist3, *hist4, *hist5, *hist6, *hist7, *hist8, *hist9;
    TH2F *hist10, *hist11;
    TH1D *h1;

    TGraphErrors *gr,*gr2,*gr3;
    TF1 *funkc;


    TCanvas *c, *canvas, *canvas1,*canvas3,*canvas4,*canvas5, *canvas6, *canvas7, *c1;
    TMultiGraph* mg;
    Double_t HH_mass , jj_mass, missing, y1, y2;
    TLorentzVector *vq1in, *vq2in, *vqoutSum, *vSum, *vq1out, *vq2out, *vH1, *vH2;
   
};