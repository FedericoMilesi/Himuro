#ifndef OUTGAME_SOUND_TEST_H
#define OUTGAME_SOUND_TEST_H

#include "typedefs.h"

// extern u_short music_list[0];

void SoundTestForModeSlectInit();
char SoundTestForModeSlect();
void SoundTestForModeSlectDisp(u_char alp, float flsh);
void SlotNum(int number, u_char digit, u_char timer, u_char tim_lmt, short int pos_x, short int pos_y, short int lmt_upp, short int lmt_dwn, int alp, int time_mode, int ud_sw);
void ShockWave(u_char bgm_no, u_char alp);
void OneNum(u_short num_chr, u_char number, u_char no, u_char timer, u_char tim_lmt, short int pos_x, short int pos_y, short int lmt_upp, int lmt_dwn, int mode, int alp, int time_mode);

#endif // OUTGAME_SOUND_TEST_H
