#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}


void Analyzer::Plot(){
	//first file
	file = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree3.root");
	tree1 = (TTree*)file -> Get("lheTree");
	tree1 -> SetBranchAddress("HH_mass", &HH_mass);
	tree1 -> SetBranchAddress("jj_mass", &jj_mass);
	tree1 -> SetBranchAddress("vH1", &vH1);
	tree1 -> SetBranchAddress("vH2", &vH2);
	tree1 -> SetBranchAddress("vSum", &vSum);
	tree1 -> SetBranchAddress("vq1in", &vq1in);
	tree1 -> SetBranchAddress("vq2in", &vq2in);
	tree1 -> SetBranchAddress("vqoutSum", &vqoutSum);
	tree1 -> SetBranchAddress("vq1out", &vq1out);
	tree1 -> SetBranchAddress("vq2out", &vq2out);
	
	//second file
	file2 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree-1.root");
	tree2 = (TTree*)file2 -> Get("lheTree");
	tree2 -> SetBranchAddress("HH_mass", &HH_mass);
	tree2 -> SetBranchAddress("jj_mass", &jj_mass);
	tree2 -> SetBranchAddress("vH1", &vH1);
	tree2 -> SetBranchAddress("vH2", &vH2);
	tree2 -> SetBranchAddress("vSum", &vSum);
	tree2 -> SetBranchAddress("vq1in", &vq1in);
	tree2 -> SetBranchAddress("vq2in", &vq2in);
	tree2 -> SetBranchAddress("vqoutSum", &vqoutSum);
	tree2 -> SetBranchAddress("vq1out", &vq1out);
	tree2 -> SetBranchAddress("vq2out", &vq2out);
	//third file
	file3 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree2.root");
	tree3 = (TTree*)file3 -> Get("lheTree");
	tree3 -> SetBranchAddress("HH_mass", &HH_mass);
	tree3 -> SetBranchAddress("jj_mass", &jj_mass);
	tree3 -> SetBranchAddress("vH1", &vH1);
	tree3 -> SetBranchAddress("vH2", &vH2);
	tree3 -> SetBranchAddress("vSum", &vSum);
	tree3 -> SetBranchAddress("vq1in", &vq1in);
	tree3 -> SetBranchAddress("vq2in", &vq2in);
	tree3 -> SetBranchAddress("vqoutSum", &vqoutSum);
	tree3 -> SetBranchAddress("vq1out", &vq1out);
	tree3 -> SetBranchAddress("vq2out", &vq2out);
	//forth file
	file4 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree1.root");
	tree4 = (TTree*)file4 -> Get("lheTree");
	tree4 -> SetBranchAddress("HH_mass", &HH_mass);
	tree4 -> SetBranchAddress("jj_mass", &jj_mass);
	tree4 -> SetBranchAddress("vH1", &vH1);
	tree4 -> SetBranchAddress("vH2", &vH2);
	tree4 -> SetBranchAddress("vSum", &vSum);
	tree4 -> SetBranchAddress("vq1in", &vq1in);
	tree4 -> SetBranchAddress("vq2in", &vq2in);
	tree4 -> SetBranchAddress("vqoutSum", &vqoutSum);
	tree4 -> SetBranchAddress("vq1out", &vq1out);
	tree4 -> SetBranchAddress("vq2out", &vq2out);

	//ploting 
	Long64_t nentries = tree1 -> GetEntriesFast();
	gStyle -> SetOptStat(0);

	/*
	//HHmass
	canvas = new TCanvas();
	canvas -> SetCanvasSize(2800, 2000);
	hist1 = new TH1F("hist", "hist", 100, 0., 2000.);
	hist2 = new TH1F("hist2", "hist2", 100, 0., 2000.);
	hist3 = new TH1F("hist3", "hist3", 100, 0., 2000.);
	hist4 = new TH1F("hist4", "hist4", 100, 0., 2000.);
	hist1->GetYaxis()->SetRangeUser(0, 8000);
	hist1 -> SetTitle("HH_mass");
	hist1 -> GetXaxis() -> SetTitle("mass [GeV]");
	hist1 -> GetYaxis() -> SetTitle("Entries");


	for (int i = 0; i < nentries; i++){
			tree1 -> GetEntry(i);
			hist1 -> Fill(HH_mass);
			tree2 -> GetEntry(i);
			hist2 -> Fill(HH_mass);
			tree3 -> GetEntry(i);
			hist3 -> Fill(HH_mass);
			tree4 -> GetEntry(i);
			hist4 -> Fill(HH_mass);
	
	}
	hist1->SetLineColor(kRed);
	hist1-> Draw("HIST");
	hist2->SetLineColor(kBlue);
	hist2->Draw("HIST SAME");
	hist3->SetLineColor(kGreen);
	hist3-> Draw("HIST SAME");
	hist4->SetLineColor(kMagenta);
	hist4-> Draw("HIST SAME");
	TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9); 
	legend->AddEntry(hist1, "K2v=3", "l"); 
	legend->AddEntry(hist2, "K2v=-1", "l"); 
	legend->AddEntry(hist3, "K2v=2", "l"); 
	legend->AddEntry(hist4, "K2v=1", "l"); 

	legend->Draw();
	
	canvas -> Print("Plot_mHHtest.pdf");
}*/


/*
//jj mass
canvas = new TCanvas();
	canvas -> SetCanvasSize(2800, 2000);
	hist1 = new TH1F("hist", "hist", 100, 0., 4000.);
	hist2 = new TH1F("hist2", "hist2", 100, 0., 4000.);
	hist3 = new TH1F("hist3", "hist3", 100, 0., 4000.);
	hist4 = new TH1F("hist4", "hist4", 100, 0., 4000.);
	hist1->GetYaxis()->SetRangeUser(0, 4000);
	hist1 -> SetTitle("jj_mass");
	hist1 -> GetXaxis() -> SetTitle("mass [GeV]");
	hist1 -> GetYaxis() -> SetTitle("Entries");

	for (int i = 0; i < nentries; i++){
			tree1 -> GetEntry(i);
			hist1 -> Fill(jj_mass);
			tree2 -> GetEntry(i);
			hist2 -> Fill(jj_mass);
			tree3 -> GetEntry(i);
			hist3 -> Fill(jj_mass);
			tree4 -> GetEntry(i);
			hist4 -> Fill(jj_mass);
	
	}
	hist1->SetLineColor(kRed);
	hist1-> Draw("HIST");
	hist2->SetLineColor(kBlue);
	hist2->Draw("HIST SAME");
	hist3->SetLineColor(kGreen);
	hist3-> Draw("HIST SAME");
	hist4->SetLineColor(kMagenta);
	hist4-> Draw("HIST SAME");
	TLegend* legend1 = new TLegend(0.7, 0.7, 0.9, 0.9); 
	legend1->AddEntry(hist1, "K2v=3", "l"); 
	legend1->AddEntry(hist2, "K2v=-1", "l"); 
	legend1->AddEntry(hist3, "K2v=2", "l"); 
	legend1->AddEntry(hist4, "K2v=1", "l"); 
	legend1->Draw();
	
	canvas -> Print("Plot_mjjtest.pdf");
}
*/


/*
//HH TRANSVERSE MOMENTUM

canvas = new TCanvas();
	canvas -> SetCanvasSize(1500, 1500);
	hist1 = new TH1F("hist", "hist", 100, 0., 2000.);
	hist2 = new TH1F("hist2", "hist2", 100, 0., 2000.);
	hist3 = new TH1F("hist3", "hist3", 100, 0., 2000.);
	hist4 = new TH1F("hist4", "hist4", 100, 0., 2000.);
	hist1->GetYaxis()->SetRangeUser(0, 23000);
	hist1 -> SetTitle("HH_TRANSVERSE MOMENTUM");
	hist1 -> GetXaxis() -> SetTitle("mass [GeV]");

	for (int i = 0; i < nentries; i++){
			tree1 -> GetEntry(i);
			hist1 -> Fill(vSum->Pt());
			tree2 -> GetEntry(i);
			hist2 -> Fill(vSum->Pt());
			tree3 -> GetEntry(i);
			hist3 -> Fill(vSum->Pt());
			tree4 -> GetEntry(i);
			hist4 -> Fill(vSum->Pt());
	
	}
	hist1->SetLineColor(kRed);
	hist1-> Draw("HIST");
	hist2->SetLineColor(kBlue);
	hist2->Draw("HIST SAME");
	hist3->SetLineColor(kGreen);
	hist3-> Draw("HIST SAME");
	hist4->SetLineColor(kMagenta);
	hist4-> Draw("HIST SAME");
	TLegend* legend1 = new TLegend(0.7, 0.7, 0.9, 0.9); 
	legend1->AddEntry(hist1, "K2v=3", "l"); 
	legend1->AddEntry(hist2, "K2v=-1", "l"); 
	legend1->AddEntry(hist3, "K2v=2", "l"); 
	legend1->AddEntry(hist4, "K2v=1", "l"); 
	legend1->Draw();
	
	canvas -> Print("Plot_HHpt_test.pdf");
}
*/


/*
//RAPIDITY

canvas = new TCanvas();
	canvas -> SetCanvasSize(1500, 1500);
	hist1 = new TH1F("hist", "hist", 100, -5. , 5.);
	hist2 = new TH1F("hist2", "hist2", 100, -5., 5.);
	//hist3 = new TH1F("hist3", "hist3", 100, 0., 2000.);
	//hist1->GetYaxis()->SetRangeUser(0, 23000);


	for (int i = 0; i < nentries; i++){
			tree4 -> GetEntry(i);

		Double_t y1 = vq1out->Eta();
		Double_t y2 = vq2out->Eta();
		
		hist1 -> Fill(y1);
		hist2 -> Fill(y2);
		
	
	}

	THStack* stack = new THStack("stack", "Rapidities for K2v=1");
  hist1->SetLineColor(kRed);
  hist2->SetLineColor(kBlue);
  stack->Add(hist1);
  stack->Add(hist2);
  stack->Draw("nostack");
  stack->GetXaxis()->SetTitle("Rapidity");
	TLegend* legend1 = new TLegend(0.8, 0.8, 0.95, 0.95); 
	legend1->SetTextSize(0.03);
	legend1->SetBorderSize(1);
	legend1->AddEntry(hist1, "jet1", "l"); 
	legend1->AddEntry(hist2, "jet2", "l"); 
	
	legend1->Draw();
	
	canvas -> Print("Plot_rapidity1.pdf");
}

*/


/*

// K_lambda vs cross section

  c = new TCanvas("c","c",1200,800);
 
 
  gStyle->SetOptFit();


  double K_2v[4]  = {-1,1,2,3};
  double cross[4]  = {0.06234,0.001226,0.009959,0.04488};
  double K_2v_err[4] = {0.,0.,0.,0.};
  double cross_err[4] = {5.263e-05,8.264e-07,8.685e-06,3.837e-05};

   gr = new TGraphErrors(4,K_2v,cross,K_2v_err,cross_err);



	//fit
	//TF1* funkc = new TF1("funkc", "expo");
	TF1 *funkc = new TF1("funkc", "[0]*x*x + [1]*x + [2]", 0, 10);
	funkc->SetParameter(0, 1.0);
	funkc->SetParameter(1, 1.0);
	funkc->SetParameter(2, 0.0);
	funkc -> SetParName(0, "A");
   funkc -> SetParName(1, "B");
   funkc -> SetParName(2, "C");
	
	gr->Fit(funkc);



  gr->SetTitle("Dependence of cross-section on K_2v");
  gr->SetMarkerColor(kBlack);
  gr->SetMarkerStyle(21);
  gr -> GetXaxis() -> SetTitle("K_2v");
  gr -> GetYaxis() -> SetTitle("Cross-section [pb]");

  gr->Draw("AP");
  funkc->Draw("SAME");

  c->SaveAs("Cross-section10.pdf");
}
*/

/*
///MIN MAX MOMETUM


 c = new TCanvas("c","c",1200,800);
 
 
gStyle->SetOptFit();
//200bins for jj_mass
TH1F* hist1 = new TH1F("hist1", "hist1", 100, 0,1000);
TH1F* hist2 = new TH1F("hist2", "hist2", 100,0,1000);
hist1 -> SetTitle("MIN and MAX HH_TRANSVERSE MOMENTUM");
//hist1->GetYaxis()->SetRangeUser(0, 20000); //for jj
hist1->GetYaxis()->SetRangeUser(0, 5000);
//hist1->GetXaxis()->SetRangeUser(0, 700);

for (Int_t i = 0; i < nentries; i++) {
    tree1->GetEntry(i);
    Float_t pt1 = vH1->Pt();
	Float_t pt2 = vH2->Pt();

    if (pt1 >  pt2){
		hist1->Fill(pt1);
		hist2->Fill(pt2);
	}
	else {
		hist1->Fill(pt2);
		hist2->Fill(pt1);
		}
}


hist1->SetLineColor(kRed);
hist2->SetLineColor(kBlue);
hist1->Draw("HIST");
hist2->Draw("HIST SAME");
hist1 -> GetXaxis() -> SetTitle("p_t [GeV]");
TLegend* legend1 = new TLegend(0.7, 0.7, 0.9, 0.9); 
	legend1->AddEntry(hist1, "Leading Pt", "l"); 
	legend1->AddEntry(hist2, "Second leading Pt", "l"); 

	legend1->Draw();
c->SaveAs("HHMINMAXPT.pdf");
cout << hist1->GetEntries()<<endl;

cout << hist2->GetEntries()<<endl;

} */







/////////// RAPIDITY AND JJ_mass

canvas = new TCanvas();
	canvas -> SetCanvasSize(2800, 2000);
	hist1 = new TH1F("hist", "hist", 100, 0., 4000.);
	hist2 = new TH1F("hist2", "hist2", 100, 0., 4000.);
	hist3 = new TH1F("hist3", "hist3", 100, 0., 4000.);
	hist4 = new TH1F("hist4", "hist4", 100, 0., 4000.);
	hist5 = new TH1F("hist5", "hist5", 100, 0., 4000.);
	hist1->GetYaxis()->SetRangeUser(0, 3500);
	hist1 -> SetTitle("jj_mass dependence on rapidity for K2v=3");
	hist1 -> GetXaxis() -> SetTitle("mass [GeV]");
	hist1 -> GetYaxis() -> SetTitle("Entries");

	for (int i = 0; i < nentries; i++){
			tree1 -> GetEntry(i);
			hist1 -> Fill(jj_mass);
			Double_t y1 = vq1out->Eta();
			Double_t y2 = vq2out->Eta();

				if(TMath::Abs(y1)>4.5 || TMath::Abs(y2)>4.5)
				hist2 -> Fill(jj_mass);

				else if(TMath::Abs(y1)>2.5 || TMath::Abs(y2)>2.5)
				hist3 -> Fill(jj_mass);

				else 
				hist4 -> Fill(jj_mass);
	
	}

	for (int j = 0; j < nentries; j++){
			tree1 -> GetEntry(j);
			Double_t x1 = vq1out->Eta();
			Double_t x2 = vq2out->Eta();

				if (TMath::Abs(x1) < 4.5 && TMath::Abs(x2) < 4.5  && TMath::Abs(x1) > 2.5 && TMath::Abs(x2)>2.5)
				hist5 -> Fill(jj_mass);
	}
	hist1->SetLineColor(kBlack);
	hist1-> Draw("HIST");
	hist2->SetLineColor(kBlue);
	hist2->Draw("HIST SAME");
	hist3->SetLineColor(kRed);
	hist3-> Draw("HIST SAME");
	hist4->SetLineColor(kMagenta);
	hist4-> Draw("HIST SAME");
	hist5->SetLineColor(kGreen);
	hist5-> Draw("HIST SAME");
	TLegend* legend1 = new TLegend(0.56, 0.7, 0.9, 0.9); 
	legend1->AddEntry(hist1, "jj mass", "l"); 
	legend1->AddEntry(hist2, "eta>4.5 (atleast 1 jet) [9.2993]", "l"); 
	legend1->AddEntry(hist3, "2.5<eta<4.5 (atleast 1 jet) [79.233%]", "l"); 
	legend1->AddEntry(hist4, "eta<2.5 (both jets) [11.467%]", "l"); 
	legend1->AddEntry(hist5, "2.5<eta<4.5 (both jets) [24.194%]", "l"); 
	legend1->SetTextSize(0.02);
	legend1->Draw();
	cout << "eta>4.5: " << hist2->GetEntries() *100 / 150000 <<"%" << endl;
	cout << "2.5<eta<4.5: " << hist3->GetEntries() *100 / 150000 <<"%" << endl;
	cout << "eta<2.5: " << hist4->GetEntries() *100 / 150000 <<"%" << endl;
	cout << "both in[2.4,4.5]: " << hist5->GetEntries() *100 / 150000 <<"%" << endl;
	canvas -> Print("Plot_mjj_eta.pdf");
}



