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
	TH1F* Hist = new TH1F("Hist", "Pt for hadronic taus", 100, 0, 1500);
	TH1F* Hist2 = new TH1F("Hist2", "Pt for non-hadronic taus", 100,  0, 1500);
    TH1F* Hist3 = new TH1F("Hist3", "Pt distribution", 100,  0, 1500);
    TH1F* Hist4 = new TH1F("Hist4", "Pseudorapidity", 100,  -5, 5);
    TH1F* Hist5 = new TH1F("Hist5", "mass", 100,  -5, 5);
    TH1F* Hist6 = new TH1F("Hist6", "Pseudorapidity", 100,  -5, 5);
    TH1F* Hist7 = new TH1F("Hist7", "mass", 100,  -5, 5);
    int totalEntries = 0;
    int brh=0,brnh=0;
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
        //trees for truth taus
		tree->SetBranchAddress("TruthTausAuxDyn.px", &px);
		tree->SetBranchAddress("TruthTausAuxDyn.py", &py);
		tree->SetBranchAddress("TruthTausAuxDyn.pz", &pz);
        tree->SetBranchAddress("TruthTausAuxDyn.e", &energy);


	 for (Long64_t entry = 0; entry <tree->GetEntries() ; ++entry) {
            // Get the entry from the TTree
            tree->GetEntry(entry);

            // Create TLorentzVector objects for each particle
            TLorentzVector Particle1;
            TLorentzVector Particle2;
            TLorentzVector Particle1truth;
            TLorentzVector Particle2truth;

            // Set the momentum and energy for particle 1
            Particle1.SetPtEtaPhiM(pt_vis->at(0), eta_vis->at(0),phi_vis->at(0),m_vis->at(0));

            // Set the momenergytum and energy for particle 2
            Particle2.SetPtEtaPhiM(pt_vis->at(1), eta_vis->at(1),phi_vis->at(1),m_vis->at(1));

            Particle1truth.SetPxPyPzE(px->at(0), py->at(0),pz->at(0),energy->at(0));

            // Set the momenergytum and energy for particle 2
            Particle2truth.SetPxPyPzE(px->at(1), py->at(1),pz->at(1),energy->at(1));

        Hist3->Fill(Particle1truth.Pt()/1000.); 
        Hist3->Fill(Particle2truth.Pt()/1000.);



        //CHECKING IF IT IS HANDRONIC FOR THE FIRST PARTICLE
    	if (IsHadronicTau->at(0)==1){
		    Hist->Fill(pt_vis->at(0)/1000.);
            Hist6->Fill(Particle1.Eta());
            brh++;
		}
		else {
            Hist2->Fill(pt_vis->at(0)/1000.);
            Hist7->Fill(Particle1.Eta());
            brnh++;
      
			}
		//SECOND PARTICLE
    	
        if (IsHadronicTau->at(1)==1){
		  
            Hist->Fill(Particle2.Pt()/1000.);
            Hist6->Fill(Particle2.Eta());
            brh++;
		}
		else{
            Hist2->Fill(Particle2.Pt()/1000.);
            Hist7->Fill(Particle2.Eta());
            brnh++;
			}
        totalEntries++;



        //eta
        if(Particle1.Pt() > Particle1.Pt()){

            Hist4->Fill(Particle1.Eta());
            Hist5->Fill(Particle2.Eta());


        }
       else{
        Hist5->Fill(Particle1.Eta());
        Hist4->Fill(Particle2.Eta());
       }

    
     }





	}

cout<<brh<<endl;
cout<<brnh<<endl;
cout<<brh+brnh<<" od   "<<totalEntries*2<<endl;	 
	TCanvas* canvas = new TCanvas("canvas", "Pt Distribution", 2000, 1500);
    gStyle -> SetOptStat(0);
    
    canvas->Divide(1, 2);
	/*
    canvas->cd(1);
	Hist3->GetYaxis()->SetRangeUser(0,17000);
	Hist3->GetXaxis()->SetTitle("Pt [Gev]");
    Hist3->GetYaxis()->SetTitle("Entries");
	Hist->SetFillColor(kAzure+2);
    Hist3->SetFillColor(kPink+2);
    Hist3->Draw("HIST");
    Hist->Draw("HIST SAME");

    TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);  
    legend->AddEntry(Hist3, "Pt of all taus", "f");  
    legend->AddEntry(Hist, "Pt of hadronic taus", "f");
    legend->SetBorderSize(0); 
    legend->SetFillColor(0); 
    legend->SetTextSize(0.035); 
    legend->SetBorderSize(0);
    legend->SetFillStyle(1001);  
    legend->SetFillStyle(0.5);  
	legend->Draw();



    canvas->cd(2);
    Hist3->GetXaxis()->SetTitle("Pt [Gev]");
    Hist3->GetYaxis()->SetTitle("Entries");
    Hist3->GetXaxis()->SetRangeUser(0,4000);
    Hist2->SetFillColor(kAzure+2);
    Hist3->SetFillColor(kPink+2);
    Hist3->Draw("HIST");
	Hist2->Draw("HIST SAME");
    TLegend* legend1 = new TLegend(0.7, 0.7, 0.9, 0.9);  
    legend1->AddEntry(Hist3, "Pt of all taus", "f");  
    legend1->AddEntry(Hist2, "Pt of non-hadronic taus", "f");
    legend1->SetBorderSize(0); 
    legend1->SetFillColor(0); 
    legend1->SetTextSize(0.035); 
    legend1->SetBorderSize(0);
    legend1->SetFillStyle(1001);  
    legend1->SetFillStyle(0.5);  
	legend1->Draw();
    */
    canvas->cd(1);
	Hist4->SetLineColor(kBlue);
    Hist5->SetLineColor(kRed);
    Hist4->GetXaxis()->SetTitle("Eta");
    Hist4->GetYaxis()->SetTitle("Entries");
    Hist4->Draw("HIST");
    Hist5->Draw("SAME HIST");


	TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(Hist4, "Leading vis_tau","l");
    legend->AddEntry(Hist5, "Sub-leading vis_tau ", "l");
	legend->Draw();

    canvas->cd(2);  
	Hist6->SetLineColor(kBlue);
    Hist7->SetLineColor(kRed);
    Hist6->GetXaxis()->SetTitle("Eta");
    Hist6->GetYaxis()->SetTitle("Entries");
    Hist6->Draw("HIST");
    Hist7->Draw("SAME HIST");


	TLegend* legend1 = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend1->AddEntry(Hist6, "tau_had","l");
    legend1->AddEntry(Hist7, "tau_l ", "l");
    legend1->SetTextSize(0.035); 
	legend1->Draw();


	canvas->SaveAs("etavis_tau.png"); 
    	
}
