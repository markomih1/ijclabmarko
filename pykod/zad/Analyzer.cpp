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
	file4 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviKL/tree3.root");
	tree4 = (TTree*)file4 -> Get("lheTree");
	tree4 -> SetBranchAddress("HH_mass", &HH_mass);
	//third file
	file5 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviKL/tree4.root");
	tree5 = (TTree*)file5 -> Get("lheTree");
	tree5 -> SetBranchAddress("HH_mass", &HH_mass);
	//forth file
	file2 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree1.root");
	tree2 = (TTree*)file2 -> Get("lheTree");
	tree2 -> SetBranchAddress("HH_mass", &HH_mass);
	//fifth file
	file3 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree2.root");
	tree3 = (TTree*)file3 -> Get("lheTree");
	tree3 -> SetBranchAddress("HH_mass", &HH_mass);
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

	TH1D* hist1 = new TH1D("hist1", "hist1", 100, 0., 2000.);
	TH1D* hist2 = new TH1D("hist2", "hist2", 100, 0., 2000.);
	TH1D* hist3 = new TH1D("hist3", "hist3", 100, 0., 2000.);
	TH1D* hist4 = new TH1D("hist4", "hist4", 100, 0., 2000.);
	TH1D* hist5 = new TH1D("hist5", "hist5", 100, 0., 2000.);
	TH1D* hist6 = new TH1D("hist6", "hist6", 100, 0., 2000.);
	
	hist1 -> SetTitle("HH_mass");
	hist1 -> GetXaxis() -> SetTitle("mass [GeV]");
	//fixed values for 6 croos sections›
	Double_t s1=0.05727,s2=0.001226,s3=0.009959,s4=0.01067,s5=0.00945,s6=0.04531;
	//choose parameters
	Double_t C2V=1,CV=1,kl=1;
	
	Double_t f=s1*(0.0714285714285714*pow(C2V,2) - 0.916666666666667*C2V*pow(CV,2) + 0.702380952380952*C2V*CV*kl + 0.285714285714286*pow(CV,4) - 0.166666666666667*pow(CV,3)*kl + 0.0238095238095238*pow(CV,2)*pow(kl,2)) + s2*(-1.0*pow(C2V,2) - 2.66666666666667*C2V*pow(CV,2) + 4.66666666666667*C2V*CV*kl) + s3*(0.5*pow(C2V,2) + 0.333333333333333*C2V*pow(CV,2) - 0.833333333333333*C2V*CV*kl + 7.08154223600136e-19*pow(CV,3)*kl) + s4*(1.0*pow(C2V,2) - 9.08333333333333*C2V*pow(CV,2) + 6.08333333333333*C2V*CV*kl + 2.0*pow(CV,4) + 0.166666666666667*pow(CV,3)*kl - 0.166666666666667*pow(CV,2)*pow(kl,2)) + s5*(-0.571428571428571*pow(C2V,2) + 5.58333333333333*C2V*pow(CV,2) - 3.86904761904762*C2V*CV*kl - 1.28571428571429*pow(CV,4) + 2.26609351552044e-17*pow(CV,3)*kl + 0.142857142857143*pow(CV,2)*pow(kl,2)) + s6*(1.93373313324411e-17*pow(C2V,2) + 1.33333333333333*C2V*pow(CV,2) - 1.33333333333333*C2V*CV*kl);
	
	for (int i = 0; i < nentries; i++){
			tree1 -> GetEntry(i);
			hist1 -> Fill(HH_mass);
			tree2 -> GetEntry(i);
			hist2 -> Fill(HH_mass);
			tree3 -> GetEntry(i);
			hist3 -> Fill(HH_mass);
			tree4 -> GetEntry(i);
			hist4 -> Fill(HH_mass);
			tree5 -> GetEntry(i);
			hist5 -> Fill(HH_mass);
			tree6 -> GetEntry(i);
			hist6 -> Fill(HH_mass);
	}
//scaling to unity	
	hist1->Scale(1.0 / hist1->Integral());
	hist2->Scale(1.0 / hist2->Integral());
	hist3->Scale(1.0 / hist3->Integral());
	hist4->Scale(1.0 / hist4->Integral());
	hist5->Scale(1.0 / hist5->Integral());
	hist6->Scale(1.0 / hist6->Integral());	
	
//scaling by cross section and the cooresponfing function
	hist1->Scale(s1*( 0.0714285714285714 * pow(C2V, 2) - 0.916666666666667 * C2V * pow(CV, 2) + 0.702380952380952 * C2V * CV * kl + 0.285714285714286 * pow(CV, 4) - 0.166666666666667 * pow(CV, 3) * kl + 0.0238095238095238 * pow(CV, 2) * pow(kl, 2)));
	hist2->Scale(s2*(-1.0 * pow(C2V, 2) - 2.66666666666667 * C2V * pow(CV, 2) + 4.66666666666667 * C2V * CV * kl));
	hist3->Scale(s3*(0.5 * pow(C2V, 2) + 0.333333333333333 * C2V * pow(CV, 2) - 0.833333333333333 * C2V * CV * kl + 7.08154223600136e-19 * pow(CV, 3) * kl));
	hist4->Scale(s4*(1.0 * pow(C2V, 2) - 9.08333333333333 * C2V * pow(CV, 2) + 6.08333333333333 * C2V * CV * kl + 2.0 * pow(CV, 4) + 0.166666666666667 * pow(CV, 3) * kl - 0.166666666666667 * pow(CV, 2) * pow(kl, 2)));
	hist5->Scale(s5*(-0.571428571428571 * pow(C2V, 2) + 5.58333333333333 * C2V * pow(CV, 2) - 3.86904761904762 * C2V * CV * kl - 1.28571428571429 * pow(CV, 4) + 2.26609351552044e-17 * pow(CV, 3) * kl + 0.142857142857143 * pow(CV, 2) * pow(kl, 2)));
	hist6->Scale(s6*(1.93373313324411e-17 * pow(C2V, 2) + 1.33333333333333 * C2V * pow(CV, 2) - 1.33333333333333 * C2V * CV * kl));

	TH1D *histo_sum = new TH1D("histo_sum", "Histogram Sum", 100, 0, 2000.);
	histo_sum->Add(hist1);
	histo_sum->Add(hist2);
	histo_sum->Add(hist3);
	histo_sum->Add(hist4);
	histo_sum->Add(hist5);
	histo_sum->Add(hist6);
histo_sum->Draw("HIST");
//canvas -> Print("Plot_mass.pdf");



/*
//ABCI parameters
	hist1->Scale((0.0238095238095238*s1 - 0.166666666666667*s4 + 0.142857142857143*s5)*pow(CV,2)*pow(kl,2));
	hist2->Scale((0.285714285714286*s1 + 2.0*s4 - 1.28571428571429*s5)*pow(CV,4));	
	hist3->Scale((0.0714285714285714*s1 - 1.0*s2 + 0.5*s3 + 1.0*s4 - 0.571428571428571*s5 + 1.93373313324411e-17*s6)*pow(C2V,2));	
	hist4->Scale((-0.166666666666667*s1 + 7.08154223600136e-19*s3 + 0.166666666666667*s4 + 2.26609351552044e-17*s5)*pow(CV,3)*kl);
	hist5->Scale(( 0.702380952380952*s1 + 4.66666666666667*s2 - 0.833333333333333*s3 + 6.08333333333333*s4 - 3.86904761904762*s5 - 1.33333333333333*s6)*CV*C2V*kl);
	hist6->Scale((-0.916666666666667*s1 - 2.66666666666667*s2 + 0.333333333333333*s3 - 9.08333333333333*s4 + 5.58333333333333*s5 + 1.33333333333333*s6)*pow(CV,2)*C2V);
	

	hist1->SetLineColor(kRed);
	hist1-> Draw("HIST");
	hist2->SetLineColor(kBlue);
	hist2->Draw("HIST SAME");
	hist3->SetLineColor(kGreen);
	hist3-> Draw("HIST SAME");
	hist4->SetLineColor(kMagenta);
	hist4-> Draw("HIST SAME");
	hist5->SetLineColor(kBlack);
	hist5-> Draw("HIST SAME");
	hist6->SetLineColor(kOrange);
	hist6-> Draw("HIST SAME");
	TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9); 
	legend->AddEntry(hist1, "A", "l"); 
	legend->AddEntry(hist2, "B", "l"); 
	legend->AddEntry(hist3, "C", "l"); 
	legend->AddEntry(hist4, "I_AB", "l"); 
	legend->AddEntry(hist5, "I_AC", "l");
	legend->AddEntry(hist6, "I_BC", "l");
	legend->Draw();

	hist1->GetYaxis()->SetRangeUser(-0.0018, 0.0015);


canvas -> Print("Plot_abc.pdf");
*/

}