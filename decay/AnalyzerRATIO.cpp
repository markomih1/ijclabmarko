#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}
void Analyzer::Plot(){
	string directoryPath = "/afs/cern.ch/user/m/mmihovil/work/decay/decrootsfile2/";
	TH1F* Hist = new TH1F("ratio", "", 100, 0, 1.2);
	TH2F* Hist1 = new TH2F("2DHisto", "Ptvis/Pt vs Pt", 100, 0, 1000,100,0,1);
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

        tree->SetBranchAddress("TruthTausAuxDyn.pt_vis", &pt_vis);
		tree->SetBranchAddress("TruthTausAuxDyn.eta_vis", &eta_vis);
		tree->SetBranchAddress("TruthTausAuxDyn.phi_vis", &phi_vis);
        tree->SetBranchAddress("TruthTausAuxDyn.m_vis", &m_vis);
    	tree->SetBranchAddress("TruthTausAuxDyn.IsHadronicTau", &IsHadronicTau);
       

    
	 for (Long64_t entry = 0; entry < tree->GetEntries(); ++entry) {
            // Get the entry from the TTree
            tree->GetEntry(entry);

            // Create TLorentzVector objects for each Tau
            TLorentzVector Particle1;
            TLorentzVector Particle2;
            TLorentzVector Tau1;
            TLorentzVector Tau2;
            TLorentzVector higgs;
            TLorentzVector higgs1;
            Particle1.SetPtEtaPhiM(pt_vis->at(0), eta_vis->at(0),phi_vis->at(0),m_vis->at(0));

            // Set the momenergytum and energy for Particle1 2
            Particle2.SetPtEtaPhiM(pt_vis->at(1), eta_vis->at(1),phi_vis->at(1),m_vis->at(1));

            Tau1.SetPxPyPzE(px->at(0), py->at(0),pz->at(0),energy->at(0));

            // Set the momenergytum and energy for particle 2
            Tau2.SetPxPyPzE(px->at(1), py->at(1),pz->at(1),energy->at(1));


            higgs=Particle1+Particle2;
            higgs1=Tau1+Tau2;
	        //if( (Particle1.Pt()>25000 && TMath::Abs(Particle1.Eta())<2.5) && (Particle2.Pt()>25000 && TMath::Abs(Particle2.Eta())<2.5) && (Tau1.Pt()>25000 && TMath::Abs(Tau1.Eta())<2.5) && (Tau2.Pt()>25000 && TMath::Abs(Tau2.Eta())<2.5) )

            Hist->Fill(Particle1.Pt()/Tau1.Pt());
             Hist->Fill(Particle2.Pt()/Tau2.Pt());
             //Hist->Fill(higgs.Pt()/higgs1.Pt());
           
        /*
	        if( (Particle1.Pt()>25000 && TMath::Abs(Particle1.Eta())<2.5) && (Particle2.Pt()>25000 && TMath::Abs(Particle2.Eta())<2.5) && (Tau1.Pt()>25000 && TMath::Abs(Tau1.Eta())<2.5) && (Tau2.Pt()>25000 && TMath::Abs(Tau2.Eta())<2.5) ){
                if((higgs.Pt()/higgs1.Pt())<1.5)
                Hist1->Fill(higgs1.Pt()/1000.,higgs.Pt()/higgs1.Pt());       
            }
            */
	}

	 }
	TCanvas* canvas = new TCanvas("canvas", "Pt Distribution", 800, 600);
	gStyle -> SetOptStat(0);

	Hist->GetXaxis()->SetTitle("p_{T_Higgs_vis}/p_{T_Higgs_true}");
    Hist->GetYaxis()->SetTitle("Entries");
    Hist->Draw("HIST");
    TLatex* latex = new TLatex();
	latex->SetNDC();
	latex->SetTextFont(42);
	latex->SetTextSize(0.038);

	// Add the constraints as text on the canvas
	latex->DrawLatex(0.65, 0.85, "#bf{H #rightarrow #tau #tau }");


	canvas->SaveAs("ratio2d.png"); 	
}
