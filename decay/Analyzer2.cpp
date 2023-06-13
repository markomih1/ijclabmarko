#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}

//mass
//mass
//mass
//mass
//mass




void Analyzer::Plot(){
	string directoryPath = "/afs/cern.ch/user/m/mmihovil/work/decay/decroots3/";
	TH1F* massHist = new TH1F("massHist", "MASS Distribution", 100, 0, 200);
	TH1F* massHist2 = new TH1F("massHist2", "MASS Distribution", 100, 0, 200);
	 for (int i = 0; i < 30; i++) {
        // Construct the file name
        string fileName = directoryPath + "DAOD_TRUTH3.output" + to_string(i) + ".root";

        // Open the ROOT file
        TFile* file = TFile::Open(fileName.c_str());

        // Access the TTree 
        TTree* tree = dynamic_cast<TTree*>(file->Get("CollectionTree"));

		tree->SetBranchAddress("TruthBottomAuxDyn.m", &mass);
		tree->SetBranchAddress("TruthBottomAuxDyn.px", &px);
		tree->SetBranchAddress("TruthBottomAuxDyn.py", &py);
		tree->SetBranchAddress("TruthBottomAuxDyn.pz", &pz);
		tree->SetBranchAddress("TruthBottomAuxDyn.e", &energy);
    
	 for (Long64_t entry = 0; entry < tree->GetEntries(); ++entry) {
            // Get the entry from the TTree
            tree->GetEntry(entry);
			TLorentzVector Bottom1;
            TLorentzVector Bottom2;
			TLorentzVector higgs;
            // Set the momentum and energy for particle 1
            Bottom1.SetPxPyPzE(px->at(0), py->at(0),pz->at(0),energy->at(0));

            // Set the momenergytum and energy for particle 2
            Bottom2.SetPxPyPzE(px->at(1), py->at(1),pz->at(1),energy->at(1));
		
			higgs=Bottom1+Bottom2;

			massHist->Fill(higgs.M()/1000);
			
			 
		}
		
	 }
	TCanvas* canvas = new TCanvas("canvas", "Pt Distribution", 1000, 1000);
	gStyle -> SetOptStat(0);
	//massHist->GetYaxis()->SetRangeUser(0,4500);
	massHist->GetXaxis()->SetTitle("mass of two bottom quarks [GeV]");
    massHist->GetYaxis()->SetTitle("Entries");
	massHist->SetLineColor(kBlue);
    
    massHist->Draw("HIST");



	canvas->SaveAs("massbottom.png"); 	
}
