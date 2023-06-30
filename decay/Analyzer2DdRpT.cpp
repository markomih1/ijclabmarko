#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}

//2D dR v Pt
//2D dR v Pt
//2D dR v Pt
//2D dR v Pt
//2D dR v Pt




void Analyzer::Plot(){
	string directoryPath = "/afs/cern.ch/user/m/mmihovil/work/decay/decroots3/";
	TH2F* Hist = new TH2F("2DHisto", "Higgs mass visible vs Pt_visible Higgs", 100, 0, 130,100,0,1000);
	
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
		tree->SetBranchAddress("TruthBottomAuxDyn.e", &energy);
        tree->SetBranchAddress("TruthTausAuxDyn.pt_vis", &pt_vis);
		tree->SetBranchAddress("TruthTausAuxDyn.eta_vis", &eta_vis);
		tree->SetBranchAddress("TruthTausAuxDyn.phi_vis", &phi_vis);
        tree->SetBranchAddress("TruthTausAuxDyn.m_vis", &m_vis);
    	tree->SetBranchAddress("TruthTausAuxDyn.IsHadronicTau", &IsHadronicTau);
       

    
	 for (Long64_t entry = 0; entry < tree->GetEntries(); ++entry) {
            // Get the entry from the TTree
            tree->GetEntry(entry);

            // Create TLorentzVector objects for each particle
            TLorentzVector Particle1;
            TLorentzVector Particle2;
            TLorentzVector higgs;
            TLorentzVector Tau1;
            TLorentzVector Tau2;
			TLorentzVector higgs1;
            // Set the momentum and energy for particle 1
            Tau1.SetPxPyPzE(px->at(0), py->at(0),pz->at(0),energy->at(0));

            // Set the momenergytum and energy for particle 2
            Tau2.SetPxPyPzE(px->at(1), py->at(1),pz->at(1),energy->at(1));

            higgs1=Tau1+Tau2;
            Particle1.SetPtEtaPhiM(pt_vis->at(0), eta_vis->at(0),phi_vis->at(0),m_vis->at(0));

            // Set the momenergytum and energy for Particle1 2
            Particle2.SetPtEtaPhiM(pt_vis->at(1), eta_vis->at(1),phi_vis->at(1),m_vis->at(1));


            higgs=Particle1+Particle2;

            // Fill the histeenergyogram with the transverse momenta of both particles
            if(IsHadronicTau->at(0)==1 && IsHadronicTau->at(1)==1)
                Hist->Fill(higgs.M()/1000.,higgs1.Pt()/1000);             
    

	}

	 }
	TCanvas* canvas = new TCanvas("canvas", "Higgs mass vs Pt Higgs", 800, 600);
	gStyle -> SetOptStat(0);

	Hist->GetXaxis()->SetTitle("mass [GeV]");
    Hist->GetYaxis()->SetTitle("Pt [GeV]");
    Hist->Draw("COLZ");
    TLatex* latex = new TLatex();
	latex->SetNDC();
	latex->SetTextFont(42);
	latex->SetTextSize(0.038);

	// Add the constraints as text on the canvas
	latex->DrawLatex(0.15, 0.80, "#bf{H #rightarrow #tau_{had} #tau_{had} }");


	canvas->SaveAs("2Dhh_.png"); 	
}
