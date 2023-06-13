#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}

//ETA TAU
//ETA TAU
//ETA TAU
//ETA TAU
//ETA TAU




void Analyzer::Plot(){
	string directoryPath = "/afs/cern.ch/user/m/mmihovil/work/decay/decroots3/";
	TH1F* Hist = new TH1F("Hist", " Pseudorapidity for taus", 100, -5, 5);
	TH1F* Hist2 = new TH1F("Hist2", " Pseudorapidity of taus", 100,-5, 5);
	 for (int i = 0; i < 30; i++) {
        // Construct the file name
        string fileName = directoryPath + "DAOD_TRUTH3.output" + to_string(i) + ".root";

        // Open the ROOT file
        TFile* file = TFile::Open(fileName.c_str());

        // Access the TTree 
        TTree* tree = dynamic_cast<TTree*>(file->Get("CollectionTree"));

		
		tree->SetBranchAddress("TruthElectronsAuxDyn.px", &elpx);
		tree->SetBranchAddress("TruthElectronsAuxDyn.py", &elpy);
		tree->SetBranchAddress("TruthElectronsAuxDyn.pz", &elpz);
		tree->SetBranchAddress("TruthElectronsAuxDyn.e", &elenergy);
		tree->SetBranchAddress("TruthMuonsAuxDyn.px", &mupx);
		tree->SetBranchAddress("TruthMuonsAuxDyn.py", &mupy);
		tree->SetBranchAddress("TruthMuonsAuxDyn.pz", &mupz);
		tree->SetBranchAddress("TruthMuonsAuxDyn.e", &muenergy);
        tree->SetBranchAddress("TruthTausAuxDyn.px", &px);
		tree->SetBranchAddress("TruthTausAuxDyn.py", &py);
		tree->SetBranchAddress("TruthTausAuxDyn.pz", &pz);
		tree->SetBranchAddress("TruthTausAuxDyn.e", &energy);
    
	 for (Long64_t entry = 0; entry < tree->GetEntries(); ++entry) {
            // Get the entry from the TTree
            tree->GetEntry(entry);
			TLorentzVector Tau1;
            TLorentzVector Tau2;
			TLorentzVector higgs;
			TLorentzVector electron1;
			TLorentzVector electron2;
			TLorentzVector muon1;
			TLorentzVector muon2;
            // Set the momentum and energy for particle 1
            //electron1.SetPxPyPzE(elpx->at(0), elpy->at(0),elpz->at(0),elenergy->at(0));

            // Set the momenergytum and energy for particle 2
            //electron2.SetPxPyPzE(elpx->at(1), elpy->at(1),elpz->at(1),elenergy->at(1));    
			
			// Set the momentum and energy for particle 1
          //  muon1.SetPxPyPzE(mupx->at(0), mupy->at(0),mupz->at(0),muenergy->at(0));

            // Set the momenergytum and energy for particle 2
            //muon2.SetPxPyPzE(mupx->at(1), mupy->at(1),mupz->at(1),muenergy->at(1));
		
            // Set the momentum and energy for particle 1
           Tau1.SetPxPyPzE(px->at(0), py->at(0),pz->at(0),energy->at(0));

            // Set the momenergytum and energy for particle 2
            Tau2.SetPxPyPzE(px->at(1), py->at(1),pz->at(1),energy->at(1));
			

			//Hist->Fill(Tau1.Eta());
			//Hist2->Fill(Tau2.Eta());
			//Hist->Fill(muon1.Eta());
			//Hist2->Fill(muon2.Eta());
            //Hist->Fill(electron1.Eta());
			//Hist2->Fill(electron2.Eta());
            cout<<elpx->at(1)<<endl;
		}
		
	 }
	TCanvas* canvas = new TCanvas("canvas", "Pseudorapidity", 1600, 1200);
	gStyle -> SetOptStat(0);

	Hist->GetXaxis()->SetTitle(" Eta");
    Hist->GetYaxis()->SetTitle("Entries");
	Hist->SetLineColor(kBlue);
    Hist2->SetLineColor(kRed);
    Hist->Draw("HIST");
	Hist2->Draw("HISTS SAME");
	
	TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(Hist, "First tau","l");
    legend->AddEntry(Hist2, "Second tau", "l");
	legend->Draw();
	

	//canvas->SaveAs("ETA_tau.png"); 	
}