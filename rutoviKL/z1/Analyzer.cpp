#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}

//HH_mass

void Analyzer::Plot(){

	file = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutovi/tree-3.root");
	tree = (TTree*)file -> Get("lheTree");
	tree -> SetBranchAddress("HH_mass", &HH_mass);
	Long64_t nentries = tree -> GetEntriesFast();
	canvas = new TCanvas();
	canvas -> SetCanvasSize(700, 700);
	hist = new TH1F("hist", "hist", 100, 0., 2000.);
	
    
    for (int i = 0; i < nentries; i++){

		tree -> GetEntry(i);
		hist -> Fill(HH_mass);
	
	}
	gStyle -> SetOptStat(0);
	


	hist -> SetTitle("HH_mass");
	hist -> GetXaxis() -> SetTitle("mass [GeV]");

	hist -> Draw("HIST");

	canvas -> Print("Plot_mHH.pdf");

}


//jj_mass

void Analyzer::Plot1(){

	file = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutovi/tree-3.root");
	tree = (TTree*)file -> Get("lheTree");
	tree -> SetBranchAddress("jj_mass", &jj_mass);
	Long64_t nentries = tree -> GetEntriesFast();
	canvas1 = new TCanvas();
	canvas1 -> SetCanvasSize(700, 700);
	hist1 = new TH1F("hist", "hist", 100, 0., 3000.);
	
    
    for (int i = 0; i < nentries; i++){

		tree -> GetEntry(i);
		hist1 -> Fill(jj_mass);
	
	}
	gStyle -> SetOptStat(0);
	


	hist1 -> SetTitle("jj_mass");
	hist1  -> GetXaxis() -> SetTitle("mass [GeV]");

	hist1 -> Draw("HIST");

	canvas1 -> Print("Plot_mjj.pdf");

}



//momentum plots
void Analyzer::Plot3(){

	file = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutovi/tree-3.root");
	tree = (TTree*)file -> Get("lheTree");
	tree -> SetBranchAddress("vH1", &vH1);
	tree -> SetBranchAddress("vH2", &vH2);
	tree -> SetBranchAddress("vSum", &vSum);
	
	Long64_t nentries = tree -> GetEntriesFast();
	canvas3 = new TCanvas();
	canvas3 -> SetCanvasSize(2600, 1300);
	canvas3->Divide(2,1);
	hist3 = new TH1F("hist", "hist", 100, 0., 2000.);
	hist9 = new TH1F("hist9", "hist9", 100, 0., 2000.);
	hist8 = new TH1F("hist8", "hist8", 100, 0., 2000.);
	


 for (int i = 0; i < nentries; i++){

		tree -> GetEntry(i);
		hist3 -> Fill(vSum->P());
		hist8 -> Fill(vH1->Pt());
		hist9 -> Fill(vH2->Pt());
	}

	gStyle -> SetOptStat(0);
	
	
	canvas3->cd(1);

	hist3 -> SetTitle("momentum of HH");
	hist3 -> GetXaxis() -> SetTitle("pHH [GeV]");

	hist3 -> Draw();




	canvas3->cd(2);
    hist8->SetLineColor(kRed);

	hist8-> SetTitle("transverse momentum of H");
	hist8 -> GetXaxis() -> SetTitle("p_t_H [GeV]");
 	hist9->SetLineColor(kBlue);
	hist8->Draw("HIST");
	hist9->Draw("SAME");




	canvas3 -> Print("Plot_p.pdf");

}


//missing q momentum

void Analyzer::Plot4(){

	file = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutovi/tree-3.root");
	tree = (TTree*)file -> Get("lheTree");
	tree -> SetBranchAddress("vq1in", &vq1in);
	tree -> SetBranchAddress("vq2in", &vq2in);
	tree -> SetBranchAddress("vqoutSum", &vqoutSum);

	
	Long64_t nentries = tree -> GetEntriesFast();
	canvas4 = new TCanvas();
	canvas4 -> SetCanvasSize(700, 700);
	hist4 = new TH1F("hist", "hist", 100, 0., 4000.);
	


 for (int i = 0; i < nentries; i++){

		tree -> GetEntry(i);
		double missing= vq1in->P() + vq2in->P() - vqoutSum->P();
		hist4 -> Fill(missing);
	
	}

	gStyle -> SetOptStat(0);
	


	hist4 -> SetTitle("missing q momentum");
	hist4 -> GetXaxis() -> SetTitle("p_missing [GeV]");

	hist4 -> Draw();
	canvas4 -> Print("Plot_missing_p.pdf");

}

//rapidity
void Analyzer::Plot5(){

	file = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutovi/tree-3.root");
	tree = (TTree*)file -> Get("lheTree");
	tree -> SetBranchAddress("vq1out", &vq1out);
	tree -> SetBranchAddress("vq2out", &vq2out);

	
	Long64_t nentries = tree -> GetEntriesFast();
	canvas5= new TCanvas();
	canvas5-> SetCanvasSize(700, 700);
	canvas5->Divide(2,1);

	hist5= new TH1F("hist5", "hist5", 100, -5, 5);
	hist6= new TH1F("hist6", "hist6", 100, -5, 5);
	hist7= new TH1F("hist7", "hist7", 100, 0, 10);
	mg = new TMultiGraph();


 for (int i = 0; i < nentries; i++){

		tree -> GetEntry(i);

		Double_t y1 = vq1out->Rapidity();
		Double_t y2 = vq2out->Rapidity();
		Double_t y3= TMath::Abs(y1-y2);
		//Double_t y2 = 0.5 * log((vq2out->E() + vq2out->P()) / (vq2out->E() - vq2out->P()));
		hist5 -> Fill(y1);
		hist6 -> Fill(y2);
		hist7 -> Fill(y3);
	
	}

	
	canvas5->cd(1);
	THStack* stack = new THStack("stack", "Rapidities");
  hist5->SetLineColor(kRed);
  hist6->SetLineColor(kBlue);
  stack->Add(hist5);
  stack->Add(hist6);
  stack->Draw("nostack");
  stack->GetXaxis()->SetTitle("Rapidity");
  //hist5->Draw();
//  hist6->Draw("SAME");


	canvas5->cd(2);

	hist7 -> SetTitle("delta eta ");
	hist7->Draw();


	canvas5-> Print("rapidity.pdf");
}







// 2D Plots

// missing momentum vs HH momentum 

void Analyzer::Plot6(){

	file = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutovi/tree5.root");
	tree = (TTree*)file -> Get("lheTree");
	tree -> SetBranchAddress("vSum", &vSum);

	tree -> SetBranchAddress("vq1in", &vq1in);
	tree -> SetBranchAddress("vq2in", &vq2in);
	tree -> SetBranchAddress("vqoutSum", &vqoutSum);

	
	Long64_t nentries = tree -> GetEntriesFast();
	canvas6 = new TCanvas();
	canvas6 -> SetCanvasSize(1500, 1000);
	hist10 = new TH2F("hist10", "hist10", 100, 0, 1000, 100, 0, 4000);
	


 for (int i = 0; i < nentries; i++){

		 tree->GetEntry(i);
		
         hist10->Fill(vSum->P(), vq1in->P() + vq2in->P()  - vqoutSum->P());
		 	
	}
	gStyle -> SetOptStat(0);
	


	hist10 -> SetTitle("missing momentum vs HH momentum ");
	hist10 -> GetXaxis() -> SetTitle("HHmomentum [GeV]");
	hist10 -> GetYaxis() -> SetTitle("p_missing [GeV]");

	hist10 -> Draw("COLZ");
	canvas6 -> Print("2Dmomentum.pdf");

}



// mass HH vs mass jj

void Analyzer::Plot7(){

	file = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutovi/tree-3.root");
	tree = (TTree*)file -> Get("lheTree");
	tree -> SetBranchAddress("HH_mass", &HH_mass);
	tree -> SetBranchAddress("jj_mass", &jj_mass);

	
	Long64_t nentries = tree -> GetEntriesFast();
	canvas7 = new TCanvas();
	canvas7 -> SetCanvasSize(1500, 1000);
	hist11 = new TH2F("hist11", "hist11", 100, 250, 600, 100, 0, 2000);
	


 for (int i = 0; i < nentries; i++){

		 tree->GetEntry(i);
         hist11->Fill(HH_mass, jj_mass);
	
	}

	gStyle -> SetOptStat(0);
	


	hist11 -> SetTitle("mass HH vs mass jj ");
	hist11 -> GetXaxis() -> SetTitle("mass HH [GeV]");
	hist11 -> GetYaxis() -> SetTitle("mass jj [GeV]");

	hist11 -> Draw("COLZ");
	canvas7 -> Print("2Dmass.pdf");

}




// K_lambda vs cross section

void Analyzer::Plot8()
{
  c = new TCanvas("c","c",1200,800);
 
 
  gStyle->SetOptFit();


  double K_lambda[7]  = {-3,-5,1,3,4,5,10};
  double cross[7]  = {0.05727,0.08793,0.01868,0.01067,0.00945,0.01009,0.0414};
  double K_lambda_err[7] = {0.,0.,0.,0.,0.,0.,0};
  double cross_err[7] = {5.148e-05,7.656e-05,1.63736e-05,9.761e-06,8.316e-06,8.621e-06,3.61e-05};

   gr = new TGraphErrors(7,K_lambda,cross,K_lambda_err,cross_err);


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



  gr->SetTitle("Dependence of cross-section on K_lambda");
  gr->SetMarkerColor(kBlack);
  gr->SetMarkerStyle(21);
  gr -> GetXaxis() -> SetTitle("K_lambda");
  gr -> GetYaxis() -> SetTitle("Cross-section [pb]");

  gr->Draw("AP");
  funkc->Draw("SAME");

  c->SaveAs("Cross-section10.pdf");
}





//PARTIal DIFFERENTIAL CROSS SECTION


void Analyzer::Plot9(){

	file = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutovi/tree-3.root");
	tree = (TTree*)file -> Get("lheTree");
	tree -> SetBranchAddress("vSum", &vSum);
	Long64_t nentries = tree -> GetEntriesFast();
	c1 = new TCanvas();
	c1 -> SetCanvasSize(2000, 1000);
	h1 = new TH1D("hist", "Partial Differential Cross-Section vs. Momentum", 100, 0., 500.);
	
	//cross-section
	Double_t crossSection = 0.01009;
    
    for (int i = 0; i < nentries; i++){

		tree -> GetEntry(i);
		Double_t partialDiffCrossSection = crossSection * (vSum->Pt());
		h1 -> Fill(vSum->Pt(),partialDiffCrossSection);
	
	}
	gStyle -> SetOptStat(0);
	


	h1  -> GetXaxis() -> SetTitle("p_tHH");
	h1  -> GetYaxis() -> SetTitle("d#sigma/dp_tHH");
	h1 -> Draw("HIST");

	c1 -> Print("dcross_dp.pdf");

}