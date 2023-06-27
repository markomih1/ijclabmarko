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
	TH1F* massHist2 = new TH1F("massHist2", "MASS Distribution", 300, 0, 2000);

	int excluded=0,numevents=0;
	 for (int i = 0; i < 30; i++) {
        // Construct the file name
        string fileName = directoryPath + "DAOD_TRUTH3.output" + to_string(i) + ".root";

        // Open the ROOT file
        TFile* file = TFile::Open(fileName.c_str());

        // Access the TTree 
        TTree* tree = dynamic_cast<TTree*>(file->Get("CollectionTree"));

		//tree->SetBranchAddress("TruthBottomAuxDyn.m", &mass);
		//tree->SetBranchAddress("TruthBottomAuxDyn.px", &px);
		//tree->SetBranchAddress("TruthBottomAuxDyn.py", &py);
		//tree->SetBranchAddress("TruthBottomAuxDyn.pz", &pz);
		//tree->SetBranchAddress("TruthBottomAuxDyn.e", &energy);

		tree->SetBranchAddress("TruthTausAuxDyn.pt_vis", &pt_vis);
		tree->SetBranchAddress("TruthTausAuxDyn.eta_vis", &eta_vis);
		tree->SetBranchAddress("TruthTausAuxDyn.phi_vis", &phi_vis);
        tree->SetBranchAddress("TruthTausAuxDyn.m_vis", &m_vis);
    	tree->SetBranchAddress("TruthTausAuxDyn.IsHadronicTau", &IsHadronicTau);


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

		/*
			higgs=Bottom1+Bottom2;
			if (higgs.M()>120000 && higgs.M()<130000){
				//massHist->Fill(higgs.M()/1000);
			}
			else excluded++;
			*/
			if(IsHadronicTau->at(0)==0)
				 massHist->Fill(m_vis->at(0));
		
			if(IsHadronicTau->at(1)==0)
				 massHist->Fill(m_vis->at(1));


			massHist2->Fill(Bottom1.M());
			massHist2->Fill(Bottom2.M());



		}
		numevents +=tree->GetEntries();
	 }

	int notincluded=excluded*100/numevents;
	 cout<<notincluded<<"%"<<endl;
	 
	TCanvas* canvas = new TCanvas("canvas", "Pt Distribution", 2500, 1500);
	gStyle -> SetOptStat(0);
	massHist->GetXaxis()->SetRangeUser(0,30000);
	massHist2->GetXaxis()->SetRangeUser(0,30000);
	massHist->GetXaxis()->SetTitle("leptonic tau_vis mass [MeV]");

    massHist->GetYaxis()->SetTitle("Entries");
	massHist->SetLineColor(kBlue);
    massHist2->SetLineColor(kRed);
    massHist->Draw("HIST");
	//massHist2->Draw("HIST SAME");
	TLegend* legend1 = new TLegend(0.4, 0.7, 0.6, 0.9);  
    legend1->AddEntry(massHist, "mass of tau_vis", "l");  
    legend1->AddEntry(massHist2, "mass of tau", "l");
	//legend1->Draw();
	/*
	TLatex* latex = new TLatex();
	latex->SetNDC();
	latex->SetTextFont(42);
	latex->SetTextSize(0.03);

	// Add the constraints as text on the canvas
	latex->DrawLatex(0.2, 0.8, "3% of events excluded");
	latex->DrawLatex(0.2, 0.75, "for range [120 GeV, 130 GeV]");
*/

	canvas->SaveAs("vismassL.png"); 	
}
