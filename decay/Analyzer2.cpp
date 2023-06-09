#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}

//ETA
//ETA
//ETA
//ETA
//ETA




void Analyzer::Plot(){
	string directoryPath = "/afs/cern.ch/user/m/mmihovil/work/decay/decroots3/";
	TH1F* momentumHist = new TH1F("momentumHist", "Pseudorapidity of taus", 100, -5, 5);
	TH1F* momentumHist2 = new TH1F("momentumHist2", "Pt Distribution", 100, -5, 5);
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

            // Create TLorentzVector objects for each particle
            TLorentzVector Bottom1;
            TLorentzVector Bottom2;

            // Set the momentum and energy for particle 1
            Bottom1.SetPxPyPzE(px->at(0), py->at(0),pz->at(0),energy->at(0));

            // Set the momenergytum and energy for particle 2
            Bottom2.SetPxPyPzE(px->at(1), py->at(1),pz->at(1),energy->at(1));

            // Fill the histeenergyogram with the transverse momenta of both particles
 

		//leading pt
		Float_t pt1 = Bottom1.Pt();
		Float_t pt2 = Bottom2.Pt();

    	if (pt1 >  pt2){
			momentumHist->Fill(Bottom1.Eta());
			momentumHist2->Fill(Bottom2.Eta());
		}
		else {
			momentumHist->Fill(Bottom2.Eta());
			momentumHist2->Fill(Bottom1.Eta());
			}
        }
		


	}

	 
	TCanvas* canvas = new TCanvas("canvas", "Pt Distribution", 800, 600);
	gStyle -> SetOptStat(0);
	momentumHist->GetYaxis()->SetRangeUser(0,3000);
	momentumHist->GetXaxis()->SetTitle("Eta");
    momentumHist->GetYaxis()->SetTitle("Entries");
	momentumHist->SetLineColor(kBlue);
    momentumHist2->SetLineColor(kRed);
    momentumHist->Draw("HIST");
	momentumHist2->Draw("HIST SAME");
	TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(momentumHist, "Leading tau","l");
    legend->AddEntry(momentumHist2, "Subleading tau", "l");
	legend->Draw();

	canvas->SaveAs("Eta_taus.png"); 	
}
