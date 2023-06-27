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
	TH2F* Hist = new TH2F("2DHisto", "Eta of taus vs Pt_H", 100, 0, 300,100,-5,5);
	
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
            Particle1.SetPtEtaPhiM(pt_vis->at(0), eta_vis->at(0),phi_vis->at(0),m_vis->at(0));

            // Set the momenergytum and energy for Particle1 2
            Particle2.SetPtEtaPhiM(pt_vis->at(1), eta_vis->at(1),phi_vis->at(1),m_vis->at(1));


            higgs=Particle1+Particle2;
           
            double deltaR = Particle1.DeltaR(Particle2);
            // Fill the histeenergyogram with the transverse momenta of both particles

                Hist->Fill(higgs.Pt()/1000.,Particle1.Eta());     
		 	    Hist->Fill(higgs.Pt()/1000.,Particle2.Eta());   
    


		
		

	}

	 }
	TCanvas* canvas = new TCanvas("canvas", "Pt Distribution", 800, 600);
	gStyle -> SetOptStat(0);

	Hist->GetXaxis()->SetTitle("Pt [GeV]");
    Hist->GetYaxis()->SetTitle("#eta");
    Hist->Draw("COLZ");
    TLatex* latex = new TLatex();
	latex->SetNDC();
	latex->SetTextFont(42);
	latex->SetTextSize(0.038);

	// Add the constraints as text on the canvas
	latex->DrawLatex(0.65, 0.85, "#bf{H #rightarrow #tau #tau }");


	canvas->SaveAs("2D_H-tautauETA.png"); 	
}
