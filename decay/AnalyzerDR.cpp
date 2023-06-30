#include"Analyzer.h"


Analyzer::Analyzer(){


}


Analyzer::~Analyzer(){



}

//dR
//dR
//dR
//dR
//dR




void Analyzer::Plot(){
	string directoryPath = "/afs/cern.ch/user/m/mmihovil/work/decay/decrootsfile2/";
	TH1F* Hist = new TH1F("Hist", " Separation between hadronic and leptonic tau", 100, 0, 5);
	TH1F* Hist2 = new TH1F("Hist2", " Pseudorapidity of bottom quarks", 100,-5, 5);
	 for (int i = 0; i < 30; i++) {
        // Construct the file name
        string fileName = directoryPath + "DAOD_TRUTH3.output" + to_string(i) + ".root";

        // Open the ROOT file
        TFile* file = TFile::Open(fileName.c_str());

        // Access the TTree 
        TTree* tree = dynamic_cast<TTree*>(file->Get("CollectionTree"));

		
		tree->SetBranchAddress("TruthTausAuxDyn.pt_vis", &pt_vis);
		tree->SetBranchAddress("TruthTausAuxDyn.eta_vis", &eta_vis);
		tree->SetBranchAddress("TruthTausAuxDyn.phi_vis", &phi_vis);
        tree->SetBranchAddress("TruthTausAuxDyn.m_vis", &m_vis);
		tree->SetBranchAddress("TruthTausAuxDyn.IsHadronicTau", &IsHadronicTau);
		tree->SetBranchAddress("TruthBottomAuxDyn.px", &px);
		tree->SetBranchAddress("TruthBottomAuxDyn.py", &py);
		tree->SetBranchAddress("TruthBottomAuxDyn.pz", &pz);
		tree->SetBranchAddress("TruthBottomAuxDyn.e", &energy);
    
	 for (Long64_t entry = 0; entry < tree->GetEntries(); ++entry) {
            // Get the entry from the TTree
            tree->GetEntry(entry);
			TLorentzVector Tau1;
            TLorentzVector Tau2;
			TLorentzVector higgs;
            // Set the momentum and energy for particle 1
            Tau1.SetPtEtaPhiM(pt_vis->at(0), eta_vis->at(0),phi_vis->at(0),m_vis->at(0));

            // Set the momenergytum and energy for Tau 2
            Tau2.SetPtEtaPhiM(pt_vis->at(1), eta_vis->at(1),phi_vis->at(1),m_vis->at(1));

		if( (Tau1.Pt()>20000 && TMath::Abs(Tau1.Eta())<2.5) && (Tau2.Pt()>20000 && TMath::Abs(Tau2.Eta())<2.5)){		
			if( (IsHadronicTau->at(1)==0 && IsHadronicTau->at(0)==1 ) || (IsHadronicTau->at(1)==1 && IsHadronicTau->at(0)==0 ))

    		Hist->Fill(Tau1.DeltaR(Tau2));
		}
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
  	TLatex* latex = new TLatex();
	latex->SetNDC();
	latex->SetTextFont(42);
	latex->SetTextSize(0.034);

	// Add the constraints as text on the canvas
	latex->DrawLatex(0.65, 0.8, " |p_{T}| > 20 GeV");
	latex->DrawLatex(0.65, 0.75, " |#eta| < 2.5");
	canvas->SaveAs("dR_CUT_tau_hl.png"); 	
}
