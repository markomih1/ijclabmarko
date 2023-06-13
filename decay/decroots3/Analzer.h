//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jun  8 15:31:39 2023 by ROOT version 6.24/08
// from TTree CollectionTree/CollectionTree
// found on file: DAOD_TRUTH3.output3.root
//////////////////////////////////////////////////////////

#ifndef Analzer_h
#define Analzer_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class Analzer {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxEventInfoAux = 1;
   static constexpr Int_t kMaxBornLeptonsAux = 1;
   static constexpr Int_t kMaxHardScatterParticlesAux = 1;
   static constexpr Int_t kMaxHardScatterVerticesAux = 1;
   static constexpr Int_t kMaxMET_TruthAux = 1;
   static constexpr Int_t kMaxTruthBSMAux = 1;
   static constexpr Int_t kMaxTruthBSMWithDecayParticlesAux = 1;
   static constexpr Int_t kMaxTruthBSMWithDecayVerticesAux = 1;
   static constexpr Int_t kMaxTruthBosonAux = 1;
   static constexpr Int_t kMaxTruthBosonsWithDecayParticlesAux = 1;
   static constexpr Int_t kMaxTruthBosonsWithDecayVerticesAux = 1;
   static constexpr Int_t kMaxTruthBottomAux = 1;
   static constexpr Int_t kMaxTruthElectronsAux = 1;
   static constexpr Int_t kMaxTruthEventsAux = 1;
   static constexpr Int_t kMaxTruthForwardProtonsAux = 1;
   static constexpr Int_t kMaxTruthMuonsAux = 1;
   static constexpr Int_t kMaxTruthNeutrinosAux = 1;
   static constexpr Int_t kMaxTruthPhotonsAux = 1;
   static constexpr Int_t kMaxTruthTausAux = 1;
   static constexpr Int_t kMaxTruthTopAux = 1;
   static constexpr Int_t kMaxAntiKt10TruthTrimmedPtFrac5SmallR20JetsAux = 1;
   static constexpr Int_t kMaxAntiKt4TruthDressedWZJetsAux = 1;
   static constexpr Int_t kMaxBornLeptonsAuxDyn_prodVtxLink = 2;
   static constexpr Int_t kMaxBornLeptonsAuxDyn_decayVtxLink = 2;
   static constexpr Int_t kMaxHardScatterParticlesAuxDyn_prodVtxLink = 10;
   static constexpr Int_t kMaxHardScatterParticlesAuxDyn_decayVtxLink = 10;
   static constexpr Int_t kMaxTruthBosonAuxDyn_prodVtxLink = 4;
   static constexpr Int_t kMaxTruthBosonAuxDyn_decayVtxLink = 4;
   static constexpr Int_t kMaxTruthBosonsWithDecayParticlesAuxDyn_prodVtxLink = 30;
   static constexpr Int_t kMaxTruthBosonsWithDecayParticlesAuxDyn_decayVtxLink = 30;
   static constexpr Int_t kMaxTruthBottomAuxDyn_prodVtxLink = 14;
   static constexpr Int_t kMaxTruthBottomAuxDyn_decayVtxLink = 14;
   static constexpr Int_t kMaxTruthElectronsAuxDyn_prodVtxLink = 17;
   static constexpr Int_t kMaxTruthElectronsAuxDyn_decayVtxLink = 17;
   static constexpr Int_t kMaxTruthNeutrinosAuxDyn_prodVtxLink = 11;
   static constexpr Int_t kMaxTruthNeutrinosAuxDyn_decayVtxLink = 11;
   static constexpr Int_t kMaxTruthPhotonsAuxDyn_prodVtxLink = 20;
   static constexpr Int_t kMaxTruthPhotonsAuxDyn_decayVtxLink = 20;
   static constexpr Int_t kMaxTruthTausAuxDyn_prodVtxLink = 4;
   static constexpr Int_t kMaxTruthTausAuxDyn_decayVtxLink = 4;
   static constexpr Int_t kMaxTruthTausAuxDyn_originalTruthParticle = 4;
   static constexpr Int_t kMaxTruthMuonsAuxDyn_prodVtxLink = 6;
   static constexpr Int_t kMaxTruthMuonsAuxDyn_decayVtxLink = 6;
   static constexpr Int_t kMaxTruthForwardProtonsAuxDyn_prodVtxLink = 1;
   static constexpr Int_t kMaxTruthForwardProtonsAuxDyn_decayVtxLink = 1;

   // Declaration of leaf types
   EventInfo_p4    *McEventInfo;
 //xAOD::EventAuxInfo_v1 *EventInfoAux_;
 //xAOD::EventAuxInfo_v1 *EventInfoAux_xAOD__AuxInfoBase;
   UInt_t          EventInfoAux_runNumber;
   ULong64_t       EventInfoAux_eventNumber;
   UInt_t          EventInfoAux_lumiBlock;
   UInt_t          EventInfoAux_timeStamp;
   UInt_t          EventInfoAux_timeStampNSOffset;
   UInt_t          EventInfoAux_bcid;
   UInt_t          EventInfoAux_detectorMask0;
   UInt_t          EventInfoAux_detectorMask1;
   UInt_t          EventInfoAux_detectorMask2;
   UInt_t          EventInfoAux_detectorMask3;
 //vector<pair<string,string> > EventInfoAux_detDescrTags;
   UInt_t          EventInfoAux_eventTypeBitmask;
   UInt_t          EventInfoAux_statusElement;
   UInt_t          EventInfoAux_extendedLevel1ID;
   UShort_t        EventInfoAux_level1TriggerType;
   vector<string>  EventInfoAux_streamTagNames;
   vector<string>  EventInfoAux_streamTagTypes;
   vector<char>    EventInfoAux_streamTagObeysLumiblock;
   Float_t         EventInfoAux_actualInteractionsPerCrossing;
   Float_t         EventInfoAux_averageInteractionsPerCrossing;
   UInt_t          EventInfoAux_pixelFlags;
   UInt_t          EventInfoAux_sctFlags;
   UInt_t          EventInfoAux_trtFlags;
   UInt_t          EventInfoAux_larFlags;
   UInt_t          EventInfoAux_tileFlags;
   UInt_t          EventInfoAux_muonFlags;
   UInt_t          EventInfoAux_forwardDetFlags;
   UInt_t          EventInfoAux_coreFlags;
   UInt_t          EventInfoAux_backgroundFlags;
   UInt_t          EventInfoAux_lumiFlags;
   Float_t         EventInfoAux_beamPosX;
   Float_t         EventInfoAux_beamPosY;
   Float_t         EventInfoAux_beamPosZ;
   Float_t         EventInfoAux_beamPosSigmaX;
   Float_t         EventInfoAux_beamPosSigmaY;
   Float_t         EventInfoAux_beamPosSigmaZ;
   Float_t         EventInfoAux_beamPosSigmaXY;
   Float_t         EventInfoAux_beamTiltXZ;
   Float_t         EventInfoAux_beamTiltYZ;
   UInt_t          EventInfoAux_beamStatus;
   xAOD::EventInfo_v1 *EventInfo;
   xAOD::MissingETContainer_v1 *MET_Truth;
   DataVector<xAOD::TruthEvent_v1> *TruthEvents;
   xAOD::AuxContainerBase *BornLeptonsAux_;
   xAOD::AuxContainerBase *HardScatterParticlesAux_;
   xAOD::AuxContainerBase *HardScatterVerticesAux_;
   xAOD::AuxContainerBase *MET_TruthAux_;
   xAOD::AuxContainerBase *TruthBSMAux_;
   xAOD::AuxContainerBase *TruthBSMWithDecayParticlesAux_;
   xAOD::AuxContainerBase *TruthBSMWithDecayVerticesAux_;
   xAOD::AuxContainerBase *TruthBosonAux_;
   xAOD::AuxContainerBase *TruthBosonsWithDecayParticlesAux_;
   xAOD::AuxContainerBase *TruthBosonsWithDecayVerticesAux_;
   xAOD::AuxContainerBase *TruthBottomAux_;
   xAOD::AuxContainerBase *TruthElectronsAux_;
   xAOD::AuxContainerBase *TruthEventsAux_;
   xAOD::AuxContainerBase *TruthForwardProtonsAux_;
   xAOD::AuxContainerBase *TruthMuonsAux_;
   xAOD::AuxContainerBase *TruthNeutrinosAux_;
   xAOD::AuxContainerBase *TruthPhotonsAux_;
   xAOD::AuxContainerBase *TruthTausAux_;
   xAOD::AuxContainerBase *TruthTopAux_;
   DataVector<xAOD::TruthParticle_v1> *BornLeptons;
   DataVector<xAOD::TruthParticle_v1> *HardScatterParticles;
   DataVector<xAOD::TruthParticle_v1> *TruthBSM;
   DataVector<xAOD::TruthParticle_v1> *TruthBSMWithDecayParticles;
   DataVector<xAOD::TruthParticle_v1> *TruthBoson;
   DataVector<xAOD::TruthParticle_v1> *TruthBosonsWithDecayParticles;
   DataVector<xAOD::TruthParticle_v1> *TruthBottom;
   DataVector<xAOD::TruthParticle_v1> *TruthElectrons;
   DataVector<xAOD::TruthParticle_v1> *TruthForwardProtons;
   DataVector<xAOD::TruthParticle_v1> *TruthMuons;
   DataVector<xAOD::TruthParticle_v1> *TruthNeutrinos;
   DataVector<xAOD::TruthParticle_v1> *TruthPhotons;
   DataVector<xAOD::TruthParticle_v1> *TruthTaus;
   DataVector<xAOD::TruthParticle_v1> *TruthTop;
   DataVector<xAOD::TruthVertex_v1> *HardScatterVertices;
   DataVector<xAOD::TruthVertex_v1> *TruthBSMWithDecayVertices;
   DataVector<xAOD::TruthVertex_v1> *TruthBosonsWithDecayVertices;
   DataVector<xAOD::Jet_v1> *AntiKt10TruthTrimmedPtFrac5SmallR20Jets;
   DataVector<xAOD::Jet_v1> *AntiKt4TruthDressedWZJets;
 //xAOD::JetAuxContainer_v1 *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt;
   vector<float>   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta;
   vector<float>   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi;
   vector<float>   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentLinks;
   vector<vector<float> > AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4TruthDressedWZJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt4TruthDressedWZJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4TruthDressedWZJetsAux_pt;
   vector<float>   AntiKt4TruthDressedWZJetsAux_eta;
   vector<float>   AntiKt4TruthDressedWZJetsAux_phi;
   vector<float>   AntiKt4TruthDressedWZJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4TruthDressedWZJetsAux_constituentLinks;
   vector<vector<float> > AntiKt4TruthDressedWZJetsAux_constituentWeights;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;
   vector<float>   *AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_GhostBHadronsFinalCount;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_GhostCHadronsFinalCount;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_ConeTruthLabelID;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_PartonTruthLabelID;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_HadronConeExclTruthLabelID;
   vector<int>     *AntiKt4TruthDressedWZJetsAuxDyn_TrueFlavor;
   Int_t           BornLeptonsAuxDyn_prodVtxLink_;
   UInt_t          BornLeptonsAuxDyn_prodVtxLink_m_persKey[kMaxBornLeptonsAuxDyn_prodVtxLink];   //[BornLeptonsAuxDyn.prodVtxLink_]
   UInt_t          BornLeptonsAuxDyn_prodVtxLink_m_persIndex[kMaxBornLeptonsAuxDyn_prodVtxLink];   //[BornLeptonsAuxDyn.prodVtxLink_]
   Int_t           BornLeptonsAuxDyn_decayVtxLink_;
   UInt_t          BornLeptonsAuxDyn_decayVtxLink_m_persKey[kMaxBornLeptonsAuxDyn_decayVtxLink];   //[BornLeptonsAuxDyn.decayVtxLink_]
   UInt_t          BornLeptonsAuxDyn_decayVtxLink_m_persIndex[kMaxBornLeptonsAuxDyn_decayVtxLink];   //[BornLeptonsAuxDyn.decayVtxLink_]
   vector<float>   *BornLeptonsAuxDyn_m;
   vector<float>   *BornLeptonsAuxDyn_px;
   vector<float>   *BornLeptonsAuxDyn_py;
   vector<float>   *BornLeptonsAuxDyn_pz;
   vector<float>   *BornLeptonsAuxDyn_e;
   vector<int>     *BornLeptonsAuxDyn_pdgId;
   vector<int>     *BornLeptonsAuxDyn_barcode;
   vector<int>     *BornLeptonsAuxDyn_status;
   vector<unsigned int> *BornLeptonsAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *BornLeptonsAuxDyn_classifierParticleType;
   vector<unsigned int> *BornLeptonsAuxDyn_classifierParticleOutCome;
   vector<set<unsigned int> > *EventInfoAuxDyn_streamTagRobs;
   vector<set<unsigned int> > *EventInfoAuxDyn_streamTagDets;
   UInt_t          EventInfoAuxDyn_mcChannelNumber;
   Float_t         EventInfoAuxDyn_GenFiltHT;
   Float_t         EventInfoAuxDyn_GenFiltMET;
   Float_t         EventInfoAuxDyn_GenFiltPTZ;
   Float_t         EventInfoAuxDyn_TruthIsoCentralEventShape_rho;
   Float_t         EventInfoAuxDyn_TruthIsoForwardEventShape_rho;
   ULong64_t       EventInfoAuxDyn_mcEventNumber;
   vector<float>   *EventInfoAuxDyn_mcEventWeights;
   Int_t           EventInfoAuxDyn_HTXS_prodMode;
   Int_t           HardScatterParticlesAuxDyn_prodVtxLink_;
   UInt_t          HardScatterParticlesAuxDyn_prodVtxLink_m_persKey[kMaxHardScatterParticlesAuxDyn_prodVtxLink];   //[HardScatterParticlesAuxDyn.prodVtxLink_]
   UInt_t          HardScatterParticlesAuxDyn_prodVtxLink_m_persIndex[kMaxHardScatterParticlesAuxDyn_prodVtxLink];   //[HardScatterParticlesAuxDyn.prodVtxLink_]
   Int_t           HardScatterParticlesAuxDyn_decayVtxLink_;
   UInt_t          HardScatterParticlesAuxDyn_decayVtxLink_m_persKey[kMaxHardScatterParticlesAuxDyn_decayVtxLink];   //[HardScatterParticlesAuxDyn.decayVtxLink_]
   UInt_t          HardScatterParticlesAuxDyn_decayVtxLink_m_persIndex[kMaxHardScatterParticlesAuxDyn_decayVtxLink];   //[HardScatterParticlesAuxDyn.decayVtxLink_]
   vector<float>   *HardScatterParticlesAuxDyn_m;
   vector<float>   *HardScatterParticlesAuxDyn_px;
   vector<float>   *HardScatterParticlesAuxDyn_py;
   vector<float>   *HardScatterParticlesAuxDyn_pz;
   vector<float>   *HardScatterParticlesAuxDyn_e;
   vector<int>     *HardScatterParticlesAuxDyn_pdgId;
   vector<int>     *HardScatterParticlesAuxDyn_barcode;
   vector<int>     *HardScatterParticlesAuxDyn_status;
   vector<unsigned int> *HardScatterParticlesAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *HardScatterParticlesAuxDyn_classifierParticleType;
   vector<unsigned int> *HardScatterParticlesAuxDyn_classifierParticleOutCome;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *HardScatterVerticesAuxDyn_incomingParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *HardScatterVerticesAuxDyn_outgoingParticleLinks;
   vector<int>     *HardScatterVerticesAuxDyn_barcode;
   vector<int>     *HardScatterVerticesAuxDyn_id;
   vector<float>   *HardScatterVerticesAuxDyn_x;
   vector<float>   *HardScatterVerticesAuxDyn_y;
   vector<float>   *HardScatterVerticesAuxDyn_z;
   vector<float>   *HardScatterVerticesAuxDyn_t;
   vector<string>  *MET_TruthAuxDyn_name;
   vector<double>  *MET_TruthAuxDyn_mpx;
   vector<double>  *MET_TruthAuxDyn_mpy;
   vector<double>  *MET_TruthAuxDyn_sumet;
   vector<ULong64_t> *MET_TruthAuxDyn_source;
   Int_t           TruthBosonAuxDyn_prodVtxLink_;
   UInt_t          TruthBosonAuxDyn_prodVtxLink_m_persKey[kMaxTruthBosonAuxDyn_prodVtxLink];   //[TruthBosonAuxDyn.prodVtxLink_]
   UInt_t          TruthBosonAuxDyn_prodVtxLink_m_persIndex[kMaxTruthBosonAuxDyn_prodVtxLink];   //[TruthBosonAuxDyn.prodVtxLink_]
   Int_t           TruthBosonAuxDyn_decayVtxLink_;
   UInt_t          TruthBosonAuxDyn_decayVtxLink_m_persKey[kMaxTruthBosonAuxDyn_decayVtxLink];   //[TruthBosonAuxDyn.decayVtxLink_]
   UInt_t          TruthBosonAuxDyn_decayVtxLink_m_persIndex[kMaxTruthBosonAuxDyn_decayVtxLink];   //[TruthBosonAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBosonAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBosonAuxDyn_childLinks;
   vector<float>   *TruthBosonAuxDyn_m;
   vector<float>   *TruthBosonAuxDyn_px;
   vector<float>   *TruthBosonAuxDyn_py;
   vector<float>   *TruthBosonAuxDyn_pz;
   vector<float>   *TruthBosonAuxDyn_e;
   vector<int>     *TruthBosonAuxDyn_pdgId;
   vector<int>     *TruthBosonAuxDyn_barcode;
   vector<int>     *TruthBosonAuxDyn_status;
   vector<unsigned int> *TruthBosonAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthBosonAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthBosonAuxDyn_classifierParticleOutCome;
   Int_t           TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_;
   UInt_t          TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persKey[kMaxTruthBosonsWithDecayParticlesAuxDyn_prodVtxLink];   //[TruthBosonsWithDecayParticlesAuxDyn.prodVtxLink_]
   UInt_t          TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex[kMaxTruthBosonsWithDecayParticlesAuxDyn_prodVtxLink];   //[TruthBosonsWithDecayParticlesAuxDyn.prodVtxLink_]
   Int_t           TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_;
   UInt_t          TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persKey[kMaxTruthBosonsWithDecayParticlesAuxDyn_decayVtxLink];   //[TruthBosonsWithDecayParticlesAuxDyn.decayVtxLink_]
   UInt_t          TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex[kMaxTruthBosonsWithDecayParticlesAuxDyn_decayVtxLink];   //[TruthBosonsWithDecayParticlesAuxDyn.decayVtxLink_]
   vector<float>   *TruthBosonsWithDecayParticlesAuxDyn_m;
   vector<float>   *TruthBosonsWithDecayParticlesAuxDyn_px;
   vector<float>   *TruthBosonsWithDecayParticlesAuxDyn_py;
   vector<float>   *TruthBosonsWithDecayParticlesAuxDyn_pz;
   vector<float>   *TruthBosonsWithDecayParticlesAuxDyn_e;
   vector<int>     *TruthBosonsWithDecayParticlesAuxDyn_pdgId;
   vector<int>     *TruthBosonsWithDecayParticlesAuxDyn_barcode;
   vector<int>     *TruthBosonsWithDecayParticlesAuxDyn_status;
   vector<unsigned int> *TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthBosonsWithDecayParticlesAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOutCome;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBosonsWithDecayVerticesAuxDyn_incomingParticleLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBosonsWithDecayVerticesAuxDyn_outgoingParticleLinks;
   vector<int>     *TruthBosonsWithDecayVerticesAuxDyn_barcode;
   vector<int>     *TruthBosonsWithDecayVerticesAuxDyn_id;
   vector<float>   *TruthBosonsWithDecayVerticesAuxDyn_x;
   vector<float>   *TruthBosonsWithDecayVerticesAuxDyn_y;
   vector<float>   *TruthBosonsWithDecayVerticesAuxDyn_z;
   vector<float>   *TruthBosonsWithDecayVerticesAuxDyn_t;
   Int_t           TruthBottomAuxDyn_prodVtxLink_;
   UInt_t          TruthBottomAuxDyn_prodVtxLink_m_persKey[kMaxTruthBottomAuxDyn_prodVtxLink];   //[TruthBottomAuxDyn.prodVtxLink_]
   UInt_t          TruthBottomAuxDyn_prodVtxLink_m_persIndex[kMaxTruthBottomAuxDyn_prodVtxLink];   //[TruthBottomAuxDyn.prodVtxLink_]
   Int_t           TruthBottomAuxDyn_decayVtxLink_;
   UInt_t          TruthBottomAuxDyn_decayVtxLink_m_persKey[kMaxTruthBottomAuxDyn_decayVtxLink];   //[TruthBottomAuxDyn.decayVtxLink_]
   UInt_t          TruthBottomAuxDyn_decayVtxLink_m_persIndex[kMaxTruthBottomAuxDyn_decayVtxLink];   //[TruthBottomAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBottomAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthBottomAuxDyn_childLinks;
   vector<float>   *TruthBottomAuxDyn_m;
   vector<float>   *TruthBottomAuxDyn_px;
   vector<float>   *TruthBottomAuxDyn_py;
   vector<float>   *TruthBottomAuxDyn_pz;
   vector<float>   *TruthBottomAuxDyn_e;
   vector<int>     *TruthBottomAuxDyn_pdgId;
   vector<int>     *TruthBottomAuxDyn_barcode;
   vector<int>     *TruthBottomAuxDyn_status;
   vector<unsigned int> *TruthBottomAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthBottomAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthBottomAuxDyn_classifierParticleOutCome;
   Int_t           TruthElectronsAuxDyn_prodVtxLink_;
   UInt_t          TruthElectronsAuxDyn_prodVtxLink_m_persKey[kMaxTruthElectronsAuxDyn_prodVtxLink];   //[TruthElectronsAuxDyn.prodVtxLink_]
   UInt_t          TruthElectronsAuxDyn_prodVtxLink_m_persIndex[kMaxTruthElectronsAuxDyn_prodVtxLink];   //[TruthElectronsAuxDyn.prodVtxLink_]
   Int_t           TruthElectronsAuxDyn_decayVtxLink_;
   UInt_t          TruthElectronsAuxDyn_decayVtxLink_m_persKey[kMaxTruthElectronsAuxDyn_decayVtxLink];   //[TruthElectronsAuxDyn.decayVtxLink_]
   UInt_t          TruthElectronsAuxDyn_decayVtxLink_m_persIndex[kMaxTruthElectronsAuxDyn_decayVtxLink];   //[TruthElectronsAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthElectronsAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthElectronsAuxDyn_childLinks;
   vector<float>   *TruthElectronsAuxDyn_m;
   vector<float>   *TruthElectronsAuxDyn_px;
   vector<float>   *TruthElectronsAuxDyn_py;
   vector<float>   *TruthElectronsAuxDyn_pz;
   vector<float>   *TruthElectronsAuxDyn_e;
   vector<int>     *TruthElectronsAuxDyn_pdgId;
   vector<int>     *TruthElectronsAuxDyn_barcode;
   vector<int>     *TruthElectronsAuxDyn_status;
   vector<unsigned int> *TruthElectronsAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthElectronsAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthElectronsAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthElectronsAuxDyn_e_dressed;
   vector<float>   *TruthElectronsAuxDyn_pt_dressed;
   vector<float>   *TruthElectronsAuxDyn_eta_dressed;
   vector<float>   *TruthElectronsAuxDyn_phi_dressed;
   vector<int>     *TruthElectronsAuxDyn_nPhotons_dressed;
   vector<float>   *TruthElectronsAuxDyn_etcone20;
   vector<float>   *TruthElectronsAuxDyn_ptcone30;
   vector<float>   *TruthEventsAuxDyn_crossSection;
   vector<int>     *TruthEventsAuxDyn_PDGID1;
   vector<int>     *TruthEventsAuxDyn_PDGID2;
   vector<int>     *TruthEventsAuxDyn_PDFID1;
   vector<int>     *TruthEventsAuxDyn_PDFID2;
   vector<float>   *TruthEventsAuxDyn_X1;
   vector<float>   *TruthEventsAuxDyn_X2;
   vector<float>   *TruthEventsAuxDyn_Q;
   vector<float>   *TruthEventsAuxDyn_XF1;
   vector<float>   *TruthEventsAuxDyn_XF2;
   Int_t           TruthNeutrinosAuxDyn_prodVtxLink_;
   UInt_t          TruthNeutrinosAuxDyn_prodVtxLink_m_persKey[kMaxTruthNeutrinosAuxDyn_prodVtxLink];   //[TruthNeutrinosAuxDyn.prodVtxLink_]
   UInt_t          TruthNeutrinosAuxDyn_prodVtxLink_m_persIndex[kMaxTruthNeutrinosAuxDyn_prodVtxLink];   //[TruthNeutrinosAuxDyn.prodVtxLink_]
   Int_t           TruthNeutrinosAuxDyn_decayVtxLink_;
   UInt_t          TruthNeutrinosAuxDyn_decayVtxLink_m_persKey[kMaxTruthNeutrinosAuxDyn_decayVtxLink];   //[TruthNeutrinosAuxDyn.decayVtxLink_]
   UInt_t          TruthNeutrinosAuxDyn_decayVtxLink_m_persIndex[kMaxTruthNeutrinosAuxDyn_decayVtxLink];   //[TruthNeutrinosAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthNeutrinosAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthNeutrinosAuxDyn_childLinks;
   vector<float>   *TruthNeutrinosAuxDyn_m;
   vector<float>   *TruthNeutrinosAuxDyn_px;
   vector<float>   *TruthNeutrinosAuxDyn_py;
   vector<float>   *TruthNeutrinosAuxDyn_pz;
   vector<float>   *TruthNeutrinosAuxDyn_e;
   vector<int>     *TruthNeutrinosAuxDyn_pdgId;
   vector<int>     *TruthNeutrinosAuxDyn_barcode;
   vector<int>     *TruthNeutrinosAuxDyn_status;
   vector<unsigned int> *TruthNeutrinosAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthNeutrinosAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthNeutrinosAuxDyn_classifierParticleOutCome;
   Int_t           TruthPhotonsAuxDyn_prodVtxLink_;
   UInt_t          TruthPhotonsAuxDyn_prodVtxLink_m_persKey[kMaxTruthPhotonsAuxDyn_prodVtxLink];   //[TruthPhotonsAuxDyn.prodVtxLink_]
   UInt_t          TruthPhotonsAuxDyn_prodVtxLink_m_persIndex[kMaxTruthPhotonsAuxDyn_prodVtxLink];   //[TruthPhotonsAuxDyn.prodVtxLink_]
   Int_t           TruthPhotonsAuxDyn_decayVtxLink_;
   UInt_t          TruthPhotonsAuxDyn_decayVtxLink_m_persKey[kMaxTruthPhotonsAuxDyn_decayVtxLink];   //[TruthPhotonsAuxDyn.decayVtxLink_]
   UInt_t          TruthPhotonsAuxDyn_decayVtxLink_m_persIndex[kMaxTruthPhotonsAuxDyn_decayVtxLink];   //[TruthPhotonsAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthPhotonsAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthPhotonsAuxDyn_childLinks;
   vector<float>   *TruthPhotonsAuxDyn_m;
   vector<float>   *TruthPhotonsAuxDyn_px;
   vector<float>   *TruthPhotonsAuxDyn_py;
   vector<float>   *TruthPhotonsAuxDyn_pz;
   vector<float>   *TruthPhotonsAuxDyn_e;
   vector<int>     *TruthPhotonsAuxDyn_pdgId;
   vector<int>     *TruthPhotonsAuxDyn_barcode;
   vector<int>     *TruthPhotonsAuxDyn_status;
   vector<unsigned int> *TruthPhotonsAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthPhotonsAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthPhotonsAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthPhotonsAuxDyn_etcone20;
   vector<float>   *TruthPhotonsAuxDyn_ptcone20;
   vector<float>   *TruthPhotonsAuxDyn_etcone40;
   Int_t           TruthTausAuxDyn_prodVtxLink_;
   UInt_t          TruthTausAuxDyn_prodVtxLink_m_persKey[kMaxTruthTausAuxDyn_prodVtxLink];   //[TruthTausAuxDyn.prodVtxLink_]
   UInt_t          TruthTausAuxDyn_prodVtxLink_m_persIndex[kMaxTruthTausAuxDyn_prodVtxLink];   //[TruthTausAuxDyn.prodVtxLink_]
   Int_t           TruthTausAuxDyn_decayVtxLink_;
   UInt_t          TruthTausAuxDyn_decayVtxLink_m_persKey[kMaxTruthTausAuxDyn_decayVtxLink];   //[TruthTausAuxDyn.decayVtxLink_]
   UInt_t          TruthTausAuxDyn_decayVtxLink_m_persIndex[kMaxTruthTausAuxDyn_decayVtxLink];   //[TruthTausAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthTausAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthTausAuxDyn_childLinks;
   vector<float>   *TruthTausAuxDyn_m;
   vector<float>   *TruthTausAuxDyn_px;
   vector<float>   *TruthTausAuxDyn_py;
   vector<float>   *TruthTausAuxDyn_pz;
   vector<float>   *TruthTausAuxDyn_e;
   vector<int>     *TruthTausAuxDyn_pdgId;
   vector<int>     *TruthTausAuxDyn_barcode;
   vector<int>     *TruthTausAuxDyn_status;
   vector<float>   *TruthTausAuxDyn_polarizationTheta;
   vector<float>   *TruthTausAuxDyn_polarizationPhi;
   Int_t           TruthTausAuxDyn_originalTruthParticle_;
   UInt_t          TruthTausAuxDyn_originalTruthParticle_m_persKey[kMaxTruthTausAuxDyn_originalTruthParticle];   //[TruthTausAuxDyn.originalTruthParticle_]
   UInt_t          TruthTausAuxDyn_originalTruthParticle_m_persIndex[kMaxTruthTausAuxDyn_originalTruthParticle];   //[TruthTausAuxDyn.originalTruthParticle_]
   vector<unsigned int> *TruthTausAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthTausAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthTausAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthTausAuxDyn_pt_vis_dressed;
   vector<float>   *TruthTausAuxDyn_eta_vis_dressed;
   vector<float>   *TruthTausAuxDyn_phi_vis_dressed;
   vector<float>   *TruthTausAuxDyn_m_vis_dressed;
   vector<int>     *TruthTausAuxDyn_nPhotons_dressed;
   vector<char>    *TruthTausAuxDyn_dressedPhoton;
   vector<double>  *TruthTausAuxDyn_pt_vis;
   vector<double>  *TruthTausAuxDyn_eta_vis;
   vector<double>  *TruthTausAuxDyn_phi_vis;
   vector<double>  *TruthTausAuxDyn_m_vis;
   vector<unsigned long> *TruthTausAuxDyn_numCharged;
   vector<unsigned long> *TruthTausAuxDyn_numChargedPion;
   vector<unsigned long> *TruthTausAuxDyn_numNeutral;
   vector<unsigned long> *TruthTausAuxDyn_numNeutralPion;
   vector<char>    *TruthTausAuxDyn_IsHadronicTau;
   vector<double>  *TruthTausAuxDyn_pt_invis;
   vector<double>  *TruthTausAuxDyn_eta_invis;
   vector<double>  *TruthTausAuxDyn_phi_invis;
   vector<double>  *TruthTausAuxDyn_m_invis;
   vector<vector<int> > *TruthTausAuxDyn_DecayModeVector;
   Int_t           TruthMuonsAuxDyn_prodVtxLink_;
   UInt_t          TruthMuonsAuxDyn_prodVtxLink_m_persKey[kMaxTruthMuonsAuxDyn_prodVtxLink];   //[TruthMuonsAuxDyn.prodVtxLink_]
   UInt_t          TruthMuonsAuxDyn_prodVtxLink_m_persIndex[kMaxTruthMuonsAuxDyn_prodVtxLink];   //[TruthMuonsAuxDyn.prodVtxLink_]
   Int_t           TruthMuonsAuxDyn_decayVtxLink_;
   UInt_t          TruthMuonsAuxDyn_decayVtxLink_m_persKey[kMaxTruthMuonsAuxDyn_decayVtxLink];   //[TruthMuonsAuxDyn.decayVtxLink_]
   UInt_t          TruthMuonsAuxDyn_decayVtxLink_m_persIndex[kMaxTruthMuonsAuxDyn_decayVtxLink];   //[TruthMuonsAuxDyn.decayVtxLink_]
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthMuonsAuxDyn_parentLinks;
   vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > *TruthMuonsAuxDyn_childLinks;
   vector<float>   *TruthMuonsAuxDyn_m;
   vector<float>   *TruthMuonsAuxDyn_px;
   vector<float>   *TruthMuonsAuxDyn_py;
   vector<float>   *TruthMuonsAuxDyn_pz;
   vector<float>   *TruthMuonsAuxDyn_e;
   vector<int>     *TruthMuonsAuxDyn_pdgId;
   vector<int>     *TruthMuonsAuxDyn_barcode;
   vector<int>     *TruthMuonsAuxDyn_status;
   vector<unsigned int> *TruthMuonsAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthMuonsAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthMuonsAuxDyn_classifierParticleOutCome;
   vector<float>   *TruthMuonsAuxDyn_e_dressed;
   vector<float>   *TruthMuonsAuxDyn_pt_dressed;
   vector<float>   *TruthMuonsAuxDyn_eta_dressed;
   vector<float>   *TruthMuonsAuxDyn_phi_dressed;
   vector<int>     *TruthMuonsAuxDyn_nPhotons_dressed;
   vector<float>   *TruthMuonsAuxDyn_etcone20;
   vector<float>   *TruthMuonsAuxDyn_ptcone30;
   Int_t           TruthForwardProtonsAuxDyn_prodVtxLink_;
   UInt_t          TruthForwardProtonsAuxDyn_prodVtxLink_m_persKey[kMaxTruthForwardProtonsAuxDyn_prodVtxLink];   //[TruthForwardProtonsAuxDyn.prodVtxLink_]
   UInt_t          TruthForwardProtonsAuxDyn_prodVtxLink_m_persIndex[kMaxTruthForwardProtonsAuxDyn_prodVtxLink];   //[TruthForwardProtonsAuxDyn.prodVtxLink_]
   Int_t           TruthForwardProtonsAuxDyn_decayVtxLink_;
   UInt_t          TruthForwardProtonsAuxDyn_decayVtxLink_m_persKey[kMaxTruthForwardProtonsAuxDyn_decayVtxLink];   //[TruthForwardProtonsAuxDyn.decayVtxLink_]
   UInt_t          TruthForwardProtonsAuxDyn_decayVtxLink_m_persIndex[kMaxTruthForwardProtonsAuxDyn_decayVtxLink];   //[TruthForwardProtonsAuxDyn.decayVtxLink_]
   vector<float>   *TruthForwardProtonsAuxDyn_m;
   vector<float>   *TruthForwardProtonsAuxDyn_px;
   vector<float>   *TruthForwardProtonsAuxDyn_py;
   vector<float>   *TruthForwardProtonsAuxDyn_pz;
   vector<float>   *TruthForwardProtonsAuxDyn_e;
   vector<int>     *TruthForwardProtonsAuxDyn_pdgId;
   vector<int>     *TruthForwardProtonsAuxDyn_barcode;
   vector<int>     *TruthForwardProtonsAuxDyn_status;
   vector<unsigned int> *TruthForwardProtonsAuxDyn_classifierParticleOrigin;
   vector<unsigned int> *TruthForwardProtonsAuxDyn_classifierParticleType;
   vector<unsigned int> *TruthForwardProtonsAuxDyn_classifierParticleOutCome;

   // List of branches
   TBranch        *b_McEventInfo;   //!
   TBranch        *b_EventInfoAux_runNumber;   //!
   TBranch        *b_EventInfoAux_eventNumber;   //!
   TBranch        *b_EventInfoAux_lumiBlock;   //!
   TBranch        *b_EventInfoAux_timeStamp;   //!
   TBranch        *b_EventInfoAux_timeStampNSOffset;   //!
   TBranch        *b_EventInfoAux_bcid;   //!
   TBranch        *b_EventInfoAux_detectorMask0;   //!
   TBranch        *b_EventInfoAux_detectorMask1;   //!
   TBranch        *b_EventInfoAux_detectorMask2;   //!
   TBranch        *b_EventInfoAux_detectorMask3;   //!
   TBranch        *b_EventInfoAux_eventTypeBitmask;   //!
   TBranch        *b_EventInfoAux_statusElement;   //!
   TBranch        *b_EventInfoAux_extendedLevel1ID;   //!
   TBranch        *b_EventInfoAux_level1TriggerType;   //!
   TBranch        *b_EventInfoAux_streamTagNames;   //!
   TBranch        *b_EventInfoAux_streamTagTypes;   //!
   TBranch        *b_EventInfoAux_streamTagObeysLumiblock;   //!
   TBranch        *b_EventInfoAux_actualInteractionsPerCrossing;   //!
   TBranch        *b_EventInfoAux_averageInteractionsPerCrossing;   //!
   TBranch        *b_EventInfoAux_pixelFlags;   //!
   TBranch        *b_EventInfoAux_sctFlags;   //!
   TBranch        *b_EventInfoAux_trtFlags;   //!
   TBranch        *b_EventInfoAux_larFlags;   //!
   TBranch        *b_EventInfoAux_tileFlags;   //!
   TBranch        *b_EventInfoAux_muonFlags;   //!
   TBranch        *b_EventInfoAux_forwardDetFlags;   //!
   TBranch        *b_EventInfoAux_coreFlags;   //!
   TBranch        *b_EventInfoAux_backgroundFlags;   //!
   TBranch        *b_EventInfoAux_lumiFlags;   //!
   TBranch        *b_EventInfoAux_beamPosX;   //!
   TBranch        *b_EventInfoAux_beamPosY;   //!
   TBranch        *b_EventInfoAux_beamPosZ;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaX;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaY;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaZ;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaXY;   //!
   TBranch        *b_EventInfoAux_beamTiltXZ;   //!
   TBranch        *b_EventInfoAux_beamTiltYZ;   //!
   TBranch        *b_EventInfoAux_beamStatus;   //!
   TBranch        *b_EventInfo;   //!
   TBranch        *b_MET_Truth;   //!
   TBranch        *b_TruthEvents;   //!
   TBranch        *b_BornLeptonsAux_;   //!
   TBranch        *b_HardScatterParticlesAux_;   //!
   TBranch        *b_HardScatterVerticesAux_;   //!
   TBranch        *b_MET_TruthAux_;   //!
   TBranch        *b_TruthBSMAux_;   //!
   TBranch        *b_TruthBSMWithDecayParticlesAux_;   //!
   TBranch        *b_TruthBSMWithDecayVerticesAux_;   //!
   TBranch        *b_TruthBosonAux_;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAux_;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAux_;   //!
   TBranch        *b_TruthBottomAux_;   //!
   TBranch        *b_TruthElectronsAux_;   //!
   TBranch        *b_TruthEventsAux_;   //!
   TBranch        *b_TruthForwardProtonsAux_;   //!
   TBranch        *b_TruthMuonsAux_;   //!
   TBranch        *b_TruthNeutrinosAux_;   //!
   TBranch        *b_TruthPhotonsAux_;   //!
   TBranch        *b_TruthTausAux_;   //!
   TBranch        *b_TruthTopAux_;   //!
   TBranch        *b_BornLeptons;   //!
   TBranch        *b_HardScatterParticles;   //!
   TBranch        *b_TruthBSM;   //!
   TBranch        *b_TruthBSMWithDecayParticles;   //!
   TBranch        *b_TruthBoson;   //!
   TBranch        *b_TruthBosonsWithDecayParticles;   //!
   TBranch        *b_TruthBottom;   //!
   TBranch        *b_TruthElectrons;   //!
   TBranch        *b_TruthForwardProtons;   //!
   TBranch        *b_TruthMuons;   //!
   TBranch        *b_TruthNeutrinos;   //!
   TBranch        *b_TruthPhotons;   //!
   TBranch        *b_TruthTaus;   //!
   TBranch        *b_TruthTop;   //!
   TBranch        *b_HardScatterVertices;   //!
   TBranch        *b_TruthBSMWithDecayVertices;   //!
   TBranch        *b_TruthBosonsWithDecayVertices;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20Jets;   //!
   TBranch        *b_AntiKt4TruthDressedWZJets;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAux_pt;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAux_eta;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAux_phi;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAux_m;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAux_constituentWeights;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta;   //!
   TBranch        *b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_GhostBHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_GhostCHadronsFinalCount;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_ConeTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_PartonTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_HadronConeExclTruthLabelID;   //!
   TBranch        *b_AntiKt4TruthDressedWZJetsAuxDyn_TrueFlavor;   //!
   TBranch        *b_BornLeptonsAuxDyn_prodVtxLink_;   //!
   TBranch        *b_BornLeptonsAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_BornLeptonsAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_BornLeptonsAuxDyn_decayVtxLink_;   //!
   TBranch        *b_BornLeptonsAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_BornLeptonsAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_BornLeptonsAuxDyn_m;   //!
   TBranch        *b_BornLeptonsAuxDyn_px;   //!
   TBranch        *b_BornLeptonsAuxDyn_py;   //!
   TBranch        *b_BornLeptonsAuxDyn_pz;   //!
   TBranch        *b_BornLeptonsAuxDyn_e;   //!
   TBranch        *b_BornLeptonsAuxDyn_pdgId;   //!
   TBranch        *b_BornLeptonsAuxDyn_barcode;   //!
   TBranch        *b_BornLeptonsAuxDyn_status;   //!
   TBranch        *b_BornLeptonsAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_BornLeptonsAuxDyn_classifierParticleType;   //!
   TBranch        *b_BornLeptonsAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_EventInfoAuxDyn_streamTagRobs;   //!
   TBranch        *b_EventInfoAuxDyn_streamTagDets;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_GenFiltHT;   //!
   TBranch        *b_GenFiltMET;   //!
   TBranch        *b_GenFiltPTZ;   //!
   TBranch        *b_TruthIsoCentralEventShape_rho;   //!
   TBranch        *b_TruthIsoForwardEventShape_rho;   //!
   TBranch        *b_mcEventNumber;   //!
   TBranch        *b_EventInfoAuxDyn_mcEventWeights;   //!
   TBranch        *b_HTXS_prodMode;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_prodVtxLink_;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_decayVtxLink_;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_m;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_px;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_py;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_pz;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_e;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_pdgId;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_barcode;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_status;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_classifierParticleType;   //!
   TBranch        *b_HardScatterParticlesAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_incomingParticleLinks;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_outgoingParticleLinks;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_barcode;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_id;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_x;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_y;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_z;   //!
   TBranch        *b_HardScatterVerticesAuxDyn_t;   //!
   TBranch        *b_MET_TruthAuxDyn_name;   //!
   TBranch        *b_MET_TruthAuxDyn_mpx;   //!
   TBranch        *b_MET_TruthAuxDyn_mpy;   //!
   TBranch        *b_MET_TruthAuxDyn_sumet;   //!
   TBranch        *b_MET_TruthAuxDyn_source;   //!
   TBranch        *b_TruthBosonAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthBosonAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthBosonAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBosonAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthBosonAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthBosonAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBosonAuxDyn_parentLinks;   //!
   TBranch        *b_TruthBosonAuxDyn_childLinks;   //!
   TBranch        *b_TruthBosonAuxDyn_m;   //!
   TBranch        *b_TruthBosonAuxDyn_px;   //!
   TBranch        *b_TruthBosonAuxDyn_py;   //!
   TBranch        *b_TruthBosonAuxDyn_pz;   //!
   TBranch        *b_TruthBosonAuxDyn_e;   //!
   TBranch        *b_TruthBosonAuxDyn_pdgId;   //!
   TBranch        *b_TruthBosonAuxDyn_barcode;   //!
   TBranch        *b_TruthBosonAuxDyn_status;   //!
   TBranch        *b_TruthBosonAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthBosonAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthBosonAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_m;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_px;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_py;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_pz;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_e;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_pdgId;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_barcode;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_status;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_incomingParticleLinks;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_outgoingParticleLinks;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_barcode;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_id;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_x;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_y;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_z;   //!
   TBranch        *b_TruthBosonsWithDecayVerticesAuxDyn_t;   //!
   TBranch        *b_TruthBottomAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthBottomAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthBottomAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBottomAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthBottomAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthBottomAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthBottomAuxDyn_parentLinks;   //!
   TBranch        *b_TruthBottomAuxDyn_childLinks;   //!
   TBranch        *b_TruthBottomAuxDyn_m;   //!
   TBranch        *b_TruthBottomAuxDyn_px;   //!
   TBranch        *b_TruthBottomAuxDyn_py;   //!
   TBranch        *b_TruthBottomAuxDyn_pz;   //!
   TBranch        *b_TruthBottomAuxDyn_e;   //!
   TBranch        *b_TruthBottomAuxDyn_pdgId;   //!
   TBranch        *b_TruthBottomAuxDyn_barcode;   //!
   TBranch        *b_TruthBottomAuxDyn_status;   //!
   TBranch        *b_TruthBottomAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthBottomAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthBottomAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthElectronsAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthElectronsAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthElectronsAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthElectronsAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthElectronsAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthElectronsAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthElectronsAuxDyn_parentLinks;   //!
   TBranch        *b_TruthElectronsAuxDyn_childLinks;   //!
   TBranch        *b_TruthElectronsAuxDyn_m;   //!
   TBranch        *b_TruthElectronsAuxDyn_px;   //!
   TBranch        *b_TruthElectronsAuxDyn_py;   //!
   TBranch        *b_TruthElectronsAuxDyn_pz;   //!
   TBranch        *b_TruthElectronsAuxDyn_e;   //!
   TBranch        *b_TruthElectronsAuxDyn_pdgId;   //!
   TBranch        *b_TruthElectronsAuxDyn_barcode;   //!
   TBranch        *b_TruthElectronsAuxDyn_status;   //!
   TBranch        *b_TruthElectronsAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthElectronsAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthElectronsAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthElectronsAuxDyn_e_dressed;   //!
   TBranch        *b_TruthElectronsAuxDyn_pt_dressed;   //!
   TBranch        *b_TruthElectronsAuxDyn_eta_dressed;   //!
   TBranch        *b_TruthElectronsAuxDyn_phi_dressed;   //!
   TBranch        *b_TruthElectronsAuxDyn_nPhotons_dressed;   //!
   TBranch        *b_TruthElectronsAuxDyn_etcone20;   //!
   TBranch        *b_TruthElectronsAuxDyn_ptcone30;   //!
   TBranch        *b_TruthEventsAuxDyn_crossSection;   //!
   TBranch        *b_TruthEventsAuxDyn_PDGID1;   //!
   TBranch        *b_TruthEventsAuxDyn_PDGID2;   //!
   TBranch        *b_TruthEventsAuxDyn_PDFID1;   //!
   TBranch        *b_TruthEventsAuxDyn_PDFID2;   //!
   TBranch        *b_TruthEventsAuxDyn_X1;   //!
   TBranch        *b_TruthEventsAuxDyn_X2;   //!
   TBranch        *b_TruthEventsAuxDyn_Q;   //!
   TBranch        *b_TruthEventsAuxDyn_XF1;   //!
   TBranch        *b_TruthEventsAuxDyn_XF2;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_parentLinks;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_childLinks;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_m;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_px;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_py;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_pz;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_e;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_pdgId;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_barcode;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_status;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthNeutrinosAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthPhotonsAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthPhotonsAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthPhotonsAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthPhotonsAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthPhotonsAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthPhotonsAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthPhotonsAuxDyn_parentLinks;   //!
   TBranch        *b_TruthPhotonsAuxDyn_childLinks;   //!
   TBranch        *b_TruthPhotonsAuxDyn_m;   //!
   TBranch        *b_TruthPhotonsAuxDyn_px;   //!
   TBranch        *b_TruthPhotonsAuxDyn_py;   //!
   TBranch        *b_TruthPhotonsAuxDyn_pz;   //!
   TBranch        *b_TruthPhotonsAuxDyn_e;   //!
   TBranch        *b_TruthPhotonsAuxDyn_pdgId;   //!
   TBranch        *b_TruthPhotonsAuxDyn_barcode;   //!
   TBranch        *b_TruthPhotonsAuxDyn_status;   //!
   TBranch        *b_TruthPhotonsAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthPhotonsAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthPhotonsAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthPhotonsAuxDyn_etcone20;   //!
   TBranch        *b_TruthPhotonsAuxDyn_ptcone20;   //!
   TBranch        *b_TruthPhotonsAuxDyn_etcone40;   //!
   TBranch        *b_TruthTausAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthTausAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthTausAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthTausAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthTausAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthTausAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthTausAuxDyn_parentLinks;   //!
   TBranch        *b_TruthTausAuxDyn_childLinks;   //!
   TBranch        *b_TruthTausAuxDyn_m;   //!
   TBranch        *b_TruthTausAuxDyn_px;   //!
   TBranch        *b_TruthTausAuxDyn_py;   //!
   TBranch        *b_TruthTausAuxDyn_pz;   //!
   TBranch        *b_TruthTausAuxDyn_e;   //!
   TBranch        *b_TruthTausAuxDyn_pdgId;   //!
   TBranch        *b_TruthTausAuxDyn_barcode;   //!
   TBranch        *b_TruthTausAuxDyn_status;   //!
   TBranch        *b_TruthTausAuxDyn_polarizationTheta;   //!
   TBranch        *b_TruthTausAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthTausAuxDyn_originalTruthParticle_;   //!
   TBranch        *b_TruthTausAuxDyn_originalTruthParticle_m_persKey;   //!
   TBranch        *b_TruthTausAuxDyn_originalTruthParticle_m_persIndex;   //!
   TBranch        *b_TruthTausAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthTausAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthTausAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthTausAuxDyn_pt_vis_dressed;   //!
   TBranch        *b_TruthTausAuxDyn_eta_vis_dressed;   //!
   TBranch        *b_TruthTausAuxDyn_phi_vis_dressed;   //!
   TBranch        *b_TruthTausAuxDyn_m_vis_dressed;   //!
   TBranch        *b_TruthTausAuxDyn_nPhotons_dressed;   //!
   TBranch        *b_TruthTausAuxDyn_dressedPhoton;   //!
   TBranch        *b_TruthTausAuxDyn_pt_vis;   //!
   TBranch        *b_TruthTausAuxDyn_eta_vis;   //!
   TBranch        *b_TruthTausAuxDyn_phi_vis;   //!
   TBranch        *b_TruthTausAuxDyn_m_vis;   //!
   TBranch        *b_TruthTausAuxDyn_numCharged;   //!
   TBranch        *b_TruthTausAuxDyn_numChargedPion;   //!
   TBranch        *b_TruthTausAuxDyn_numNeutral;   //!
   TBranch        *b_TruthTausAuxDyn_numNeutralPion;   //!
   TBranch        *b_TruthTausAuxDyn_IsHadronicTau;   //!
   TBranch        *b_TruthTausAuxDyn_pt_invis;   //!
   TBranch        *b_TruthTausAuxDyn_eta_invis;   //!
   TBranch        *b_TruthTausAuxDyn_phi_invis;   //!
   TBranch        *b_TruthTausAuxDyn_m_invis;   //!
   TBranch        *b_TruthTausAuxDyn_DecayModeVector;   //!
   TBranch        *b_TruthMuonsAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthMuonsAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthMuonsAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthMuonsAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthMuonsAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthMuonsAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthMuonsAuxDyn_parentLinks;   //!
   TBranch        *b_TruthMuonsAuxDyn_childLinks;   //!
   TBranch        *b_TruthMuonsAuxDyn_m;   //!
   TBranch        *b_TruthMuonsAuxDyn_px;   //!
   TBranch        *b_TruthMuonsAuxDyn_py;   //!
   TBranch        *b_TruthMuonsAuxDyn_pz;   //!
   TBranch        *b_TruthMuonsAuxDyn_e;   //!
   TBranch        *b_TruthMuonsAuxDyn_pdgId;   //!
   TBranch        *b_TruthMuonsAuxDyn_barcode;   //!
   TBranch        *b_TruthMuonsAuxDyn_status;   //!
   TBranch        *b_TruthMuonsAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthMuonsAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthMuonsAuxDyn_classifierParticleOutCome;   //!
   TBranch        *b_TruthMuonsAuxDyn_e_dressed;   //!
   TBranch        *b_TruthMuonsAuxDyn_pt_dressed;   //!
   TBranch        *b_TruthMuonsAuxDyn_eta_dressed;   //!
   TBranch        *b_TruthMuonsAuxDyn_phi_dressed;   //!
   TBranch        *b_TruthMuonsAuxDyn_nPhotons_dressed;   //!
   TBranch        *b_TruthMuonsAuxDyn_etcone20;   //!
   TBranch        *b_TruthMuonsAuxDyn_ptcone30;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_prodVtxLink_;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_prodVtxLink_m_persKey;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_prodVtxLink_m_persIndex;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_decayVtxLink_;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_decayVtxLink_m_persKey;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_decayVtxLink_m_persIndex;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_m;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_px;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_py;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_pz;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_e;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_pdgId;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_barcode;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_status;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_classifierParticleOrigin;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_classifierParticleType;   //!
   TBranch        *b_TruthForwardProtonsAuxDyn_classifierParticleOutCome;   //!

   Analzer(TTree *tree=0);
   virtual ~Analzer();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Analzer_cxx
Analzer::Analzer(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("DAOD_TRUTH3.output3.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("DAOD_TRUTH3.output3.root");
      }
      f->GetObject("CollectionTree",tree);

   }
   Init(tree);
}

Analzer::~Analzer()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Analzer::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Analzer::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Analzer::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   McEventInfo = 0;
   EventInfo = 0;
   MET_Truth = 0;
   TruthEvents = 0;
   BornLeptonsAux_ = 0;
   HardScatterParticlesAux_ = 0;
   HardScatterVerticesAux_ = 0;
   MET_TruthAux_ = 0;
   TruthBSMAux_ = 0;
   TruthBSMWithDecayParticlesAux_ = 0;
   TruthBSMWithDecayVerticesAux_ = 0;
   TruthBosonAux_ = 0;
   TruthBosonsWithDecayParticlesAux_ = 0;
   TruthBosonsWithDecayVerticesAux_ = 0;
   TruthBottomAux_ = 0;
   TruthElectronsAux_ = 0;
   TruthEventsAux_ = 0;
   TruthForwardProtonsAux_ = 0;
   TruthMuonsAux_ = 0;
   TruthNeutrinosAux_ = 0;
   TruthPhotonsAux_ = 0;
   TruthTausAux_ = 0;
   TruthTopAux_ = 0;
   BornLeptons = 0;
   HardScatterParticles = 0;
   TruthBSM = 0;
   TruthBSMWithDecayParticles = 0;
   TruthBoson = 0;
   TruthBosonsWithDecayParticles = 0;
   TruthBottom = 0;
   TruthElectrons = 0;
   TruthForwardProtons = 0;
   TruthMuons = 0;
   TruthNeutrinos = 0;
   TruthPhotons = 0;
   TruthTaus = 0;
   TruthTop = 0;
   HardScatterVertices = 0;
   TruthBSMWithDecayVertices = 0;
   TruthBosonsWithDecayVertices = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20Jets = 0;
   AntiKt4TruthDressedWZJets = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta = 0;
   AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2 = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_GhostBHadronsFinalCount = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_GhostCHadronsFinalCount = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_ConeTruthLabelID = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_PartonTruthLabelID = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_HadronConeExclTruthLabelID = 0;
   AntiKt4TruthDressedWZJetsAuxDyn_TrueFlavor = 0;
   BornLeptonsAuxDyn_m = 0;
   BornLeptonsAuxDyn_px = 0;
   BornLeptonsAuxDyn_py = 0;
   BornLeptonsAuxDyn_pz = 0;
   BornLeptonsAuxDyn_e = 0;
   BornLeptonsAuxDyn_pdgId = 0;
   BornLeptonsAuxDyn_barcode = 0;
   BornLeptonsAuxDyn_status = 0;
   BornLeptonsAuxDyn_classifierParticleOrigin = 0;
   BornLeptonsAuxDyn_classifierParticleType = 0;
   BornLeptonsAuxDyn_classifierParticleOutCome = 0;
   EventInfoAuxDyn_streamTagRobs = 0;
   EventInfoAuxDyn_streamTagDets = 0;
   EventInfoAuxDyn_mcEventWeights = 0;
   HardScatterParticlesAuxDyn_m = 0;
   HardScatterParticlesAuxDyn_px = 0;
   HardScatterParticlesAuxDyn_py = 0;
   HardScatterParticlesAuxDyn_pz = 0;
   HardScatterParticlesAuxDyn_e = 0;
   HardScatterParticlesAuxDyn_pdgId = 0;
   HardScatterParticlesAuxDyn_barcode = 0;
   HardScatterParticlesAuxDyn_status = 0;
   HardScatterParticlesAuxDyn_classifierParticleOrigin = 0;
   HardScatterParticlesAuxDyn_classifierParticleType = 0;
   HardScatterParticlesAuxDyn_classifierParticleOutCome = 0;
   HardScatterVerticesAuxDyn_incomingParticleLinks = 0;
   HardScatterVerticesAuxDyn_outgoingParticleLinks = 0;
   HardScatterVerticesAuxDyn_barcode = 0;
   HardScatterVerticesAuxDyn_id = 0;
   HardScatterVerticesAuxDyn_x = 0;
   HardScatterVerticesAuxDyn_y = 0;
   HardScatterVerticesAuxDyn_z = 0;
   HardScatterVerticesAuxDyn_t = 0;
   MET_TruthAuxDyn_name = 0;
   MET_TruthAuxDyn_mpx = 0;
   MET_TruthAuxDyn_mpy = 0;
   MET_TruthAuxDyn_sumet = 0;
   MET_TruthAuxDyn_source = 0;
   TruthBosonAuxDyn_parentLinks = 0;
   TruthBosonAuxDyn_childLinks = 0;
   TruthBosonAuxDyn_m = 0;
   TruthBosonAuxDyn_px = 0;
   TruthBosonAuxDyn_py = 0;
   TruthBosonAuxDyn_pz = 0;
   TruthBosonAuxDyn_e = 0;
   TruthBosonAuxDyn_pdgId = 0;
   TruthBosonAuxDyn_barcode = 0;
   TruthBosonAuxDyn_status = 0;
   TruthBosonAuxDyn_classifierParticleOrigin = 0;
   TruthBosonAuxDyn_classifierParticleType = 0;
   TruthBosonAuxDyn_classifierParticleOutCome = 0;
   TruthBosonsWithDecayParticlesAuxDyn_m = 0;
   TruthBosonsWithDecayParticlesAuxDyn_px = 0;
   TruthBosonsWithDecayParticlesAuxDyn_py = 0;
   TruthBosonsWithDecayParticlesAuxDyn_pz = 0;
   TruthBosonsWithDecayParticlesAuxDyn_e = 0;
   TruthBosonsWithDecayParticlesAuxDyn_pdgId = 0;
   TruthBosonsWithDecayParticlesAuxDyn_barcode = 0;
   TruthBosonsWithDecayParticlesAuxDyn_status = 0;
   TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOrigin = 0;
   TruthBosonsWithDecayParticlesAuxDyn_classifierParticleType = 0;
   TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOutCome = 0;
   TruthBosonsWithDecayVerticesAuxDyn_incomingParticleLinks = 0;
   TruthBosonsWithDecayVerticesAuxDyn_outgoingParticleLinks = 0;
   TruthBosonsWithDecayVerticesAuxDyn_barcode = 0;
   TruthBosonsWithDecayVerticesAuxDyn_id = 0;
   TruthBosonsWithDecayVerticesAuxDyn_x = 0;
   TruthBosonsWithDecayVerticesAuxDyn_y = 0;
   TruthBosonsWithDecayVerticesAuxDyn_z = 0;
   TruthBosonsWithDecayVerticesAuxDyn_t = 0;
   TruthBottomAuxDyn_parentLinks = 0;
   TruthBottomAuxDyn_childLinks = 0;
   TruthBottomAuxDyn_m = 0;
   TruthBottomAuxDyn_px = 0;
   TruthBottomAuxDyn_py = 0;
   TruthBottomAuxDyn_pz = 0;
   TruthBottomAuxDyn_e = 0;
   TruthBottomAuxDyn_pdgId = 0;
   TruthBottomAuxDyn_barcode = 0;
   TruthBottomAuxDyn_status = 0;
   TruthBottomAuxDyn_classifierParticleOrigin = 0;
   TruthBottomAuxDyn_classifierParticleType = 0;
   TruthBottomAuxDyn_classifierParticleOutCome = 0;
   TruthElectronsAuxDyn_parentLinks = 0;
   TruthElectronsAuxDyn_childLinks = 0;
   TruthElectronsAuxDyn_m = 0;
   TruthElectronsAuxDyn_px = 0;
   TruthElectronsAuxDyn_py = 0;
   TruthElectronsAuxDyn_pz = 0;
   TruthElectronsAuxDyn_e = 0;
   TruthElectronsAuxDyn_pdgId = 0;
   TruthElectronsAuxDyn_barcode = 0;
   TruthElectronsAuxDyn_status = 0;
   TruthElectronsAuxDyn_classifierParticleOrigin = 0;
   TruthElectronsAuxDyn_classifierParticleType = 0;
   TruthElectronsAuxDyn_classifierParticleOutCome = 0;
   TruthElectronsAuxDyn_e_dressed = 0;
   TruthElectronsAuxDyn_pt_dressed = 0;
   TruthElectronsAuxDyn_eta_dressed = 0;
   TruthElectronsAuxDyn_phi_dressed = 0;
   TruthElectronsAuxDyn_nPhotons_dressed = 0;
   TruthElectronsAuxDyn_etcone20 = 0;
   TruthElectronsAuxDyn_ptcone30 = 0;
   TruthEventsAuxDyn_crossSection = 0;
   TruthEventsAuxDyn_PDGID1 = 0;
   TruthEventsAuxDyn_PDGID2 = 0;
   TruthEventsAuxDyn_PDFID1 = 0;
   TruthEventsAuxDyn_PDFID2 = 0;
   TruthEventsAuxDyn_X1 = 0;
   TruthEventsAuxDyn_X2 = 0;
   TruthEventsAuxDyn_Q = 0;
   TruthEventsAuxDyn_XF1 = 0;
   TruthEventsAuxDyn_XF2 = 0;
   TruthNeutrinosAuxDyn_parentLinks = 0;
   TruthNeutrinosAuxDyn_childLinks = 0;
   TruthNeutrinosAuxDyn_m = 0;
   TruthNeutrinosAuxDyn_px = 0;
   TruthNeutrinosAuxDyn_py = 0;
   TruthNeutrinosAuxDyn_pz = 0;
   TruthNeutrinosAuxDyn_e = 0;
   TruthNeutrinosAuxDyn_pdgId = 0;
   TruthNeutrinosAuxDyn_barcode = 0;
   TruthNeutrinosAuxDyn_status = 0;
   TruthNeutrinosAuxDyn_classifierParticleOrigin = 0;
   TruthNeutrinosAuxDyn_classifierParticleType = 0;
   TruthNeutrinosAuxDyn_classifierParticleOutCome = 0;
   TruthPhotonsAuxDyn_parentLinks = 0;
   TruthPhotonsAuxDyn_childLinks = 0;
   TruthPhotonsAuxDyn_m = 0;
   TruthPhotonsAuxDyn_px = 0;
   TruthPhotonsAuxDyn_py = 0;
   TruthPhotonsAuxDyn_pz = 0;
   TruthPhotonsAuxDyn_e = 0;
   TruthPhotonsAuxDyn_pdgId = 0;
   TruthPhotonsAuxDyn_barcode = 0;
   TruthPhotonsAuxDyn_status = 0;
   TruthPhotonsAuxDyn_classifierParticleOrigin = 0;
   TruthPhotonsAuxDyn_classifierParticleType = 0;
   TruthPhotonsAuxDyn_classifierParticleOutCome = 0;
   TruthPhotonsAuxDyn_etcone20 = 0;
   TruthPhotonsAuxDyn_ptcone20 = 0;
   TruthPhotonsAuxDyn_etcone40 = 0;
   TruthTausAuxDyn_parentLinks = 0;
   TruthTausAuxDyn_childLinks = 0;
   TruthTausAuxDyn_m = 0;
   TruthTausAuxDyn_px = 0;
   TruthTausAuxDyn_py = 0;
   TruthTausAuxDyn_pz = 0;
   TruthTausAuxDyn_e = 0;
   TruthTausAuxDyn_pdgId = 0;
   TruthTausAuxDyn_barcode = 0;
   TruthTausAuxDyn_status = 0;
   TruthTausAuxDyn_polarizationTheta = 0;
   TruthTausAuxDyn_polarizationPhi = 0;
   TruthTausAuxDyn_classifierParticleOrigin = 0;
   TruthTausAuxDyn_classifierParticleType = 0;
   TruthTausAuxDyn_classifierParticleOutCome = 0;
   TruthTausAuxDyn_pt_vis_dressed = 0;
   TruthTausAuxDyn_eta_vis_dressed = 0;
   TruthTausAuxDyn_phi_vis_dressed = 0;
   TruthTausAuxDyn_m_vis_dressed = 0;
   TruthTausAuxDyn_nPhotons_dressed = 0;
   TruthTausAuxDyn_dressedPhoton = 0;
   TruthTausAuxDyn_pt_vis = 0;
   TruthTausAuxDyn_eta_vis = 0;
   TruthTausAuxDyn_phi_vis = 0;
   TruthTausAuxDyn_m_vis = 0;
   TruthTausAuxDyn_numCharged = 0;
   TruthTausAuxDyn_numChargedPion = 0;
   TruthTausAuxDyn_numNeutral = 0;
   TruthTausAuxDyn_numNeutralPion = 0;
   TruthTausAuxDyn_IsHadronicTau = 0;
   TruthTausAuxDyn_pt_invis = 0;
   TruthTausAuxDyn_eta_invis = 0;
   TruthTausAuxDyn_phi_invis = 0;
   TruthTausAuxDyn_m_invis = 0;
   TruthTausAuxDyn_DecayModeVector = 0;
   TruthMuonsAuxDyn_parentLinks = 0;
   TruthMuonsAuxDyn_childLinks = 0;
   TruthMuonsAuxDyn_m = 0;
   TruthMuonsAuxDyn_px = 0;
   TruthMuonsAuxDyn_py = 0;
   TruthMuonsAuxDyn_pz = 0;
   TruthMuonsAuxDyn_e = 0;
   TruthMuonsAuxDyn_pdgId = 0;
   TruthMuonsAuxDyn_barcode = 0;
   TruthMuonsAuxDyn_status = 0;
   TruthMuonsAuxDyn_classifierParticleOrigin = 0;
   TruthMuonsAuxDyn_classifierParticleType = 0;
   TruthMuonsAuxDyn_classifierParticleOutCome = 0;
   TruthMuonsAuxDyn_e_dressed = 0;
   TruthMuonsAuxDyn_pt_dressed = 0;
   TruthMuonsAuxDyn_eta_dressed = 0;
   TruthMuonsAuxDyn_phi_dressed = 0;
   TruthMuonsAuxDyn_nPhotons_dressed = 0;
   TruthMuonsAuxDyn_etcone20 = 0;
   TruthMuonsAuxDyn_ptcone30 = 0;
   TruthForwardProtonsAuxDyn_m = 0;
   TruthForwardProtonsAuxDyn_px = 0;
   TruthForwardProtonsAuxDyn_py = 0;
   TruthForwardProtonsAuxDyn_pz = 0;
   TruthForwardProtonsAuxDyn_e = 0;
   TruthForwardProtonsAuxDyn_pdgId = 0;
   TruthForwardProtonsAuxDyn_barcode = 0;
   TruthForwardProtonsAuxDyn_status = 0;
   TruthForwardProtonsAuxDyn_classifierParticleOrigin = 0;
   TruthForwardProtonsAuxDyn_classifierParticleType = 0;
   TruthForwardProtonsAuxDyn_classifierParticleOutCome = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("McEventInfo", &McEventInfo, &b_McEventInfo);
   fChain->SetBranchAddress("EventInfoAux.runNumber", &EventInfoAux_runNumber, &b_EventInfoAux_runNumber);
   fChain->SetBranchAddress("EventInfoAux.eventNumber", &EventInfoAux_eventNumber, &b_EventInfoAux_eventNumber);
   fChain->SetBranchAddress("EventInfoAux.lumiBlock", &EventInfoAux_lumiBlock, &b_EventInfoAux_lumiBlock);
   fChain->SetBranchAddress("EventInfoAux.timeStamp", &EventInfoAux_timeStamp, &b_EventInfoAux_timeStamp);
   fChain->SetBranchAddress("EventInfoAux.timeStampNSOffset", &EventInfoAux_timeStampNSOffset, &b_EventInfoAux_timeStampNSOffset);
   fChain->SetBranchAddress("EventInfoAux.bcid", &EventInfoAux_bcid, &b_EventInfoAux_bcid);
   fChain->SetBranchAddress("EventInfoAux.detectorMask0", &EventInfoAux_detectorMask0, &b_EventInfoAux_detectorMask0);
   fChain->SetBranchAddress("EventInfoAux.detectorMask1", &EventInfoAux_detectorMask1, &b_EventInfoAux_detectorMask1);
   fChain->SetBranchAddress("EventInfoAux.detectorMask2", &EventInfoAux_detectorMask2, &b_EventInfoAux_detectorMask2);
   fChain->SetBranchAddress("EventInfoAux.detectorMask3", &EventInfoAux_detectorMask3, &b_EventInfoAux_detectorMask3);
   fChain->SetBranchAddress("EventInfoAux.eventTypeBitmask", &EventInfoAux_eventTypeBitmask, &b_EventInfoAux_eventTypeBitmask);
   fChain->SetBranchAddress("EventInfoAux.statusElement", &EventInfoAux_statusElement, &b_EventInfoAux_statusElement);
   fChain->SetBranchAddress("EventInfoAux.extendedLevel1ID", &EventInfoAux_extendedLevel1ID, &b_EventInfoAux_extendedLevel1ID);
   fChain->SetBranchAddress("EventInfoAux.level1TriggerType", &EventInfoAux_level1TriggerType, &b_EventInfoAux_level1TriggerType);
   fChain->SetBranchAddress("EventInfoAux.streamTagNames", &EventInfoAux_streamTagNames, &b_EventInfoAux_streamTagNames);
   fChain->SetBranchAddress("EventInfoAux.streamTagTypes", &EventInfoAux_streamTagTypes, &b_EventInfoAux_streamTagTypes);
   fChain->SetBranchAddress("EventInfoAux.streamTagObeysLumiblock", &EventInfoAux_streamTagObeysLumiblock, &b_EventInfoAux_streamTagObeysLumiblock);
   fChain->SetBranchAddress("EventInfoAux.actualInteractionsPerCrossing", &EventInfoAux_actualInteractionsPerCrossing, &b_EventInfoAux_actualInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfoAux.averageInteractionsPerCrossing", &EventInfoAux_averageInteractionsPerCrossing, &b_EventInfoAux_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfoAux.pixelFlags", &EventInfoAux_pixelFlags, &b_EventInfoAux_pixelFlags);
   fChain->SetBranchAddress("EventInfoAux.sctFlags", &EventInfoAux_sctFlags, &b_EventInfoAux_sctFlags);
   fChain->SetBranchAddress("EventInfoAux.trtFlags", &EventInfoAux_trtFlags, &b_EventInfoAux_trtFlags);
   fChain->SetBranchAddress("EventInfoAux.larFlags", &EventInfoAux_larFlags, &b_EventInfoAux_larFlags);
   fChain->SetBranchAddress("EventInfoAux.tileFlags", &EventInfoAux_tileFlags, &b_EventInfoAux_tileFlags);
   fChain->SetBranchAddress("EventInfoAux.muonFlags", &EventInfoAux_muonFlags, &b_EventInfoAux_muonFlags);
   fChain->SetBranchAddress("EventInfoAux.forwardDetFlags", &EventInfoAux_forwardDetFlags, &b_EventInfoAux_forwardDetFlags);
   fChain->SetBranchAddress("EventInfoAux.coreFlags", &EventInfoAux_coreFlags, &b_EventInfoAux_coreFlags);
   fChain->SetBranchAddress("EventInfoAux.backgroundFlags", &EventInfoAux_backgroundFlags, &b_EventInfoAux_backgroundFlags);
   fChain->SetBranchAddress("EventInfoAux.lumiFlags", &EventInfoAux_lumiFlags, &b_EventInfoAux_lumiFlags);
   fChain->SetBranchAddress("EventInfoAux.beamPosX", &EventInfoAux_beamPosX, &b_EventInfoAux_beamPosX);
   fChain->SetBranchAddress("EventInfoAux.beamPosY", &EventInfoAux_beamPosY, &b_EventInfoAux_beamPosY);
   fChain->SetBranchAddress("EventInfoAux.beamPosZ", &EventInfoAux_beamPosZ, &b_EventInfoAux_beamPosZ);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaX", &EventInfoAux_beamPosSigmaX, &b_EventInfoAux_beamPosSigmaX);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaY", &EventInfoAux_beamPosSigmaY, &b_EventInfoAux_beamPosSigmaY);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaZ", &EventInfoAux_beamPosSigmaZ, &b_EventInfoAux_beamPosSigmaZ);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaXY", &EventInfoAux_beamPosSigmaXY, &b_EventInfoAux_beamPosSigmaXY);
   fChain->SetBranchAddress("EventInfoAux.beamTiltXZ", &EventInfoAux_beamTiltXZ, &b_EventInfoAux_beamTiltXZ);
   fChain->SetBranchAddress("EventInfoAux.beamTiltYZ", &EventInfoAux_beamTiltYZ, &b_EventInfoAux_beamTiltYZ);
   fChain->SetBranchAddress("EventInfoAux.beamStatus", &EventInfoAux_beamStatus, &b_EventInfoAux_beamStatus);
   fChain->SetBranchAddress("EventInfo", &EventInfo, &b_EventInfo);
   fChain->SetBranchAddress("MET_Truth", &MET_Truth, &b_MET_Truth);
   fChain->SetBranchAddress("TruthEvents", &TruthEvents, &b_TruthEvents);
   fChain->SetBranchAddress("BornLeptonsAux.", &BornLeptonsAux_, &b_BornLeptonsAux_);
   fChain->SetBranchAddress("HardScatterParticlesAux.", &HardScatterParticlesAux_, &b_HardScatterParticlesAux_);
   fChain->SetBranchAddress("HardScatterVerticesAux.", &HardScatterVerticesAux_, &b_HardScatterVerticesAux_);
   fChain->SetBranchAddress("MET_TruthAux.", &MET_TruthAux_, &b_MET_TruthAux_);
   fChain->SetBranchAddress("TruthBSMAux.", &TruthBSMAux_, &b_TruthBSMAux_);
   fChain->SetBranchAddress("TruthBSMWithDecayParticlesAux.", &TruthBSMWithDecayParticlesAux_, &b_TruthBSMWithDecayParticlesAux_);
   fChain->SetBranchAddress("TruthBSMWithDecayVerticesAux.", &TruthBSMWithDecayVerticesAux_, &b_TruthBSMWithDecayVerticesAux_);
   fChain->SetBranchAddress("TruthBosonAux.", &TruthBosonAux_, &b_TruthBosonAux_);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAux.", &TruthBosonsWithDecayParticlesAux_, &b_TruthBosonsWithDecayParticlesAux_);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAux.", &TruthBosonsWithDecayVerticesAux_, &b_TruthBosonsWithDecayVerticesAux_);
   fChain->SetBranchAddress("TruthBottomAux.", &TruthBottomAux_, &b_TruthBottomAux_);
   fChain->SetBranchAddress("TruthElectronsAux.", &TruthElectronsAux_, &b_TruthElectronsAux_);
   fChain->SetBranchAddress("TruthEventsAux.", &TruthEventsAux_, &b_TruthEventsAux_);
   fChain->SetBranchAddress("TruthForwardProtonsAux.", &TruthForwardProtonsAux_, &b_TruthForwardProtonsAux_);
   fChain->SetBranchAddress("TruthMuonsAux.", &TruthMuonsAux_, &b_TruthMuonsAux_);
   fChain->SetBranchAddress("TruthNeutrinosAux.", &TruthNeutrinosAux_, &b_TruthNeutrinosAux_);
   fChain->SetBranchAddress("TruthPhotonsAux.", &TruthPhotonsAux_, &b_TruthPhotonsAux_);
   fChain->SetBranchAddress("TruthTausAux.", &TruthTausAux_, &b_TruthTausAux_);
   fChain->SetBranchAddress("TruthTopAux.", &TruthTopAux_, &b_TruthTopAux_);
   fChain->SetBranchAddress("BornLeptons", &BornLeptons, &b_BornLeptons);
   fChain->SetBranchAddress("HardScatterParticles", &HardScatterParticles, &b_HardScatterParticles);
   fChain->SetBranchAddress("TruthBSM", &TruthBSM, &b_TruthBSM);
   fChain->SetBranchAddress("TruthBSMWithDecayParticles", &TruthBSMWithDecayParticles, &b_TruthBSMWithDecayParticles);
   fChain->SetBranchAddress("TruthBoson", &TruthBoson, &b_TruthBoson);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticles", &TruthBosonsWithDecayParticles, &b_TruthBosonsWithDecayParticles);
   fChain->SetBranchAddress("TruthBottom", &TruthBottom, &b_TruthBottom);
   fChain->SetBranchAddress("TruthElectrons", &TruthElectrons, &b_TruthElectrons);
   fChain->SetBranchAddress("TruthForwardProtons", &TruthForwardProtons, &b_TruthForwardProtons);
   fChain->SetBranchAddress("TruthMuons", &TruthMuons, &b_TruthMuons);
   fChain->SetBranchAddress("TruthNeutrinos", &TruthNeutrinos, &b_TruthNeutrinos);
   fChain->SetBranchAddress("TruthPhotons", &TruthPhotons, &b_TruthPhotons);
   fChain->SetBranchAddress("TruthTaus", &TruthTaus, &b_TruthTaus);
   fChain->SetBranchAddress("TruthTop", &TruthTop, &b_TruthTop);
   fChain->SetBranchAddress("HardScatterVertices", &HardScatterVertices, &b_HardScatterVertices);
   fChain->SetBranchAddress("TruthBSMWithDecayVertices", &TruthBSMWithDecayVertices, &b_TruthBSMWithDecayVertices);
   fChain->SetBranchAddress("TruthBosonsWithDecayVertices", &TruthBosonsWithDecayVertices, &b_TruthBosonsWithDecayVertices);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20Jets", &AntiKt10TruthTrimmedPtFrac5SmallR20Jets, &b_AntiKt10TruthTrimmedPtFrac5SmallR20Jets);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJets", &AntiKt4TruthDressedWZJets, &b_AntiKt4TruthDressedWZJets);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.pt", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_pt);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.eta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_eta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.phi", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_phi);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.m", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_m);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux.constituentWeights", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentWeights, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAux.pt", &AntiKt4TruthDressedWZJetsAux_pt, &b_AntiKt4TruthDressedWZJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAux.eta", &AntiKt4TruthDressedWZJetsAux_eta, &b_AntiKt4TruthDressedWZJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAux.phi", &AntiKt4TruthDressedWZJetsAux_phi, &b_AntiKt4TruthDressedWZJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAux.m", &AntiKt4TruthDressedWZJetsAux_m, &b_AntiKt4TruthDressedWZJetsAux_m);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAux.constituentWeights", &AntiKt4TruthDressedWZJetsAux_constituentWeights, &b_AntiKt4TruthDressedWZJetsAux_constituentWeights);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau1_wta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau1_wta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau2_wta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau2_wta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.Tau3_wta", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_Tau3_wta);
   fChain->SetBranchAddress("AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn.D2", &AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2, &b_AntiKt10TruthTrimmedPtFrac5SmallR20JetsAuxDyn_D2);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.GhostBHadronsFinalCount", &AntiKt4TruthDressedWZJetsAuxDyn_GhostBHadronsFinalCount, &b_AntiKt4TruthDressedWZJetsAuxDyn_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.GhostCHadronsFinalCount", &AntiKt4TruthDressedWZJetsAuxDyn_GhostCHadronsFinalCount, &b_AntiKt4TruthDressedWZJetsAuxDyn_GhostCHadronsFinalCount);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.ConeTruthLabelID", &AntiKt4TruthDressedWZJetsAuxDyn_ConeTruthLabelID, &b_AntiKt4TruthDressedWZJetsAuxDyn_ConeTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.PartonTruthLabelID", &AntiKt4TruthDressedWZJetsAuxDyn_PartonTruthLabelID, &b_AntiKt4TruthDressedWZJetsAuxDyn_PartonTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.HadronConeExclTruthLabelID", &AntiKt4TruthDressedWZJetsAuxDyn_HadronConeExclTruthLabelID, &b_AntiKt4TruthDressedWZJetsAuxDyn_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthDressedWZJetsAuxDyn.TrueFlavor", &AntiKt4TruthDressedWZJetsAuxDyn_TrueFlavor, &b_AntiKt4TruthDressedWZJetsAuxDyn_TrueFlavor);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.prodVtxLink", &BornLeptonsAuxDyn_prodVtxLink_, &b_BornLeptonsAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.prodVtxLink.m_persKey", BornLeptonsAuxDyn_prodVtxLink_m_persKey, &b_BornLeptonsAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.prodVtxLink.m_persIndex", BornLeptonsAuxDyn_prodVtxLink_m_persIndex, &b_BornLeptonsAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.decayVtxLink", &BornLeptonsAuxDyn_decayVtxLink_, &b_BornLeptonsAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.decayVtxLink.m_persKey", BornLeptonsAuxDyn_decayVtxLink_m_persKey, &b_BornLeptonsAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.decayVtxLink.m_persIndex", BornLeptonsAuxDyn_decayVtxLink_m_persIndex, &b_BornLeptonsAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.m", &BornLeptonsAuxDyn_m, &b_BornLeptonsAuxDyn_m);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.px", &BornLeptonsAuxDyn_px, &b_BornLeptonsAuxDyn_px);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.py", &BornLeptonsAuxDyn_py, &b_BornLeptonsAuxDyn_py);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.pz", &BornLeptonsAuxDyn_pz, &b_BornLeptonsAuxDyn_pz);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.e", &BornLeptonsAuxDyn_e, &b_BornLeptonsAuxDyn_e);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.pdgId", &BornLeptonsAuxDyn_pdgId, &b_BornLeptonsAuxDyn_pdgId);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.barcode", &BornLeptonsAuxDyn_barcode, &b_BornLeptonsAuxDyn_barcode);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.status", &BornLeptonsAuxDyn_status, &b_BornLeptonsAuxDyn_status);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.classifierParticleOrigin", &BornLeptonsAuxDyn_classifierParticleOrigin, &b_BornLeptonsAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.classifierParticleType", &BornLeptonsAuxDyn_classifierParticleType, &b_BornLeptonsAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("BornLeptonsAuxDyn.classifierParticleOutCome", &BornLeptonsAuxDyn_classifierParticleOutCome, &b_BornLeptonsAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("EventInfoAuxDyn.streamTagRobs", &EventInfoAuxDyn_streamTagRobs, &b_EventInfoAuxDyn_streamTagRobs);
   fChain->SetBranchAddress("EventInfoAuxDyn.streamTagDets", &EventInfoAuxDyn_streamTagDets, &b_EventInfoAuxDyn_streamTagDets);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcChannelNumber", &EventInfoAuxDyn_mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltHT", &EventInfoAuxDyn_GenFiltHT, &b_GenFiltHT);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltMET", &EventInfoAuxDyn_GenFiltMET, &b_GenFiltMET);
   fChain->SetBranchAddress("EventInfoAuxDyn.GenFiltPTZ", &EventInfoAuxDyn_GenFiltPTZ, &b_GenFiltPTZ);
   fChain->SetBranchAddress("EventInfoAuxDyn.TruthIsoCentralEventShape_rho", &EventInfoAuxDyn_TruthIsoCentralEventShape_rho, &b_TruthIsoCentralEventShape_rho);
   fChain->SetBranchAddress("EventInfoAuxDyn.TruthIsoForwardEventShape_rho", &EventInfoAuxDyn_TruthIsoForwardEventShape_rho, &b_TruthIsoForwardEventShape_rho);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcEventNumber", &EventInfoAuxDyn_mcEventNumber, &b_mcEventNumber);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcEventWeights", &EventInfoAuxDyn_mcEventWeights, &b_EventInfoAuxDyn_mcEventWeights);
   fChain->SetBranchAddress("EventInfoAuxDyn.HTXS_prodMode", &EventInfoAuxDyn_HTXS_prodMode, &b_HTXS_prodMode);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.prodVtxLink", &HardScatterParticlesAuxDyn_prodVtxLink_, &b_HardScatterParticlesAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.prodVtxLink.m_persKey", HardScatterParticlesAuxDyn_prodVtxLink_m_persKey, &b_HardScatterParticlesAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.prodVtxLink.m_persIndex", HardScatterParticlesAuxDyn_prodVtxLink_m_persIndex, &b_HardScatterParticlesAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.decayVtxLink", &HardScatterParticlesAuxDyn_decayVtxLink_, &b_HardScatterParticlesAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.decayVtxLink.m_persKey", HardScatterParticlesAuxDyn_decayVtxLink_m_persKey, &b_HardScatterParticlesAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.decayVtxLink.m_persIndex", HardScatterParticlesAuxDyn_decayVtxLink_m_persIndex, &b_HardScatterParticlesAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.m", &HardScatterParticlesAuxDyn_m, &b_HardScatterParticlesAuxDyn_m);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.px", &HardScatterParticlesAuxDyn_px, &b_HardScatterParticlesAuxDyn_px);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.py", &HardScatterParticlesAuxDyn_py, &b_HardScatterParticlesAuxDyn_py);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.pz", &HardScatterParticlesAuxDyn_pz, &b_HardScatterParticlesAuxDyn_pz);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.e", &HardScatterParticlesAuxDyn_e, &b_HardScatterParticlesAuxDyn_e);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.pdgId", &HardScatterParticlesAuxDyn_pdgId, &b_HardScatterParticlesAuxDyn_pdgId);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.barcode", &HardScatterParticlesAuxDyn_barcode, &b_HardScatterParticlesAuxDyn_barcode);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.status", &HardScatterParticlesAuxDyn_status, &b_HardScatterParticlesAuxDyn_status);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.classifierParticleOrigin", &HardScatterParticlesAuxDyn_classifierParticleOrigin, &b_HardScatterParticlesAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.classifierParticleType", &HardScatterParticlesAuxDyn_classifierParticleType, &b_HardScatterParticlesAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("HardScatterParticlesAuxDyn.classifierParticleOutCome", &HardScatterParticlesAuxDyn_classifierParticleOutCome, &b_HardScatterParticlesAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.incomingParticleLinks", &HardScatterVerticesAuxDyn_incomingParticleLinks, &b_HardScatterVerticesAuxDyn_incomingParticleLinks);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.outgoingParticleLinks", &HardScatterVerticesAuxDyn_outgoingParticleLinks, &b_HardScatterVerticesAuxDyn_outgoingParticleLinks);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.barcode", &HardScatterVerticesAuxDyn_barcode, &b_HardScatterVerticesAuxDyn_barcode);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.id", &HardScatterVerticesAuxDyn_id, &b_HardScatterVerticesAuxDyn_id);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.x", &HardScatterVerticesAuxDyn_x, &b_HardScatterVerticesAuxDyn_x);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.y", &HardScatterVerticesAuxDyn_y, &b_HardScatterVerticesAuxDyn_y);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.z", &HardScatterVerticesAuxDyn_z, &b_HardScatterVerticesAuxDyn_z);
   fChain->SetBranchAddress("HardScatterVerticesAuxDyn.t", &HardScatterVerticesAuxDyn_t, &b_HardScatterVerticesAuxDyn_t);
   fChain->SetBranchAddress("MET_TruthAuxDyn.name", &MET_TruthAuxDyn_name, &b_MET_TruthAuxDyn_name);
   fChain->SetBranchAddress("MET_TruthAuxDyn.mpx", &MET_TruthAuxDyn_mpx, &b_MET_TruthAuxDyn_mpx);
   fChain->SetBranchAddress("MET_TruthAuxDyn.mpy", &MET_TruthAuxDyn_mpy, &b_MET_TruthAuxDyn_mpy);
   fChain->SetBranchAddress("MET_TruthAuxDyn.sumet", &MET_TruthAuxDyn_sumet, &b_MET_TruthAuxDyn_sumet);
   fChain->SetBranchAddress("MET_TruthAuxDyn.source", &MET_TruthAuxDyn_source, &b_MET_TruthAuxDyn_source);
   fChain->SetBranchAddress("TruthBosonAuxDyn.prodVtxLink", &TruthBosonAuxDyn_prodVtxLink_, &b_TruthBosonAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthBosonAuxDyn.prodVtxLink.m_persKey", TruthBosonAuxDyn_prodVtxLink_m_persKey, &b_TruthBosonAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBosonAuxDyn.prodVtxLink.m_persIndex", TruthBosonAuxDyn_prodVtxLink_m_persIndex, &b_TruthBosonAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBosonAuxDyn.decayVtxLink", &TruthBosonAuxDyn_decayVtxLink_, &b_TruthBosonAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthBosonAuxDyn.decayVtxLink.m_persKey", TruthBosonAuxDyn_decayVtxLink_m_persKey, &b_TruthBosonAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBosonAuxDyn.decayVtxLink.m_persIndex", TruthBosonAuxDyn_decayVtxLink_m_persIndex, &b_TruthBosonAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBosonAuxDyn.parentLinks", &TruthBosonAuxDyn_parentLinks, &b_TruthBosonAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthBosonAuxDyn.childLinks", &TruthBosonAuxDyn_childLinks, &b_TruthBosonAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthBosonAuxDyn.m", &TruthBosonAuxDyn_m, &b_TruthBosonAuxDyn_m);
   fChain->SetBranchAddress("TruthBosonAuxDyn.px", &TruthBosonAuxDyn_px, &b_TruthBosonAuxDyn_px);
   fChain->SetBranchAddress("TruthBosonAuxDyn.py", &TruthBosonAuxDyn_py, &b_TruthBosonAuxDyn_py);
   fChain->SetBranchAddress("TruthBosonAuxDyn.pz", &TruthBosonAuxDyn_pz, &b_TruthBosonAuxDyn_pz);
   fChain->SetBranchAddress("TruthBosonAuxDyn.e", &TruthBosonAuxDyn_e, &b_TruthBosonAuxDyn_e);
   fChain->SetBranchAddress("TruthBosonAuxDyn.pdgId", &TruthBosonAuxDyn_pdgId, &b_TruthBosonAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthBosonAuxDyn.barcode", &TruthBosonAuxDyn_barcode, &b_TruthBosonAuxDyn_barcode);
   fChain->SetBranchAddress("TruthBosonAuxDyn.status", &TruthBosonAuxDyn_status, &b_TruthBosonAuxDyn_status);
   fChain->SetBranchAddress("TruthBosonAuxDyn.classifierParticleOrigin", &TruthBosonAuxDyn_classifierParticleOrigin, &b_TruthBosonAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthBosonAuxDyn.classifierParticleType", &TruthBosonAuxDyn_classifierParticleType, &b_TruthBosonAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthBosonAuxDyn.classifierParticleOutCome", &TruthBosonAuxDyn_classifierParticleOutCome, &b_TruthBosonAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.prodVtxLink", &TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_, &b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.prodVtxLink.m_persKey", TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persKey, &b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.prodVtxLink.m_persIndex", TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex, &b_TruthBosonsWithDecayParticlesAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.decayVtxLink", &TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_, &b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.decayVtxLink.m_persKey", TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persKey, &b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.decayVtxLink.m_persIndex", TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex, &b_TruthBosonsWithDecayParticlesAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.m", &TruthBosonsWithDecayParticlesAuxDyn_m, &b_TruthBosonsWithDecayParticlesAuxDyn_m);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.px", &TruthBosonsWithDecayParticlesAuxDyn_px, &b_TruthBosonsWithDecayParticlesAuxDyn_px);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.py", &TruthBosonsWithDecayParticlesAuxDyn_py, &b_TruthBosonsWithDecayParticlesAuxDyn_py);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.pz", &TruthBosonsWithDecayParticlesAuxDyn_pz, &b_TruthBosonsWithDecayParticlesAuxDyn_pz);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.e", &TruthBosonsWithDecayParticlesAuxDyn_e, &b_TruthBosonsWithDecayParticlesAuxDyn_e);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.pdgId", &TruthBosonsWithDecayParticlesAuxDyn_pdgId, &b_TruthBosonsWithDecayParticlesAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.barcode", &TruthBosonsWithDecayParticlesAuxDyn_barcode, &b_TruthBosonsWithDecayParticlesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.status", &TruthBosonsWithDecayParticlesAuxDyn_status, &b_TruthBosonsWithDecayParticlesAuxDyn_status);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.classifierParticleOrigin", &TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOrigin, &b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.classifierParticleType", &TruthBosonsWithDecayParticlesAuxDyn_classifierParticleType, &b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthBosonsWithDecayParticlesAuxDyn.classifierParticleOutCome", &TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOutCome, &b_TruthBosonsWithDecayParticlesAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.incomingParticleLinks", &TruthBosonsWithDecayVerticesAuxDyn_incomingParticleLinks, &b_TruthBosonsWithDecayVerticesAuxDyn_incomingParticleLinks);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.outgoingParticleLinks", &TruthBosonsWithDecayVerticesAuxDyn_outgoingParticleLinks, &b_TruthBosonsWithDecayVerticesAuxDyn_outgoingParticleLinks);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.barcode", &TruthBosonsWithDecayVerticesAuxDyn_barcode, &b_TruthBosonsWithDecayVerticesAuxDyn_barcode);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.id", &TruthBosonsWithDecayVerticesAuxDyn_id, &b_TruthBosonsWithDecayVerticesAuxDyn_id);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.x", &TruthBosonsWithDecayVerticesAuxDyn_x, &b_TruthBosonsWithDecayVerticesAuxDyn_x);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.y", &TruthBosonsWithDecayVerticesAuxDyn_y, &b_TruthBosonsWithDecayVerticesAuxDyn_y);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.z", &TruthBosonsWithDecayVerticesAuxDyn_z, &b_TruthBosonsWithDecayVerticesAuxDyn_z);
   fChain->SetBranchAddress("TruthBosonsWithDecayVerticesAuxDyn.t", &TruthBosonsWithDecayVerticesAuxDyn_t, &b_TruthBosonsWithDecayVerticesAuxDyn_t);
   fChain->SetBranchAddress("TruthBottomAuxDyn.prodVtxLink", &TruthBottomAuxDyn_prodVtxLink_, &b_TruthBottomAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthBottomAuxDyn.prodVtxLink.m_persKey", TruthBottomAuxDyn_prodVtxLink_m_persKey, &b_TruthBottomAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBottomAuxDyn.prodVtxLink.m_persIndex", TruthBottomAuxDyn_prodVtxLink_m_persIndex, &b_TruthBottomAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBottomAuxDyn.decayVtxLink", &TruthBottomAuxDyn_decayVtxLink_, &b_TruthBottomAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthBottomAuxDyn.decayVtxLink.m_persKey", TruthBottomAuxDyn_decayVtxLink_m_persKey, &b_TruthBottomAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthBottomAuxDyn.decayVtxLink.m_persIndex", TruthBottomAuxDyn_decayVtxLink_m_persIndex, &b_TruthBottomAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthBottomAuxDyn.parentLinks", &TruthBottomAuxDyn_parentLinks, &b_TruthBottomAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthBottomAuxDyn.childLinks", &TruthBottomAuxDyn_childLinks, &b_TruthBottomAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthBottomAuxDyn.m", &TruthBottomAuxDyn_m, &b_TruthBottomAuxDyn_m);
   fChain->SetBranchAddress("TruthBottomAuxDyn.px", &TruthBottomAuxDyn_px, &b_TruthBottomAuxDyn_px);
   fChain->SetBranchAddress("TruthBottomAuxDyn.py", &TruthBottomAuxDyn_py, &b_TruthBottomAuxDyn_py);
   fChain->SetBranchAddress("TruthBottomAuxDyn.pz", &TruthBottomAuxDyn_pz, &b_TruthBottomAuxDyn_pz);
   fChain->SetBranchAddress("TruthBottomAuxDyn.e", &TruthBottomAuxDyn_e, &b_TruthBottomAuxDyn_e);
   fChain->SetBranchAddress("TruthBottomAuxDyn.pdgId", &TruthBottomAuxDyn_pdgId, &b_TruthBottomAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthBottomAuxDyn.barcode", &TruthBottomAuxDyn_barcode, &b_TruthBottomAuxDyn_barcode);
   fChain->SetBranchAddress("TruthBottomAuxDyn.status", &TruthBottomAuxDyn_status, &b_TruthBottomAuxDyn_status);
   fChain->SetBranchAddress("TruthBottomAuxDyn.classifierParticleOrigin", &TruthBottomAuxDyn_classifierParticleOrigin, &b_TruthBottomAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthBottomAuxDyn.classifierParticleType", &TruthBottomAuxDyn_classifierParticleType, &b_TruthBottomAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthBottomAuxDyn.classifierParticleOutCome", &TruthBottomAuxDyn_classifierParticleOutCome, &b_TruthBottomAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.prodVtxLink", &TruthElectronsAuxDyn_prodVtxLink_, &b_TruthElectronsAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.prodVtxLink.m_persKey", TruthElectronsAuxDyn_prodVtxLink_m_persKey, &b_TruthElectronsAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.prodVtxLink.m_persIndex", TruthElectronsAuxDyn_prodVtxLink_m_persIndex, &b_TruthElectronsAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.decayVtxLink", &TruthElectronsAuxDyn_decayVtxLink_, &b_TruthElectronsAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.decayVtxLink.m_persKey", TruthElectronsAuxDyn_decayVtxLink_m_persKey, &b_TruthElectronsAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.decayVtxLink.m_persIndex", TruthElectronsAuxDyn_decayVtxLink_m_persIndex, &b_TruthElectronsAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.parentLinks", &TruthElectronsAuxDyn_parentLinks, &b_TruthElectronsAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.childLinks", &TruthElectronsAuxDyn_childLinks, &b_TruthElectronsAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.m", &TruthElectronsAuxDyn_m, &b_TruthElectronsAuxDyn_m);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.px", &TruthElectronsAuxDyn_px, &b_TruthElectronsAuxDyn_px);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.py", &TruthElectronsAuxDyn_py, &b_TruthElectronsAuxDyn_py);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.pz", &TruthElectronsAuxDyn_pz, &b_TruthElectronsAuxDyn_pz);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.e", &TruthElectronsAuxDyn_e, &b_TruthElectronsAuxDyn_e);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.pdgId", &TruthElectronsAuxDyn_pdgId, &b_TruthElectronsAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.barcode", &TruthElectronsAuxDyn_barcode, &b_TruthElectronsAuxDyn_barcode);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.status", &TruthElectronsAuxDyn_status, &b_TruthElectronsAuxDyn_status);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.classifierParticleOrigin", &TruthElectronsAuxDyn_classifierParticleOrigin, &b_TruthElectronsAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.classifierParticleType", &TruthElectronsAuxDyn_classifierParticleType, &b_TruthElectronsAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.classifierParticleOutCome", &TruthElectronsAuxDyn_classifierParticleOutCome, &b_TruthElectronsAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.e_dressed", &TruthElectronsAuxDyn_e_dressed, &b_TruthElectronsAuxDyn_e_dressed);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.pt_dressed", &TruthElectronsAuxDyn_pt_dressed, &b_TruthElectronsAuxDyn_pt_dressed);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.eta_dressed", &TruthElectronsAuxDyn_eta_dressed, &b_TruthElectronsAuxDyn_eta_dressed);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.phi_dressed", &TruthElectronsAuxDyn_phi_dressed, &b_TruthElectronsAuxDyn_phi_dressed);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.nPhotons_dressed", &TruthElectronsAuxDyn_nPhotons_dressed, &b_TruthElectronsAuxDyn_nPhotons_dressed);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.etcone20", &TruthElectronsAuxDyn_etcone20, &b_TruthElectronsAuxDyn_etcone20);
   fChain->SetBranchAddress("TruthElectronsAuxDyn.ptcone30", &TruthElectronsAuxDyn_ptcone30, &b_TruthElectronsAuxDyn_ptcone30);
   fChain->SetBranchAddress("TruthEventsAuxDyn.crossSection", &TruthEventsAuxDyn_crossSection, &b_TruthEventsAuxDyn_crossSection);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDGID1", &TruthEventsAuxDyn_PDGID1, &b_TruthEventsAuxDyn_PDGID1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDGID2", &TruthEventsAuxDyn_PDGID2, &b_TruthEventsAuxDyn_PDGID2);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDFID1", &TruthEventsAuxDyn_PDFID1, &b_TruthEventsAuxDyn_PDFID1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.PDFID2", &TruthEventsAuxDyn_PDFID2, &b_TruthEventsAuxDyn_PDFID2);
   fChain->SetBranchAddress("TruthEventsAuxDyn.X1", &TruthEventsAuxDyn_X1, &b_TruthEventsAuxDyn_X1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.X2", &TruthEventsAuxDyn_X2, &b_TruthEventsAuxDyn_X2);
   fChain->SetBranchAddress("TruthEventsAuxDyn.Q", &TruthEventsAuxDyn_Q, &b_TruthEventsAuxDyn_Q);
   fChain->SetBranchAddress("TruthEventsAuxDyn.XF1", &TruthEventsAuxDyn_XF1, &b_TruthEventsAuxDyn_XF1);
   fChain->SetBranchAddress("TruthEventsAuxDyn.XF2", &TruthEventsAuxDyn_XF2, &b_TruthEventsAuxDyn_XF2);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.prodVtxLink", &TruthNeutrinosAuxDyn_prodVtxLink_, &b_TruthNeutrinosAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.prodVtxLink.m_persKey", TruthNeutrinosAuxDyn_prodVtxLink_m_persKey, &b_TruthNeutrinosAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.prodVtxLink.m_persIndex", TruthNeutrinosAuxDyn_prodVtxLink_m_persIndex, &b_TruthNeutrinosAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.decayVtxLink", &TruthNeutrinosAuxDyn_decayVtxLink_, &b_TruthNeutrinosAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.decayVtxLink.m_persKey", TruthNeutrinosAuxDyn_decayVtxLink_m_persKey, &b_TruthNeutrinosAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.decayVtxLink.m_persIndex", TruthNeutrinosAuxDyn_decayVtxLink_m_persIndex, &b_TruthNeutrinosAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.parentLinks", &TruthNeutrinosAuxDyn_parentLinks, &b_TruthNeutrinosAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.childLinks", &TruthNeutrinosAuxDyn_childLinks, &b_TruthNeutrinosAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.m", &TruthNeutrinosAuxDyn_m, &b_TruthNeutrinosAuxDyn_m);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.px", &TruthNeutrinosAuxDyn_px, &b_TruthNeutrinosAuxDyn_px);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.py", &TruthNeutrinosAuxDyn_py, &b_TruthNeutrinosAuxDyn_py);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.pz", &TruthNeutrinosAuxDyn_pz, &b_TruthNeutrinosAuxDyn_pz);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.e", &TruthNeutrinosAuxDyn_e, &b_TruthNeutrinosAuxDyn_e);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.pdgId", &TruthNeutrinosAuxDyn_pdgId, &b_TruthNeutrinosAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.barcode", &TruthNeutrinosAuxDyn_barcode, &b_TruthNeutrinosAuxDyn_barcode);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.status", &TruthNeutrinosAuxDyn_status, &b_TruthNeutrinosAuxDyn_status);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.classifierParticleOrigin", &TruthNeutrinosAuxDyn_classifierParticleOrigin, &b_TruthNeutrinosAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.classifierParticleType", &TruthNeutrinosAuxDyn_classifierParticleType, &b_TruthNeutrinosAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthNeutrinosAuxDyn.classifierParticleOutCome", &TruthNeutrinosAuxDyn_classifierParticleOutCome, &b_TruthNeutrinosAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.prodVtxLink", &TruthPhotonsAuxDyn_prodVtxLink_, &b_TruthPhotonsAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.prodVtxLink.m_persKey", TruthPhotonsAuxDyn_prodVtxLink_m_persKey, &b_TruthPhotonsAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.prodVtxLink.m_persIndex", TruthPhotonsAuxDyn_prodVtxLink_m_persIndex, &b_TruthPhotonsAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.decayVtxLink", &TruthPhotonsAuxDyn_decayVtxLink_, &b_TruthPhotonsAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.decayVtxLink.m_persKey", TruthPhotonsAuxDyn_decayVtxLink_m_persKey, &b_TruthPhotonsAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.decayVtxLink.m_persIndex", TruthPhotonsAuxDyn_decayVtxLink_m_persIndex, &b_TruthPhotonsAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.parentLinks", &TruthPhotonsAuxDyn_parentLinks, &b_TruthPhotonsAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.childLinks", &TruthPhotonsAuxDyn_childLinks, &b_TruthPhotonsAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.m", &TruthPhotonsAuxDyn_m, &b_TruthPhotonsAuxDyn_m);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.px", &TruthPhotonsAuxDyn_px, &b_TruthPhotonsAuxDyn_px);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.py", &TruthPhotonsAuxDyn_py, &b_TruthPhotonsAuxDyn_py);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.pz", &TruthPhotonsAuxDyn_pz, &b_TruthPhotonsAuxDyn_pz);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.e", &TruthPhotonsAuxDyn_e, &b_TruthPhotonsAuxDyn_e);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.pdgId", &TruthPhotonsAuxDyn_pdgId, &b_TruthPhotonsAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.barcode", &TruthPhotonsAuxDyn_barcode, &b_TruthPhotonsAuxDyn_barcode);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.status", &TruthPhotonsAuxDyn_status, &b_TruthPhotonsAuxDyn_status);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.classifierParticleOrigin", &TruthPhotonsAuxDyn_classifierParticleOrigin, &b_TruthPhotonsAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.classifierParticleType", &TruthPhotonsAuxDyn_classifierParticleType, &b_TruthPhotonsAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.classifierParticleOutCome", &TruthPhotonsAuxDyn_classifierParticleOutCome, &b_TruthPhotonsAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.etcone20", &TruthPhotonsAuxDyn_etcone20, &b_TruthPhotonsAuxDyn_etcone20);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.ptcone20", &TruthPhotonsAuxDyn_ptcone20, &b_TruthPhotonsAuxDyn_ptcone20);
   fChain->SetBranchAddress("TruthPhotonsAuxDyn.etcone40", &TruthPhotonsAuxDyn_etcone40, &b_TruthPhotonsAuxDyn_etcone40);
   fChain->SetBranchAddress("TruthTausAuxDyn.prodVtxLink", &TruthTausAuxDyn_prodVtxLink_, &b_TruthTausAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthTausAuxDyn.prodVtxLink.m_persKey", TruthTausAuxDyn_prodVtxLink_m_persKey, &b_TruthTausAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthTausAuxDyn.prodVtxLink.m_persIndex", TruthTausAuxDyn_prodVtxLink_m_persIndex, &b_TruthTausAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthTausAuxDyn.decayVtxLink", &TruthTausAuxDyn_decayVtxLink_, &b_TruthTausAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthTausAuxDyn.decayVtxLink.m_persKey", TruthTausAuxDyn_decayVtxLink_m_persKey, &b_TruthTausAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthTausAuxDyn.decayVtxLink.m_persIndex", TruthTausAuxDyn_decayVtxLink_m_persIndex, &b_TruthTausAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthTausAuxDyn.parentLinks", &TruthTausAuxDyn_parentLinks, &b_TruthTausAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthTausAuxDyn.childLinks", &TruthTausAuxDyn_childLinks, &b_TruthTausAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthTausAuxDyn.m", &TruthTausAuxDyn_m, &b_TruthTausAuxDyn_m);
   fChain->SetBranchAddress("TruthTausAuxDyn.px", &TruthTausAuxDyn_px, &b_TruthTausAuxDyn_px);
   fChain->SetBranchAddress("TruthTausAuxDyn.py", &TruthTausAuxDyn_py, &b_TruthTausAuxDyn_py);
   fChain->SetBranchAddress("TruthTausAuxDyn.pz", &TruthTausAuxDyn_pz, &b_TruthTausAuxDyn_pz);
   fChain->SetBranchAddress("TruthTausAuxDyn.e", &TruthTausAuxDyn_e, &b_TruthTausAuxDyn_e);
   fChain->SetBranchAddress("TruthTausAuxDyn.pdgId", &TruthTausAuxDyn_pdgId, &b_TruthTausAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthTausAuxDyn.barcode", &TruthTausAuxDyn_barcode, &b_TruthTausAuxDyn_barcode);
   fChain->SetBranchAddress("TruthTausAuxDyn.status", &TruthTausAuxDyn_status, &b_TruthTausAuxDyn_status);
   fChain->SetBranchAddress("TruthTausAuxDyn.polarizationTheta", &TruthTausAuxDyn_polarizationTheta, &b_TruthTausAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("TruthTausAuxDyn.polarizationPhi", &TruthTausAuxDyn_polarizationPhi, &b_TruthTausAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthTausAuxDyn.originalTruthParticle", &TruthTausAuxDyn_originalTruthParticle_, &b_TruthTausAuxDyn_originalTruthParticle_);
   fChain->SetBranchAddress("TruthTausAuxDyn.originalTruthParticle.m_persKey", TruthTausAuxDyn_originalTruthParticle_m_persKey, &b_TruthTausAuxDyn_originalTruthParticle_m_persKey);
   fChain->SetBranchAddress("TruthTausAuxDyn.originalTruthParticle.m_persIndex", TruthTausAuxDyn_originalTruthParticle_m_persIndex, &b_TruthTausAuxDyn_originalTruthParticle_m_persIndex);
   fChain->SetBranchAddress("TruthTausAuxDyn.classifierParticleOrigin", &TruthTausAuxDyn_classifierParticleOrigin, &b_TruthTausAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthTausAuxDyn.classifierParticleType", &TruthTausAuxDyn_classifierParticleType, &b_TruthTausAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthTausAuxDyn.classifierParticleOutCome", &TruthTausAuxDyn_classifierParticleOutCome, &b_TruthTausAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthTausAuxDyn.pt_vis_dressed", &TruthTausAuxDyn_pt_vis_dressed, &b_TruthTausAuxDyn_pt_vis_dressed);
   fChain->SetBranchAddress("TruthTausAuxDyn.eta_vis_dressed", &TruthTausAuxDyn_eta_vis_dressed, &b_TruthTausAuxDyn_eta_vis_dressed);
   fChain->SetBranchAddress("TruthTausAuxDyn.phi_vis_dressed", &TruthTausAuxDyn_phi_vis_dressed, &b_TruthTausAuxDyn_phi_vis_dressed);
   fChain->SetBranchAddress("TruthTausAuxDyn.m_vis_dressed", &TruthTausAuxDyn_m_vis_dressed, &b_TruthTausAuxDyn_m_vis_dressed);
   fChain->SetBranchAddress("TruthTausAuxDyn.nPhotons_dressed", &TruthTausAuxDyn_nPhotons_dressed, &b_TruthTausAuxDyn_nPhotons_dressed);
   fChain->SetBranchAddress("TruthTausAuxDyn.dressedPhoton", &TruthTausAuxDyn_dressedPhoton, &b_TruthTausAuxDyn_dressedPhoton);
   fChain->SetBranchAddress("TruthTausAuxDyn.pt_vis", &TruthTausAuxDyn_pt_vis, &b_TruthTausAuxDyn_pt_vis);
   fChain->SetBranchAddress("TruthTausAuxDyn.eta_vis", &TruthTausAuxDyn_eta_vis, &b_TruthTausAuxDyn_eta_vis);
   fChain->SetBranchAddress("TruthTausAuxDyn.phi_vis", &TruthTausAuxDyn_phi_vis, &b_TruthTausAuxDyn_phi_vis);
   fChain->SetBranchAddress("TruthTausAuxDyn.m_vis", &TruthTausAuxDyn_m_vis, &b_TruthTausAuxDyn_m_vis);
   fChain->SetBranchAddress("TruthTausAuxDyn.numCharged", &TruthTausAuxDyn_numCharged, &b_TruthTausAuxDyn_numCharged);
   fChain->SetBranchAddress("TruthTausAuxDyn.numChargedPion", &TruthTausAuxDyn_numChargedPion, &b_TruthTausAuxDyn_numChargedPion);
   fChain->SetBranchAddress("TruthTausAuxDyn.numNeutral", &TruthTausAuxDyn_numNeutral, &b_TruthTausAuxDyn_numNeutral);
   fChain->SetBranchAddress("TruthTausAuxDyn.numNeutralPion", &TruthTausAuxDyn_numNeutralPion, &b_TruthTausAuxDyn_numNeutralPion);
   fChain->SetBranchAddress("TruthTausAuxDyn.IsHadronicTau", &TruthTausAuxDyn_IsHadronicTau, &b_TruthTausAuxDyn_IsHadronicTau);
   fChain->SetBranchAddress("TruthTausAuxDyn.pt_invis", &TruthTausAuxDyn_pt_invis, &b_TruthTausAuxDyn_pt_invis);
   fChain->SetBranchAddress("TruthTausAuxDyn.eta_invis", &TruthTausAuxDyn_eta_invis, &b_TruthTausAuxDyn_eta_invis);
   fChain->SetBranchAddress("TruthTausAuxDyn.phi_invis", &TruthTausAuxDyn_phi_invis, &b_TruthTausAuxDyn_phi_invis);
   fChain->SetBranchAddress("TruthTausAuxDyn.m_invis", &TruthTausAuxDyn_m_invis, &b_TruthTausAuxDyn_m_invis);
   fChain->SetBranchAddress("TruthTausAuxDyn.DecayModeVector", &TruthTausAuxDyn_DecayModeVector, &b_TruthTausAuxDyn_DecayModeVector);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.prodVtxLink", &TruthMuonsAuxDyn_prodVtxLink_, &b_TruthMuonsAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.prodVtxLink.m_persKey", TruthMuonsAuxDyn_prodVtxLink_m_persKey, &b_TruthMuonsAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.prodVtxLink.m_persIndex", TruthMuonsAuxDyn_prodVtxLink_m_persIndex, &b_TruthMuonsAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.decayVtxLink", &TruthMuonsAuxDyn_decayVtxLink_, &b_TruthMuonsAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.decayVtxLink.m_persKey", TruthMuonsAuxDyn_decayVtxLink_m_persKey, &b_TruthMuonsAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.decayVtxLink.m_persIndex", TruthMuonsAuxDyn_decayVtxLink_m_persIndex, &b_TruthMuonsAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.parentLinks", &TruthMuonsAuxDyn_parentLinks, &b_TruthMuonsAuxDyn_parentLinks);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.childLinks", &TruthMuonsAuxDyn_childLinks, &b_TruthMuonsAuxDyn_childLinks);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.m", &TruthMuonsAuxDyn_m, &b_TruthMuonsAuxDyn_m);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.px", &TruthMuonsAuxDyn_px, &b_TruthMuonsAuxDyn_px);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.py", &TruthMuonsAuxDyn_py, &b_TruthMuonsAuxDyn_py);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.pz", &TruthMuonsAuxDyn_pz, &b_TruthMuonsAuxDyn_pz);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.e", &TruthMuonsAuxDyn_e, &b_TruthMuonsAuxDyn_e);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.pdgId", &TruthMuonsAuxDyn_pdgId, &b_TruthMuonsAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.barcode", &TruthMuonsAuxDyn_barcode, &b_TruthMuonsAuxDyn_barcode);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.status", &TruthMuonsAuxDyn_status, &b_TruthMuonsAuxDyn_status);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.classifierParticleOrigin", &TruthMuonsAuxDyn_classifierParticleOrigin, &b_TruthMuonsAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.classifierParticleType", &TruthMuonsAuxDyn_classifierParticleType, &b_TruthMuonsAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.classifierParticleOutCome", &TruthMuonsAuxDyn_classifierParticleOutCome, &b_TruthMuonsAuxDyn_classifierParticleOutCome);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.e_dressed", &TruthMuonsAuxDyn_e_dressed, &b_TruthMuonsAuxDyn_e_dressed);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.pt_dressed", &TruthMuonsAuxDyn_pt_dressed, &b_TruthMuonsAuxDyn_pt_dressed);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.eta_dressed", &TruthMuonsAuxDyn_eta_dressed, &b_TruthMuonsAuxDyn_eta_dressed);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.phi_dressed", &TruthMuonsAuxDyn_phi_dressed, &b_TruthMuonsAuxDyn_phi_dressed);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.nPhotons_dressed", &TruthMuonsAuxDyn_nPhotons_dressed, &b_TruthMuonsAuxDyn_nPhotons_dressed);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.etcone20", &TruthMuonsAuxDyn_etcone20, &b_TruthMuonsAuxDyn_etcone20);
   fChain->SetBranchAddress("TruthMuonsAuxDyn.ptcone30", &TruthMuonsAuxDyn_ptcone30, &b_TruthMuonsAuxDyn_ptcone30);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.prodVtxLink", &TruthForwardProtonsAuxDyn_prodVtxLink_, &b_TruthForwardProtonsAuxDyn_prodVtxLink_);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.prodVtxLink.m_persKey", TruthForwardProtonsAuxDyn_prodVtxLink_m_persKey, &b_TruthForwardProtonsAuxDyn_prodVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.prodVtxLink.m_persIndex", TruthForwardProtonsAuxDyn_prodVtxLink_m_persIndex, &b_TruthForwardProtonsAuxDyn_prodVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.decayVtxLink", &TruthForwardProtonsAuxDyn_decayVtxLink_, &b_TruthForwardProtonsAuxDyn_decayVtxLink_);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.decayVtxLink.m_persKey", TruthForwardProtonsAuxDyn_decayVtxLink_m_persKey, &b_TruthForwardProtonsAuxDyn_decayVtxLink_m_persKey);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.decayVtxLink.m_persIndex", TruthForwardProtonsAuxDyn_decayVtxLink_m_persIndex, &b_TruthForwardProtonsAuxDyn_decayVtxLink_m_persIndex);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.m", &TruthForwardProtonsAuxDyn_m, &b_TruthForwardProtonsAuxDyn_m);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.px", &TruthForwardProtonsAuxDyn_px, &b_TruthForwardProtonsAuxDyn_px);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.py", &TruthForwardProtonsAuxDyn_py, &b_TruthForwardProtonsAuxDyn_py);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.pz", &TruthForwardProtonsAuxDyn_pz, &b_TruthForwardProtonsAuxDyn_pz);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.e", &TruthForwardProtonsAuxDyn_e, &b_TruthForwardProtonsAuxDyn_e);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.pdgId", &TruthForwardProtonsAuxDyn_pdgId, &b_TruthForwardProtonsAuxDyn_pdgId);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.barcode", &TruthForwardProtonsAuxDyn_barcode, &b_TruthForwardProtonsAuxDyn_barcode);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.status", &TruthForwardProtonsAuxDyn_status, &b_TruthForwardProtonsAuxDyn_status);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.classifierParticleOrigin", &TruthForwardProtonsAuxDyn_classifierParticleOrigin, &b_TruthForwardProtonsAuxDyn_classifierParticleOrigin);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.classifierParticleType", &TruthForwardProtonsAuxDyn_classifierParticleType, &b_TruthForwardProtonsAuxDyn_classifierParticleType);
   fChain->SetBranchAddress("TruthForwardProtonsAuxDyn.classifierParticleOutCome", &TruthForwardProtonsAuxDyn_classifierParticleOutCome, &b_TruthForwardProtonsAuxDyn_classifierParticleOutCome);
   Notify();
}

Bool_t Analzer::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Analzer::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Analzer::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Analzer_cxx
