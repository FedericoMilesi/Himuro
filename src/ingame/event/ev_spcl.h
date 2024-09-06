#ifndef INGAME_EVENT_EV_SPCL_H
#define INGAME_EVENT_EV_SPCL_H

#include "typedefs.h"

#include "graphics/graph2d/sprt.h"

// extern void (*SpecialEventInitTbl[0])(/* parameters unknown */);
// extern void (*SpecialEventMainTbl[0])(/* parameters unknown */);
// extern SPRT_SDAT spev00_sp_bak[0];
// extern SPRT_SDAT spev00_sp_bff[0];
// extern SPRT_SDAT spev00_sp_bft[0];
// extern SPRT_SDAT spev00_sp_stn[0];
// extern short int spev00_stn_pos[0][2];
// extern SPRT_SDAT spev00_sp_lin[0];
// extern SPRT_SROT spev00_lin_rot[0];
// extern SPRT_SSCL spev00_lin_scl[0];
// extern SPRT_SDAT spev00_sp_num[0];
// extern SPRT_SDAT spev00_sp_sta[0];
// extern short int spev00_sta_pos[0][2];
// extern SPRT_SDAT spev00_sp_lia[0];
// extern SPRT_SROT spev00_lia_rot[0];
// extern SPRT_SSCL spev00_lia_scl[0];
// extern SPRT_SDAT spev00_sp_hln[0];
// extern SPRT_SDAT spev00_sp_csr[0];
// extern SPRT_SSCL spev00_csr_scl[0];
// extern SPRT_SDAT spev00_sp_cpf[0];
// extern SPRT_SDAT spev00_sp_cpf2[0];
// extern short int spev00_cbt_pos[0][3];
// extern SPRT_SDAT spev00_sp_cap[0];
// extern SPRT_SDAT spev01_sp_bak[0];
// extern SPRT_SDAT spev01_sp_gl3[0];
// extern SPRT_SDAT spev01_sp_gl5[0];
// extern SPRT_SDAT spev01_sp_btn[0];
// extern SPRT_SDAT spev01_sp_btp[0];
// extern SPRT_SDAT spev01_sp_btf[0];
// extern SPRT_SDAT spev01_sp_num[0];
// extern short int spev01_nm3_pos[0][2];
// extern short int spev01_nm4_pos[0][2];
// extern short int spev01_nm5_pos[0][2];
// extern SPRT_SDAT spev01_sp_cpf[0];
// extern short int spev01_cbt_pos[0][2];
// extern SPRT_SDAT spev01_sp_cap[0];
// extern SPRT_SDAT spev02_sp_bak[0];
// extern SPRT_SDAT spev02_sp_of1[0];
// extern SPRT_SDAT spev02_sp_of3[0];
// extern SPRT_SDAT spev03_sp_bak[0];
// extern SPRT_SDAT spev03_sp_dol[0];
// extern SPRT_SSCL spev03_dol_scl[0];
// extern SPRT_SROT spev03_dol_left;
// extern SPRT_SDAT spev03_sp_dla[0];
// extern SPRT_SSCL spev03_dla_scl[0];
// extern SPRT_SDAT spev03_sp_cap[0];
// extern SPRT_SDAT spev04_sp_bk0[0];
// extern SPRT_SDAT spev04_sp_bk1[0];
// extern SPRT_SDAT spev04_sp_bk2[0];
// extern SPRT_SDAT spev04_sp_bk3[0];
// extern SPRT_SDAT spev04_sp_bd1[0];
// extern SPRT_SDAT spev04_sp_bzf[0];
// extern SPRT_SDAT spev04_sp_bld[0];
// extern SPRT_SDAT spev04_sp_cap[0];
// extern short int spev04_cbt_pos[0][2];
// extern SPRT_SDAT spev04_sp_slf[0];
// extern SPRT_SDAT spev04_sp_sel[0];
// extern SPRT_SSCL spev04_bd1_scl[0];
// extern SPRT_SSCL spev04_bz2_scl[0];
// extern SPRT_SSCL spev04_sel_scl[0];
// extern SPRT_SDAT spev04_sp_bd2[0];
// extern SPRT_SDAT spev04_sp_cpt[0];
// extern SPRT_SDAT spev20_sp_bak[0];
// extern SPRT_SDAT spev20_sp_cdl[0];
// extern SPRT_SDAT spev20_sp_cla[0];
// extern SPRT_SDAT spev20_sp_cpf[0];
// extern SPRT_SDAT spev20_sp_cfa[0];
// extern SPRT_SDAT spev20_sp_cdl0[0];
// extern SPRT_SDAT spev20_sp_cdl1[0];
// extern SPRT_SDAT spev20_sp_cdl2[0];
// extern SPRT_SDAT spev20_sp_cdl3[0];
// extern SPRT_SDAT spev20_sp_cdl5[0];
// extern SPRT_SDAT spev20_sp_cdl4[0];
// extern SPRT_SDAT pzl_men_bg[0];
// extern SPRT_SDAT spev21_sp_menz[0];
// extern SPRT_SDAT spev21_sp_bak[0];
// extern SPRT_SDAT spev21_sp_zft[0];
// extern SPRT_SDAT spev21_sp_zfl[0];
// extern SPRT_SDAT spev21_sp_zbt[0];
// extern SPRT_SDAT spev21_sp_cpf[0];
// extern SPRT_SDAT spev21_sp_cap[0];
// extern STR_DAT spev_str;
// extern SQAR_DAT spev_sq0;
// extern STAR_PZL_DAT star_pzl_dat[0];
// extern DIAL_KEY_DAT dkey_dat[0];
// extern u_char pghost_no_dat[0];
// extern EV_DOLL_DAT evdl_dat[0];
// extern EV_BTZ_DAT evbtz_dat[5];
// extern EV_BTZ_DAT evbtz_ans[5];
// extern EV_BLD_DAT evbld_dat;
// extern SPRT_SSCL spev04_sel_scl2[0];
// extern EV_CDL_DAT evcdl_dat;
// extern short int yoro_door;
// extern short int ika_door;
// extern short int kana_door;
// extern short int tano_door;
// extern ZUSHI_WRK zushi_dat[4];
// extern SPECIAL_EVENT_WRK spev_wrk;
// extern STAR_PZL_WRK star_pzl_wrk;
// extern DIAL_KEY_WRK dkey_wrk;

void SpecialEventInit(u_char spev_no);
void SpecialEventMain();
int GetSpecialEventMessageAddr(short int msg_no);
void SimpleDispSprt(SPRT_SDAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate);
void SimpleDispAlphaSprt(u_int addr, int sp_no, u_char alp_rate, u_char alp_type);
void SimpleDispSprtRGB(u_int addr, int sp_no, u_char alp_rate, u_char rr, u_char gg, int bb);
void SimpleDispSprtLNR(u_int addr, int sp_no, u_char alp_rate, int lnr);
void SimpleDispSprtDatCopy(SPRT_SDAT *org, SPRT_SDAT *cpy);
void TestPk2Data(long int sendtexaddr);
int ButtonMarkNext(int x_off, int y_off, int se_flg);
int ButtonMarkWait();
void ButtonMarkTimeClear();
int CsrInclease(u_char *csr_idx, u_char alpha_max, u_char inclease);
int CsrDeclease(u_char *csr_idx, u_char alpha_min, int inclease);
int CsrBlink(u_char *csr_idx, u_char alpha_max, u_char alpha_min, u_char inclease, u_char *blink);
void CsrClear(u_char *csr_idx);
void CsrClearAll();
void SpevStrInit();
void SpevWrkInit();
void SpevSelectYesNoCsr(float pos_x, float pos_y, int pri, float alp);
int DeadlySeStopWait();
void DummyProg();
void StarPuzzleInit(int pzl_no);
void StarPuzzleDataSet(int pzl_no);
int StarPuzzleMain(int pzl_no);
int StarPuzzleClearJudge();
void StarPuzzleDisp();
int StarPuzzleMSGMain(int pzl_no);
void StarPuzzleMSGDisp();
void DialKeyDoorInit(int door_no);
void DialKeyDoorDataSet(int door_no);
int DialKeyDoorMain();
void DialKeyDoorDisp();
void DialKeyMSGDoorInit();
int DialKeyMSGDoorMain(int msg_no);
void DialKeyMSGDoorDisp(int msg_no);
void GhostDoorInit(int door_no);
void GhostDoorSet(int door_no);
void GhostDoorMain(int door_no);
void GhostDoorDisp(int door_no);
void DollPzlInit();
void DollPzlMain();
int CursorManagerEvent003();
void SpecialEventDisp003(int no);
void ButsuzoPzlInit();
void ButsuzoPzlMain();
u_char BldAlpRetern(short int time_cnt, short int bld_appear, short int bld_end, short int bld_alp);
void SpecialEventDisp004();
void ButsuzoMSGInit();
void ButsuzoMSGMain();
void ButsuzoMSGDisp();
void LightsOutInit();
void LightsOutMain();
void SpecialEventDisp014(int no);
void FaceDoorInit(int face_no);
void FaceDoorMain(int face_no);
void FaceDoorOkSet(int face_no);
void FaceDoorAimSet(int face_no);
int NisUseCheck(int face_no);
void NisUseSet(int face_no);
void NisUseUnSet(int face_no);
void FaceDoorDisp(int face_no);
void SurpriseDoorInit();
void SurpriseDoorMain();
void SurpriseDoorDisp(int face_no);
void SimenPillarInit(int event_no);
void SimenPillarMain(int event_no);
int SimenCheck();
void SimenPillarDisp();
void IkariMenInit();
void IkariMenComeOn();
void HanyouKaitenInit(int event_no);
void HanyouKaitenMain(int event_no);
void ZushiBonjiInit(int bonji_no);
void ZushiBonjiMain(int bonji_no);
void ZushiBonjiDisp(int bonji_no);
void ZushiBonjiMSGInit();
void ZushiBonjiMSGMain();
void ZushiBonjiMSGDisp();
void ZushiBonjiAfterInit(int bonji_no);
void ZushiBonjiAfterMain(int bonji_no);
void ZushiBonjiAfterDisp(int bonji_no);
void KakejikuDoorInit();
void KakejikuDoorMain();
void IdoFirstIntoInit();
void IdoFirstIntoMain();
void IdoIntoInit();
void IdoIntoMain();
void IdoFirstOutInit();
void IdoFirstOutMain();
void IdoOutInit();
void IdoOutMain();
void IdoInOutDisp(int inout);
void ItemEventInit(int event_no);
void ItemEventMain(int event_no);
void ItemEventDisp();
void NawakakeFalseMain(int event_no);
void NawakakeFalseDisp();
void SpecialEventInit000();
void SpecialEventMain000();
void SpecialEventInit001();
void SpecialEventMain001();
void SpecialEventInit002();
void SpecialEventMain002();
void SpecialEventInit003();
void SpecialEventMain003();
void SpecialEventInit004();
void SpecialEventMain004();
void SpecialEventInit005();
void SpecialEventMain005();
void SpecialEventInit006();
void SpecialEventMain006();
void SpecialEventInit007();
void SpecialEventMain007();
void SpecialEventInit008();
void SpecialEventMain008();
void SpecialEventInit009();
void SpecialEventMain009();
void SpecialEventInit010();
void SpecialEventMain010();
void SpecialEventInit011();
void SpecialEventMain011();
void SpecialEventInit012();
void SpecialEventMain012();
void SpecialEventInit013();
void SpecialEventMain013();
void SpecialEventInit014();
void SpecialEventMain014();
void SpecialEventInit015();
void SpecialEventMain015();
void SpecialEventInit016();
void SpecialEventMain016();
void SpecialEventInit017();
void SpecialEventMain017();
void SpecialEventInit018();
void SpecialEventMain018();
void SpecialEventInit019();
void SpecialEventMain019();
void SpecialEventInit020();
void SpecialEventMain020();
void SpecialEventInit021();
void SpecialEventMain021();
void SpecialEventInit022();
void SpecialEventMain022();
void SpecialEventInit023();
void SpecialEventMain023();
void SpecialEventInit024();
void SpecialEventMain024();
void SpecialEventInit025();
void SpecialEventMain025();
void SpecialEventInit026();
void SpecialEventMain026();
void SpecialEventInit027();
void SpecialEventMain027();
void SpecialEventInit028();
void SpecialEventMain028();
void SpecialEventInit029();
void SpecialEventMain029();
void SpecialEventInit030();
void SpecialEventMain030();
void SpecialEventInit031();
void SpecialEventMain031();
void SpecialEventInit032();
void SpecialEventMain032();
void SpecialEventInit033();
void SpecialEventMain033();
void SpecialEventInit034();
void SpecialEventMain034();
void SpecialEventInit035();
void SpecialEventMain035();
void SpecialEventInit036();
void SpecialEventMain036();
void SpecialEventInit037();
void SpecialEventMain037();
void SpecialEventInit038();
void SpecialEventMain038();
void SpecialEventInit039();
void SpecialEventMain039();
void SpecialEventInit040();
void SpecialEventMain040();
void SpecialEventInit041();
void SpecialEventMain041();
void SpecialEventInit042();
void SpecialEventMain042();
void SpecialEventInit043();
void SpecialEventMain043();
void SpecialEventInit044();
void SpecialEventMain044();
void SpecialEventInit045();
void SpecialEventMain045();
void SpecialEventInit046();
void SpecialEventMain046();
void SpecialEventInit047();
void SpecialEventMain047();
void SpecialEventInit048();
void SpecialEventMain048();
void SpecialEventInit049();
void SpecialEventMain049();
void SpecialEventInit050();
void SpecialEventMain050();
void SpecialEventInit051();
void SpecialEventMain051();
void SpecialEventInit052();
void SpecialEventMain052();
void SpecialEventInit053();
void SpecialEventMain053();
void SpecialEventInit054();
void SpecialEventMain054();
void SpecialEventInit055();
void SpecialEventMain055();
void SpecialEventInit056();
void SpecialEventMain056();
void SpecialEventInit057();
void SpecialEventMain057();
void SpecialEventInit058();
void SpecialEventMain058();
void SpecialEventInit059();
void SpecialEventMain059();
void SpecialEventInit060();
void SpecialEventMain060();
void SpecialEventInit061();
void SpecialEventMain061();
void SpecialEventInit062();
void SpecialEventMain062();
void SpecialEventInit063();
void SpecialEventMain063();
void SpecialEventInit064();
void SpecialEventMain064();
void SpecialEventInit065();
void SpecialEventMain065();
void SpecialEventInit066();
void SpecialEventMain066();
void SpecialEventInit067();
void SpecialEventMain067();
void SpecialEventInit068();
void SpecialEventMain068();
void SpecialEventInit069();
void SpecialEventMain069();
void SpecialEventInit070();
void SpecialEventMain070();
void SpecialEventInit071();
void SpecialEventMain071();
void SpecialEventInit072();
void SpecialEventMain072();
void SpecialEventInit073();
void SpecialEventMain073();
void SpecialEventInit074();
void SpecialEventMain074();
void SpecialEventInit075();
void SpecialEventMain075();
void SpecialEventInit076();
void SpecialEventMain076();
void SpecialEventInit077();
void SpecialEventMain077();
void SpecialEventInit078();
void SpecialEventMain078();
void SpecialEventInit079();
void SpecialEventMain079();
void SpecialEventInit080();
void SpecialEventMain080();
void SpecialEventInit081();
void SpecialEventMain081();
void SpecialEventInit082();
void SpecialEventMain082();
void SpecialEventInit083();
void SpecialEventMain083();
void SpecialEventInit084();
void SpecialEventMain084();
void SpecialEventInit085();
void SpecialEventMain085();
void SpecialEventInit086();
void SpecialEventMain086();
void SpecialEventInit087();
void SpecialEventMain087();
void SpecialEventInit088();
void SpecialEventMain088();
void SpecialEventInit089();
void SpecialEventMain089();
void SpecialEventInit090();
void SpecialEventMain090();

#endif // INGAME_EVENT_EV_SPCL_H
