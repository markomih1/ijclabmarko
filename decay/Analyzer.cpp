#include"Analyzer.h"


Analyzer::Analyzer(){

}


Analyzer::~Analyzer(){

}


void Analyzer::Plot(){


   gStyle -> SetOptStat(0);
	TCanvas* canvas = new TCanvas("canvas", "Pseudorapidity", 1600, 1200);
	canvas = new TCanvas();
	canvas -> SetCanvasSize(1500, 1500);
	double a_f[100],b_f[100],c_f[100], x[100];;
    //visual taus
     //Double_t pass_a[]={11507,166,12456,11507,12585,5066},pass_b[]={19787,1575,22051,19787,19707,10762},pass_c[]={25814,32131,29412,25814,23571,35099},tot[]={57108,33872,63919,57108,55863,50927};
 // Double_t pass_a[6],pass_b[6],pass_c[6],tot[6];

 //truetaus
   Double_t pass_a[]={26610,13184,40096,39029,32863,12463},pass_b[]={10593,23903,30603,28725,19050,17762},pass_c[]={55519,64230,52883,46959,57022,55542},tot[]={92722,101317,123582,114713,108935,80287};

/*

  for (int dirIndex = 1; dirIndex <= 6; dirIndex++) {
    // Construct the directory path

    string directoryPath = "/afs/cern.ch/user/m/mmihovil/work/decay/decrootsfile" + to_string(dirIndex) + "/";

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

       tree->SetBranchAddress("TruthBottomAuxDyn.px", &pxb);
		tree->SetBranchAddress("TruthBottomAuxDyn.py", &pyb);
		tree->SetBranchAddress("TruthBottomAuxDyn.pz", &pzb);
		tree->SetBranchAddress("TruthBottomAuxDyn.e", &energyb);

        

        for (Long64_t entry = 0; entry < tree->GetEntries(); ++entry) {
            // Get the entry from the TTree
            tree->GetEntry(entry);
			TLorentzVector Bottom1;
            TLorentzVector Bottom2;
            TLorentzVector Tau1;
            TLorentzVector Tau2;

			TLorentzVector higgs1;
            TLorentzVector higgs2;
            // Set the momentum and energy for particle 1
            Bottom1.SetPxPyPzE(pxb->at(0), pyb->at(0),pzb->at(0),energyb->at(0));

            // Set the momenergytum and energy for particle 2
            Bottom2.SetPxPyPzE(pxb->at(1), pyb->at(1),pzb->at(1),energyb->at(1));

            // Set the momentum and energy for particle 1
           // Tau1.SetPtEtaPhiM(pt_vis->at(0), eta_vis->at(0),phi_vis->at(0),m_vis->at(0));

            // Set the momenergytum and energy for Tau 2
           // Tau2.SetPtEtaPhiM(pt_vis->at(1), eta_vis->at(1),phi_vis->at(1),m_vis->at(1));


            //TRUYETH TAUS
            // Set the momentum and energy for particle 1
            Tau1.SetPxPyPzE(px->at(0), py->at(0),pz->at(0),energy->at(0));

            // Set the momenergytum and energy for particle 2
            Tau2.SetPxPyPzE(px->at(1), py->at(1),pz->at(1),energy->at(1));
            higgs1=Bottom1+Bottom2;
          
            
            higgs2=Tau1+Tau2;
            


           if(higgs1.Pt()>25000 && higgs2.Pt()>25000 && TMath::Abs(higgs1.Eta()) < 2.4 && TMath::Abs(higgs2.Eta()) < 2.4){ 
            //cout<<higgs1.Pt()<<"drugii"<<higgs2.Pt()<<endl;
            if (higgs1.Pt()>300000 && higgs2.Pt()>300000){
				pass_a[dirIndex]++;
			}
			else if ((higgs1.Pt() >= 300000 && higgs2.Pt() < 300000) || (higgs1.Pt() < 300000 && higgs2.Pt() >= 300000)){
				pass_b[dirIndex]++;
			}
			else pass_c[dirIndex]++;

			tot[dirIndex]++;
            
		    }
        }
}
   cout<<"JEDAN DIR GOOTOV"<<endl;
   cout<<" pass a="<<pass_a[dirIndex]<<"   pass b ="<< pass_b[dirIndex]<<"  "<<" pass c="<< pass_c[dirIndex]<<" "<<"  total="<<tot[dirIndex]<<"     "<<endl;


}
*/
//for(int dirIndex=1;dirIndex<=6;dirIndex++)
  // cout<<" pass a="<<pass_a[dirIndex-1]<<"   pass b ="<< pass_b[dirIndex-1]<<"  "<<" pass c="<< pass_c[dirIndex-1]<<" "<<"  total="<<tot[dirIndex-1]<<"     "<<endl;





	//fixed values for 6 croos sections›
	Double_t s1=0.05726536750460017,s2=0.0012263273839340449,s3=0.009962158173233178,s4=0.0106684266400100027,s5=0.009452018076382449,s6=0.04581028492999755;
	Double_t CV1=1,kl1=1;
   cout << setw(10) << "C2V" << setw(15) << "   Boosted" << setw(15) << "          Semi resolved" << setw(15) << "     Fully resolved" << endl;
for(int C2V=0;C2V<100;C2V++){
   double C2V_value = -2.+C2V*(4.-(-2.))/(100.-1.) ;
//scaling
	Double_t coeff1=s1*(( 0.0714285714285714 * pow(C2V_value, 2) - 0.916666666666667 * C2V_value * pow(CV1, 2) + 0.702380952380952 * C2V_value * CV1 * kl1 + 0.285714285714286 * pow(CV1, 4) - 0.166666666666667 * pow(CV1, 3) * kl1 + 0.0238095238095238 * pow(CV1, 2) * pow(kl1, 2)));
	Double_t coeff2=s2*((-1.0 * pow(C2V_value, 2) - 2.66666666666667 * C2V_value * pow(CV1, 2) + 4.66666666666667 * C2V_value * CV1 * kl1));
	Double_t coeff3=s3*((0.5 * pow(C2V_value, 2) + 0.333333333333333 * C2V_value * pow(CV1, 2) - 0.833333333333333 * C2V_value * CV1 * kl1 + 7.08154223600136e-19 * pow(CV1, 3) * kl1));
	Double_t coeff4=s4*((1.0 * pow(C2V_value, 2) - 9.08333333333333 * C2V_value * pow(CV1, 2) + 6.08333333333333 * C2V_value * CV1 * kl1 + 2.0 * pow(CV1, 4) + 0.166666666666667 * pow(CV1, 3) * kl1 - 0.166666666666667 * pow(CV1, 2) * pow(kl1, 2)));
	Double_t coeff5=s5*((-0.571428571428571 * pow(C2V_value, 2) + 5.58333333333333 * C2V_value * pow(CV1, 2) - 3.86904761904762 * C2V_value * CV1 * kl1 - 1.28571428571429 * pow(CV1, 4) + 2.266093515510044e-17 * pow(CV1, 3) * kl1 + 0.142857142857143 * pow(CV1, 2) * pow(kl1, 2)));
	Double_t coeff6=s6*((1.93373313324411e-17 * pow(C2V_value, 2) + 1.33333333333333 * C2V_value * pow(CV1, 2) - 1.33333333333333 * C2V_value * CV1 * kl1));

    Double_t a_final=(double(pass_a[0]*coeff1/tot[0]) + double(pass_a[1]*coeff2/tot[1]) + double(pass_a[2]*coeff3/tot[2]) + double(pass_a[3]*coeff4/tot[3]) + double(pass_a[4]*coeff5/tot[4]) + double(pass_a[5]*coeff6/tot[5]))/(coeff1 + coeff2 + coeff3 + coeff4 + coeff5+ coeff6);
    Double_t b_final=(double(pass_b[0]*coeff1/tot[0])  + double(pass_b[1]*coeff2/tot[1]) + double(pass_b[2]*coeff3/tot[2]) + double(pass_b[3]*coeff4/tot[3]) + double(pass_b[4]*coeff5/tot[4]) + double(pass_b[5]*coeff6/tot[5]))/(coeff1 + coeff2 + coeff3 + coeff4 + coeff5+ coeff6);
    Double_t c_final=(double(pass_c[0]*coeff1/tot[0]) + double(pass_c[1]*coeff2/tot[1]) + double(pass_c[2]*coeff3/tot[2])+ double(pass_c[3]*coeff4/tot[3])+ double(pass_c[4]*coeff5/tot[4]) + double(pass_c[5]*coeff6/tot[5]))/(coeff1 + coeff2 + coeff3 + coeff4 + coeff5+ coeff6);

    
    cout << fixed << setprecision(2);

   cout << setw(10) << C2V_value << setw(15) << (a_final * 100) << " %" << setw(15) << (b_final * 100) << " %" << setw(15) << (c_final * 100) << " %" << endl;
x[C2V]=C2V_value;
a_f[C2V]=a_final*100;
b_f[C2V]=b_final*100;
c_f[C2V]=c_final*100;
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
    graph1->GetXaxis()->SetTitle("K2V");
    graph1->GetYaxis()->SetTitle(" % of total events");
    graph1->SetTitle("");

	TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);

    legend->AddEntry(graph1, "Boosted events","l");
    legend->AddEntry(graph2, "Semi-resolved events ", "l");
    legend->AddEntry(graph3, "Fully resolved events ", "l");
    legend->Draw();
   
    // Update the canvas
    canvas->Update();
	canvas->SaveAs("test3true.png"); 


}












