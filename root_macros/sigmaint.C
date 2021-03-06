{
  //=========Macro generated from canvas: sigma/sigma
  //=========  (Wed Apr  8 19:34:32 2015) by ROOT version5.34/01
  TCanvas *sigma = new TCanvas("sigma", "sigma",800,800);
  sigma->Range(0,0,1,1);
  sigma->SetFillColor(0);
  sigma->SetBorderMode(0);
  sigma->SetBorderSize(2);
  sigma->SetFrameBorderMode(0);
  sigma->SetRightMargin(0.05);
  sigma->SetLeftMargin(0.15);
  sigma->SetTickx(1);
  sigma->SetTicky(1);

  gROOT->SetStyle("Plain");

  TMultiGraph *mg = new TMultiGraph();


  TGraphErrors *gre = new TGraphErrors(5);
  gre->SetName("Graph");
  gre->SetTitle("");
  gre->SetMarkerStyle(20);
  gre->SetMarkerSize(1.3);

  // unbiased
  gre->SetPoint(0, 6, 3.269);
  gre->SetPoint(1, 5, 3.292);
  gre->SetPoint(2, 4, 3.313);
  gre->SetPoint(3, 3, 3.331);
  gre->SetPoint(4, 2, 3.385);
  gre->SetPointError(0, 6*0.05, 0.059);
  gre->SetPointError(1, 5*0.05, 0.071);
  gre->SetPointError(2, 4*0.05, 0.083);
  gre->SetPointError(3, 3*0.05, 0.093);
  gre->SetPointError(4, 2*0.05, 0.104);

  mg->Add(gre,"p");

  TGraphErrors *gre2 = new TGraphErrors(5);
  gre2->SetName("Graph");
  gre2->SetTitle("");
  gre2->SetMarkerStyle(24);
  gre2->SetMarkerSize(1.3);

  // biased
  gre2->SetPoint(0, 6, 3.241);
  gre2->SetPoint(1, 5, 3.265);
  gre2->SetPoint(2, 4, 3.298);
  gre2->SetPoint(3, 3, 3.337);
  gre2->SetPoint(4, 2, 3.415);
  gre2->SetPointError(0, 6*0.05, 0.084);
  gre2->SetPointError(1, 5*0.05, 0.094);
  gre2->SetPointError(2, 4*0.05, 0.104);
  gre2->SetPointError(3, 3*0.05, 0.115);
  gre2->SetPointError(4, 2*0.05, 0.130);

  mg->Add(gre2,"p");

  mg->Draw("ap");
  mg->SetMinimum(3.0);
  mg->SetMaximum(4.);
  mg->GetXaxis()->SetLimits(0,7);

  mg->GetXaxis()->SetTitle("beam momentum [GeV]");
  //mg->GetXaxis()->SetNoExponent();
  mg->GetYaxis()->SetTitle("#sigma_{M26} [#mum]");
  mg->GetXaxis()->SetTitleOffset(1.14);
  mg->GetYaxis()->SetTitleOffset(1.34);


  TLegend *leg = new TLegend(0.25,0.65,0.55,0.82,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetFillStyle(1001);
  leg->SetShadowColor(0);
  leg->SetLineColor(0);
  leg->SetFillColor(kWhite);
  leg->SetHeader("#sigma_{int} for #xi_{n} = 6");
  leg->AddEntry(gre, "unbiased tracks","p");
  leg->AddEntry(gre2,"biased tracks","p");
  leg->Draw();
  

  sigma->Modified();
  sigma->cd();


}
