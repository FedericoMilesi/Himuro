#ifndef INGAME_ENTRY_AP_FGOST_H
#define INGAME_ENTRY_AP_FGOST_H

#include "typedefs.h"

// extern int load_mdl_addr[0];
// extern int load_mot_addr[0];
// extern int load_se_addr[0];
// extern FG_LOAD_WRK fg_load_wrk;

void FloatGhostAppearInit();
int FloatGhostEntrySet(u_char area);
int FloatGhostAppearMain();
int FloatGhostAppearJudge();
int FloatGhostAppearTypeSet(u_char fg_no, u_char wrk_no, u_char room);
int GetFloatGhostAppearPosType(u_char *type);
void FloatGhostAppearPosSet(u_char dat_no, float *set_pos, float *set_rot);
int FloatGhostBattleEnd();
int FloatGhostEscapeEnd();
void FloatGhostLoadReq();
int FloatGhostLoadMain();
int FloatGhostLoadSet();
int FloatGhostSetJudge();
void GetLoadFloatGhost(u_char set_num, u_char *set_fgst);
void GetFloatGhostModelLoad();
void GetFloatGhostModelLoadAfter();
void GetFloatGhostMotionLoad();
void GetFloatGhostMotionLoadAfter();
void GetFloatGhostSELoad();
void FloatGhostAppearStop();
void FloatGhostAppearStart();

#endif // INGAME_ENTRY_AP_FGOST_H
