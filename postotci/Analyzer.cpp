#include"Analyzer.h"


Analyzer::Analyzer(){



}


Analyzer::~Analyzer(){



}


void Analyzer::Plot(){
	
	//first file
	file1 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviKL/tree-3.root");
	tree1 = (TTree*)file1 -> Get("lheTree");
	tree1 -> SetBranchAddress("vH1", &vH1);
	tree1 -> SetBranchAddress("vH2", &vH2);
	//second file
	file4 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviKL/tree3.root");
	tree4 = (TTree*)file4 -> Get("lheTree");
	tree4 -> SetBranchAddress("vH1", &vH1);
	tree4 -> SetBranchAddress("vH2", &vH2);

	//third file
	file5 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviKL/tree4.root");
	tree5 = (TTree*)file5 -> Get("lheTree");
	tree5 -> SetBranchAddress("vH1", &vH1);
	tree5 -> SetBranchAddress("vH2", &vH2);
	//forth file
	file2 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree1.root");
	tree2 = (TTree*)file2 -> Get("lheTree");
	tree2 -> SetBranchAddress("vH1", &vH1);
	tree2 -> SetBranchAddress("vH2", &vH2);

	//fifth file
	file3 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviK2v/tree2.root");
	tree3 = (TTree*)file3 -> Get("lheTree");
	tree3 -> SetBranchAddress("vH1", &vH1);
	tree3 -> SetBranchAddress("vH2", &vH2);
	//sixth file
	file6 = new TFile("/afs/cern.ch/user/m/mmihovil/work/rutoviKL/tree1_5__1__1.root");
	tree6 = (TTree*)file6 -> Get("lheTree");
	tree6 -> SetBranchAddress("vH1", &vH1);
	tree6 -> SetBranchAddress("vH2", &vH2);
	  


	Long64_t nentries = tree1 -> GetEntriesFast();
	gStyle -> SetOptStat(0);

	canvas = new TCanvas();
	canvas -> SetCanvasSize(1500, 1500);

	//fixed values for 6 croos sections›
	Double_t s1=0.05726536750460017,s2=0.0012263273839340449,s3=0.009962158173233178,s4=0.0106684266400100027,s5=0.009452018076382449,s6=0.04581028492999755;
	
	
	cout<<" C2V      "<<" |"<<"   Boosted  |"<<" Semi resolved  |"<<"  Fully resolved  "<<endl;

//for c2v
	double a_f[100],b_f[100],c_f[100];
	double x[100];
	//choose parameters
	Double_t CV1=1,kl1=1;

	for(int C2V=0;C2V<100;C2V++){
	double C2V_value = -2.+C2V*(4.-(-2.))/(100.-1.) ;
	Double_t pass_a1=0,pass_b1=0,pass_c1=0,tot1=0;
	Double_t pass_a2=0,pass_b2=0,pass_c2=0,tot2=0;
	Double_t pass_a3=0,pass_b3=0,pass_c3=0,tot3=0;
	Double_t pass_a4=0,pass_b4=0,pass_c4=0,tot4=0;
	Double_t pass_a5=0,pass_b5=0,pass_c5=0,tot5=0;
	Double_t pass_a6=0,pass_b6=0,pass_c6=0,tot6=0;

	//filling with values
	for (int i = 0; i < nentries; i++){
			//first file check
			tree1 -> GetEntry(i);
    		if (vH1->Pt()>300 && vH2->Pt()>300){
				pass_a1++;
			}
			else if ((vH1->Pt() >= 300 && vH2->Pt() < 300) || (vH1->Pt() < 300 && vH2->Pt() >= 300)){
				pass_b1++;
			}
			else pass_c1++;

			tot1++;
			//second file check
			tree2 -> GetEntry(i);
			if (vH1->Pt()>300 && vH2->Pt()>300){
				pass_a2++;
			}
			else if ((vH1->Pt() >= 300 && vH2->Pt() < 300) || (vH1->Pt() < 300 && vH2->Pt() >= 300)){
				pass_b2++;
			}
			else pass_c2++;

			tot2++;

			//third file check
			tree3 -> GetEntry(i);
			 if (vH1->Pt()>300 && vH2->Pt()>300){
				pass_a3++;
			}
			else if ((vH1->Pt() >= 300 && vH2->Pt() < 300) || (vH1->Pt() < 300 && vH2->Pt() >= 300)){
				pass_b3++;
			}
			else pass_c3++;

			tot3++;

			//forth file check
			tree4 -> GetEntry(i);
			if (vH1->Pt()>300 && vH2->Pt()>300){
				pass_a4++;
			}
			else if ((vH1->Pt() >= 300 && vH2->Pt() < 300) || (vH1->Pt() < 300 && vH2->Pt() >= 300)){
				pass_b4++;
			}
			else pass_c4++;

			tot4++;

			//fifth file check
			tree5 -> GetEntry(i);
			if (vH1->Pt()>300 && vH2->Pt()>300){
				pass_a5++;
			}
			else if ((vH1->Pt() >= 300 && vH2->Pt() < 300) || (vH1->Pt() < 300 && vH2->Pt() >= 300)){
				pass_b5++;
			}
			else pass_c5++;

			tot5++;

			//sixth file check
			tree6 -> GetEntry(i);
			if (vH1->Pt()>300 && vH2->Pt()>300){
				pass_a6++;
			}
			else if ((vH1->Pt() >= 300 && vH2->Pt() < 300) || (vH1->Pt() < 300 && vH2->Pt() >= 300)){
				pass_b6++;
			}
			else pass_c6++;

			tot6++;
	
	}

//scaling
	Double_t coeff1=s1*(( 0.0714285714285714 * pow(C2V_value, 2) - 0.916666666666667 * C2V_value * pow(CV1, 2) + 0.702380952380952 * C2V_value * CV1 * kl1 + 0.285714285714286 * pow(CV1, 4) - 0.166666666666667 * pow(CV1, 3) * kl1 + 0.0238095238095238 * pow(CV1, 2) * pow(kl1, 2)));
	Double_t coeff2=s2*((-1.0 * pow(C2V_value, 2) - 2.66666666666667 * C2V_value * pow(CV1, 2) + 4.66666666666667 * C2V_value * CV1 * kl1));
	Double_t coeff3=s3*((0.5 * pow(C2V_value, 2) + 0.333333333333333 * C2V_value * pow(CV1, 2) - 0.833333333333333 * C2V_value * CV1 * kl1 + 7.08154223600136e-19 * pow(CV1, 3) * kl1));
	Double_t coeff4=s4*((1.0 * pow(C2V_value, 2) - 9.08333333333333 * C2V_value * pow(CV1, 2) + 6.08333333333333 * C2V_value * CV1 * kl1 + 2.0 * pow(CV1, 4) + 0.166666666666667 * pow(CV1, 3) * kl1 - 0.166666666666667 * pow(CV1, 2) * pow(kl1, 2)));
	Double_t coeff5=s5*((-0.571428571428571 * pow(C2V_value, 2) + 5.58333333333333 * C2V_value * pow(CV1, 2) - 3.86904761904762 * C2V_value * CV1 * kl1 - 1.28571428571429 * pow(CV1, 4) + 2.266093515510044e-17 * pow(CV1, 3) * kl1 + 0.142857142857143 * pow(CV1, 2) * pow(kl1, 2)));
	Double_t coeff6=s6*((1.93373313324411e-17 * pow(C2V_value, 2) + 1.33333333333333 * C2V_value * pow(CV1, 2) - 1.33333333333333 * C2V_value * CV1 * kl1));

Double_t a_final=(pass_a1*coeff1/tot1 + pass_a2*coeff2/tot2 + pass_a3*coeff3/tot3 + pass_a4*coeff4/tot4 + pass_a5*coeff5/tot5 + pass_a6*coeff6/tot6)/(coeff1 + coeff2  + coeff3 + coeff4 + coeff5 + coeff6);
Double_t b_final=(pass_b1*coeff1/tot1  + pass_b2*coeff2/tot2 + pass_b3*coeff3/tot3 + pass_b4*coeff4/tot4 + pass_b5*coeff5/tot5 + pass_b6*coeff6/tot6)/(coeff1 + coeff2  + coeff3 + coeff4 + coeff5 + coeff6);
Double_t c_final=(pass_c1*coeff1/tot1 + pass_c2*coeff2/tot2 + pass_c3*coeff3/tot3+ pass_c4*coeff4/tot4+ pass_c5*coeff5/tot5 + pass_c6*coeff6/tot6)/(coeff1 + coeff2  + coeff3 + coeff4 + coeff5 + coeff6);

x[C2V]=C2V_value;
a_f[C2V]=a_final*100;
b_f[C2V]=b_final*100;
c_f[C2V]=c_final*100;

	cout<<" "<<C2V_value<<"      "<<"  "<< a_final*100<<" %  "<<"    "<< b_final*100<<" %    "<<"    "<<c_final*100<<" %    "<<endl;
	}

    TGraph* graph1 = new TGraph(100, x, a_f);
    TGraph* graph2 = new TGraph(100, x, b_f);
    TGraph* graph3 = new TGraph(100, x, c_f);

    // Customize the appearance of the graphs
    graph1->SetLineColor(kBlue);
    graph2->SetLineColor(kRed);
    graph3->SetLineColor(kBlack);
	
	graph1->GetYaxis()->SetRangeUser(0,100);
	graph2->GetYaxis()->SetRangeUser(0,100);
	graph3->GetYaxis()->SetRangeUser(0,100);
    
	

	
	// Draw the graphs on the same canvas
    graph1->Draw("AL");
    graph2->Draw("L");
    graph3->Draw("L");

   	canvas->SetGrid();
    // Set the axis labels and plot title
    graph1->GetXaxis()->SetTitle("C2V");
    graph1->GetYaxis()->SetTitle(" % of total events");
    graph1->SetTitle("");

	TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(graph1, "Boosted events","l");
    legend->AddEntry(graph2, "Semi-resolved events", "l");
    legend->AddEntry(graph3, "Fully resolved events", "l");
    legend->Draw();
   
    // Update the canvas
    canvas->Update();
	canvas->SaveAs("graphK2V.png"); 






}