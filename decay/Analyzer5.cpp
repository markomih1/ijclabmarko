#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}

//MOMENTUM CUTOFF
//MOMENTUM CUTOFF
//MOMENTUM CUTOFF
//MOMENTUM CUTOFF
//MOMENTUM CUTOFF




void Analyzer::Plot(){
	string directoryPath = "/afs/cern.ch/user/m/mmihovil/work/decay/decroots3/";
	TH1F* momentumHist = new TH1F("momentumHist", "Pt Distribution", 100, 0, 1000000);
	TH1F* momentumHist2 = new TH1F("momentumHist2", "Pt Distribution", 100, 0, 1000000);
	 for (int i = 0; i < 30; i++) {
        // Construct the file name
        string fileName = directoryPath + "DAOD_TRUTH3.output" + to_string(i) + ".root";

        // Open the ROOT file
        TFile* file = TFile::Open(fileName.c_str());

        // Access the TTree 
        TTree* tree = dynamic_cast<TTree*>(file->Get("CollectionTree"));

		tree->SetBranchAddress("TruthBottomAuxDyn.px", &px);
		tree->SetBranchAddress("TruthBottomAuxDyn.py", &py);
		tree->SetBranchAddress("TruthBottomAuxDyn.pz", &pz);
		tree->SetBranchAddress("TruthBottomAuxDyn.e", &energy);
    
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

         

		if(Bottom1.Pt()>25000 && TMath::Abs(Bottom1.Eta()) < 2.4 && Bottom2.Pt()>25000 && TMath::Abs(Bottom2.Eta()) < 2.4 ){
   // Fill with the transverse momenta of both particles
          // momentumHist->Fill(Bottom1.Pt());     
		 	//momentumHist2->Fill(Bottom2.Pt());  
		

		
			

		//leading pt
		Float_t pt1 = Bottom1.Pt();
		Float_t pt2 = Bottom2.Pt();

    	if (pt1 >  pt2){
			momentumHist->Fill(pt1);
			momentumHist2->Fill(pt2);
		}
		else {
			momentumHist->Fill(pt2);
			momentumHist2->Fill(pt1);
			}
        }
	


	}

	 }
	TCanvas* canvas = new TCanvas("canvas", "Pt Distribution", 800, 600);
	gStyle -> SetOptStat(0);
	momentumHist->GetYaxis()->SetRangeUser(0,8000);
	momentumHist->GetXaxis()->SetTitle("Pt [MeV]");
    momentumHist->GetYaxis()->SetTitle("Entries");
	momentumHist->SetLineColor(kBlue);
    momentumHist2->SetLineColor(kRed);
    momentumHist->Draw("HIST");
	momentumHist2->Draw("HIST SAME");

	TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(momentumHist, "Leading Bottom quark Pt","l");
    legend->AddEntry(momentumHist2, "Second Bottom quark  Pt", "l");
	legend->Draw();

	TLatex* latex = new TLatex();
	latex->SetNDC();
	latex->SetTextFont(42);
	latex->SetTextSize(0.04);

	// Add the constraints as text on the canvas
	latex->DrawLatex(0.2, 0.8, "|#eta| < 2.4");
	latex->DrawLatex(0.2, 0.75, "p_{T} > 25 GeV");
	
	canvas->SaveAs("Cutoff_LSL_b.png"); 	
}
