#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}

//ETA Bottom
//ETA Bottom
//ETA Bottom
//ETA Bottom
//ETA Bottom




void Analyzer::Plot(){
	string directoryPath = "/afs/cern.ch/user/m/mmihovil/work/decay/decroots3/";
	TH1F* Hist = new TH1F("Hist", " dR for Taus", 100, 0, 5);
	TH1F* Hist2 = new TH1F("Hist2", " Pseudorapidity of bottom quarks", 100,-5, 5);
	 for (int i = 0; i < 30; i++) {
        // Construct the file name
        string fileName = directoryPath + "DAOD_TRUTH3.output" + to_string(i) + ".root";

        // Open the ROOT file
        TFile* file = TFile::Open(fileName.c_str());

        // Access the TTree 
        TTree* tree = dynamic_cast<TTree*>(file->Get("CollectionTree"));

		
		tree->SetBranchAddress("TruthTausAuxDyn.px", &px);
		tree->SetBranchAddress("TruthTausAuxDyn.py", &py);
		tree->SetBranchAddress("TruthTausAuxDyn.pz", &pz);
		tree->SetBranchAddress("TruthTausAuxDyn.e", &energy);
    
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

			//Hist->Fill(Bottom1.Eta());
			//Hist2->Fill(Bottom2.Eta());
			 Hist->Fill(sqrt(pow(Bottom1.Eta()-Bottom2.Eta(),2) + pow(Bottom1.Phi()-Bottom2.Phi(),2)  )) ;
		}
		
	 }
	TCanvas* canvas = new TCanvas("canvas", "Pseudorapidity", 1600, 1200);
	gStyle -> SetOptStat(0);

	Hist->GetXaxis()->SetTitle(" dR");
    Hist->GetYaxis()->SetTitle("Entries");
	Hist->SetLineColor(kBlue);
    Hist2->SetLineColor(kRed);
    Hist->Draw("HIST");
	//Hist2->Draw("HIST SAME");
	/*
	TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(Hist, "First Bottom quark","l");
    legend->AddEntry(Hist2, "Second Bottom quark", "l");
	legend->Draw();
	*/

	canvas->SaveAs("dR_tau.png"); 	
}
