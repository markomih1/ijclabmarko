#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}


void Analyzer::Plot(){
	//first file
	file1 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviKL/tree-3.root");
	tree1 = (TTree*)file1 -> Get("lheTree");
	tree1 -> SetBranchAddress("HH_mass", &HH_mass);
	//second file
	file2 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviKL/tree3.root");
	tree2 = (TTree*)file2 -> Get("lheTree");
	tree2 -> SetBranchAddress("HH_mass", &HH_mass);
	//third file
	file3 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviKL/tree4.root");
	tree3 = (TTree*)file3 -> Get("lheTree");
	tree3 -> SetBranchAddress("HH_mass", &HH_mass);
	//forth file
	file4 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree1.root");
	tree4 = (TTree*)file4 -> Get("lheTree");
	tree4 -> SetBranchAddress("HH_mass", &HH_mass);
	//fifth file
	file5 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree2.root");
	tree5 = (TTree*)file5 -> Get("lheTree");
	tree5 -> SetBranchAddress("HH_mass", &HH_mass);
	//sixth file
	file6 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviKL/tree1_5__1__1.root");
	tree6 = (TTree*)file6 -> Get("lheTree");
	tree6 -> SetBranchAddress("HH_mass", &HH_mass);


	Long64_t nentries = tree1 -> GetEntriesFast();
	gStyle -> SetOptStat(0);

	
//SCALED GRAPHS

//HHmass SCALED AND WEIGHTED
	canvas = new TCanvas();
	canvas -> SetCanvasSize(1500, 1500);
	canvas->Divide(2,1);
	hist1 = new TH1F("hist1", "hist1", 100, 0., 2000.);
	hist2 = new TH1F("hist2", "hist2", 100, 0., 2000.);
	hist3 = new TH1F("hist3", "hist3", 100, 0., 2000.);
	hist4 = new TH1F("hist4", "hist4", 100, 0., 2000.);
	hist5 = new TH1F("hist5", "hist5", 100, 0., 2000.);
	hist6 = new TH1F("hist6", "hist6", 100, 0., 2000.);
	
	hist1 -> SetTitle("HH_mass");
	
	hist1 -> GetXaxis() -> SetTitle("mass [GeV]");
	//fixed values for 6 croos sections
	Double_t s1=0.05727,s2=0.001226,s3=0.009959,s4=0.01067,s5=0.00945,s6=0.04531;
	//choose parameters
	Double_t C2V=-1,CV=1,kl=1;
	
	Double_t f=s1*(0.0714285714285714*pow(C2V,2) - 0.916666666666667*C2V*pow(CV,2) + 0.702380952380952*C2V*CV*kl + 0.285714285714286*pow(CV,4) - 0.166666666666667*pow(CV,3)*kl + 0.0238095238095238*pow(CV,2)*pow(kl,2)) + s2*(-1.0*pow(C2V,2) - 2.66666666666667*C2V*pow(CV,2) + 4.66666666666667*C2V*CV*kl) + s3*(0.5*pow(C2V,2) + 0.333333333333333*C2V*pow(CV,2) - 0.833333333333333*C2V*CV*kl + 7.08154223600136e-19*pow(CV,3)*kl) + s4*(1.0*pow(C2V,2) - 9.08333333333333*C2V*pow(CV,2) + 6.08333333333333*C2V*CV*kl + 2.0*pow(CV,4) + 0.166666666666667*pow(CV,3)*kl - 0.166666666666667*pow(CV,2)*pow(kl,2)) + s5*(-0.571428571428571*pow(C2V,2) + 5.58333333333333*C2V*pow(CV,2) - 3.86904761904762*C2V*CV*kl - 1.28571428571429*pow(CV,4) + 2.26609351552044e-17*pow(CV,3)*kl + 0.142857142857143*pow(CV,2)*pow(kl,2)) + s6*(1.93373313324411e-17*pow(C2V,2) + 1.33333333333333*C2V*pow(CV,2) - 1.33333333333333*C2V*CV*kl);
	
	// event_weight=sigma/nentries
	Double_t event_weight1=0.05727*f/nentries;
	Double_t event_weight2=0.001226*f/nentries;
	Double_t event_weight3=0.009959*f/nentries;
	Double_t event_weight4=0.01067*f/nentries;
	Double_t event_weight5=0.00945*f/nentries;
	Double_t event_weight6=0.04531*f/nentries;
	
	Double_t event_weight=f/nentries;
	for (int i = 0; i < nentries; i++){
			tree1 -> GetEntry(i);
			hist1 -> Fill(HH_mass,event_weight1);
			tree2 -> GetEntry(i);
			hist2 -> Fill(HH_mass,event_weight2);
			tree3 -> GetEntry(i);
			hist3 -> Fill(HH_mass,event_weight3);
			tree4 -> GetEntry(i);
			hist4 -> Fill(HH_mass,event_weight4);
			tree5 -> GetEntry(i);
			hist5 -> Fill(HH_mass,event_weight5);
			tree6 -> GetEntry(i);
			hist6 -> Fill(HH_mass,event_weight6);
	}
	hist1->Scale(1.0 / hist1->Integral());
	hist2->Scale(1.0 / hist2->Integral());
	hist3->Scale(1.0 / hist3->Integral());
	hist4->Scale(1.0 / hist4->Integral());
	hist5->Scale(1.0 / hist5->Integral());
	hist6->Scale(1.0 / hist6->Integral());	

	TH1F *histo_sum = new TH1F("histo_sum", "Histogram Sum", 100, 0, 2000.);

   // sum the histograms bin by bin
   for (int i=0; i<hist1->GetNbinsX(); ++i) {
      double sum = hist1->GetBinContent(i+1) + hist2->GetBinContent(i+1)+hist3->GetBinContent(i+1)+hist4->GetBinContent(i+1)+hist5->GetBinContent(i+1)+hist6->GetBinContent(i+1);
      histo_sum->SetBinContent(i+1, sum);
   }
   histo_sum->Scale(1.0 / histo_sum->Integral());
   canvas->cd(1);
   histo_sum->Draw("HIST");

	//dDRAWING SECOND HISTO FOR COMPARISON
	canvas->cd(2);
	file7 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree-1.root");
	
	tree7 = (TTree*)file7 -> Get("lheTree");
	tree7 -> SetBranchAddress("HH_mass", &HH_mass);

	hist = new TH1F("hist", "hist", 100, 0., 2000.);
	
  
    for (int i = 0; i < nentries; i++){

		tree7 -> GetEntry(i);
		hist -> Fill(HH_mass,event_weight);
	
	}
	gStyle -> SetOptStat(0);
	
	hist->Scale(1.0 / hist->Integral());

	hist -> SetTitle("HH_mass comparison");
	hist -> GetXaxis() -> SetTitle("mass [GeV]");

	hist -> Draw("HIST");

	cout <<"event_weight=" << event_weight1 << endl;
	cout <<"event_weight=" << event_weight2 << endl;
	cout <<"event_weight=" << event_weight3 << endl;
	cout <<"event_weight=" << event_weight4 << endl;
	cout <<"event_weight=" << event_weight5 << endl;
	cout <<"event_weight=" << event_weight6 << endl;


	cout << "Number of entries in the histogram after filling: " << hist1->GetEntries() << endl;
	
	canvas -> Print("Plot_mHHtest.pdf");
}