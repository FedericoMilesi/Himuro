#ifndef GRAPHICS_MOTION_MDLDAT_H
#define GRAPHICS_MOTION_MDLDAT_H

#include "typedefs.h"

#include "graphics/motion/acs_dat.h"

typedef u_short ANI_CODE;

typedef struct
{ // 0x8
    /* 0x0 */ ANI_CODE code;
    /* 0x2 */ u_short cnt;
    /* 0x4 */ u_int stat;
} ANI_BUF;

typedef struct {
	float scale;
	u_char neck_id;
	u_char waist_id;
	u_char leg_id;
	WMIM_DAT *wdat;
	CLOTH_DAT *cdat;
	COLLISION_DAT *collision;
} MANMDL_DAT;

// extern ANI_CODE m000anm000[0];
// extern ANI_CODE m000anm001[0];
// extern ANI_CODE m000anm002[0];
// extern ANI_CODE m000anm003[0];
// extern ANI_CODE m000anm004[0];
// extern ANI_CODE m000anm005[0];
// extern ANI_CODE m000anm006[0];
// extern ANI_CODE m000anm007[0];
// extern ANI_CODE m000anm008[0];
// extern ANI_CODE m000anm009[0];
// extern ANI_CODE m000anm010[0];
// extern ANI_CODE m000anm011[0];
// extern ANI_CODE m000anm012[0];
// extern ANI_CODE m000anm013[0];
// extern ANI_CODE m000anm014[0];
// extern ANI_CODE m000anm015[0];
// extern ANI_CODE m000anm016[0];
// extern ANI_CODE m000anm017[0];
// extern ANI_CODE m000anm018[0];
// extern ANI_CODE m000anm019[0];
// extern ANI_CODE m000anm020[0];
// extern ANI_CODE m000anm021[0];
// extern ANI_CODE m000anm022[0];
// extern ANI_CODE m000anm023[0];
// extern ANI_CODE m000anm024[0];
// extern ANI_CODE m000anm025[0];
// extern ANI_CODE m000anm026[0];
// extern ANI_CODE m000anm027[0];
// extern ANI_CODE m000anm028[0];
// extern ANI_CODE m000anm029[0];
// extern ANI_CODE m000anm030[0];
// extern ANI_CODE m000anm031[0];
// extern ANI_CODE m000anm032[0];
// extern ANI_CODE m000anm033[0];
// extern ANI_CODE m000anm034[0];
// extern ANI_CODE m000anm035[0];
// extern ANI_CODE m000anm036[0];
// extern ANI_CODE m000anm037[0];
// extern ANI_CODE m000anm038[0];
// extern ANI_CODE m000anm039[0];
// extern ANI_CODE m000anm040[0];
// extern ANI_CODE m000anm041[0];
// extern ANI_CODE m000anm042[0];
// extern ANI_CODE m000anm043[0];
// extern ANI_CODE m000anm044[0];
// extern ANI_CODE m000anm045[0];
// extern ANI_CODE m000anm046[0];
// extern ANI_CODE m000anm047[0];
// extern ANI_CODE m000anm048[0];
// extern ANI_CODE m000anm049[0];
// extern ANI_CODE m000anm050[0];
// extern ANI_CODE m000anm051[0];
// extern ANI_CODE m000anm052[0];
// extern ANI_CODE m000anm053[0];
// extern ANI_CODE m000anm054[0];
// extern ANI_CODE m000anm055[0];
// extern ANI_CODE m000anm056[0];
// extern ANI_CODE m000anm057[0];
// extern ANI_CODE m000anm058[0];
// extern ANI_CODE m000anm059[0];
// extern ANI_CODE m000anm060[0];
// extern ANI_CODE m000anm061[0];
// extern ANI_CODE m000anm062[0];
// extern ANI_CODE m000anm063[0];
// extern ANI_CODE m000anm064[0];
// extern ANI_CODE m000anm065[0];
// extern ANI_CODE m000anm066[0];
// extern ANI_CODE m000anm067[0];
// extern ANI_CODE m000anm068[0];
// extern ANI_CODE m000anm069[0];
// extern ANI_CODE m000anm070[0];
// extern ANI_CODE m000anm071[0];
// extern ANI_CODE m000anm072[0];
// extern ANI_CODE m000anm073[0];
// extern ANI_CODE m000anm074[0];
// extern ANI_CODE m000anm075[0];
// extern ANI_CODE m000anm076[0];
// extern ANI_CODE m000anm077[0];
// extern ANI_CODE m000anm078[0];
// extern ANI_CODE m000anm079[0];
// extern ANI_CODE m000anm080[0];
// extern ANI_CODE m000anm081[0];
// extern ANI_CODE m000anm082[0];
// extern ANI_CODE m000anm083[0];
// extern ANI_CODE m000anm084[0];
// extern ANI_CODE m000anm085[0];
// extern ANI_CODE m000anm086[0];
// extern ANI_CODE m000anm087[0];
// extern ANI_CODE m000anm088[0];
// extern ANI_CODE m000anm089[0];
// extern ANI_CODE m000anm090[0];
// extern ANI_CODE m000anm091[0];
// extern ANI_CODE m000anm092[0];
// extern ANI_CODE m000anm093[0];
// extern ANI_CODE m000anm094[0];
// extern ANI_CODE m000anm095[0];
// extern ANI_CODE m000anm096[0];
// extern ANI_CODE m000anm097[0];
// extern ANI_CODE m000anm098[0];
// extern ANI_CODE m000anm099[0];
// extern ANI_CODE m000anm100[0];
// extern ANI_CODE m000anm101[0];
// extern ANI_CODE m000anm102[0];
// extern ANI_CODE m000anm103[0];
// extern ANI_CODE m000anm104[0];
// extern ANI_CODE m000anm105[0];
// extern ANI_CODE m000anm106[0];
// extern ANI_CODE m000anm107[0];
// extern ANI_CODE m001anm048[0];
// extern ANI_CODE m001anm049[0];
// extern ANI_CODE m001anm050[0];
// extern ANI_CODE m001anm051[0];
// extern ANI_CODE m001anm052[0];
// extern ANI_CODE m001anm053[0];
// extern ANI_CODE m001anm054[0];
// extern ANI_CODE m001anm055[0];
// extern ANI_CODE m001anm069[0];
// extern ANI_CODE m001anm070[0];
// extern ANI_CODE m001anm071[0];
// extern ANI_CODE m001anm072[0];
// extern ANI_CODE m001anm073[0];
// extern ANI_CODE m001anm074[0];
// extern ANI_CODE m001anm075[0];
// extern ANI_CODE m001anm076[0];
// extern ANI_CODE m010anm002[0];
// extern ANI_CODE m010anm006[0];
// extern ANI_CODE m010anm007[0];
// extern ANI_CODE m010anm009[0];
// extern ANI_CODE m010anm010[0];
// extern ANI_CODE m010anm011[0];
// extern ANI_CODE m010anm012[0];
// extern ANI_CODE m010anm013[0];
// extern ANI_CODE m011anm002[0];
// extern ANI_CODE m011anm006[0];
// extern ANI_CODE m011anm007[0];
// extern ANI_CODE m011anm008[0];
// extern ANI_CODE m011anm009[0];
// extern ANI_CODE m011anm010[0];
// extern ANI_CODE m011anm011[0];
// extern ANI_CODE m011anm012[0];
// extern ANI_CODE m011anm013[0];
// extern ANI_CODE m011anm014[0];
// extern ANI_CODE m012anm000[0];
// extern ANI_CODE m012anm002[0];
// extern ANI_CODE m012anm003[0];
// extern ANI_CODE m012anm004[0];
// extern ANI_CODE m012anm005[0];
// extern ANI_CODE m012anm006[0];
// extern ANI_CODE m012anm007[0];
// extern ANI_CODE m012anm008[0];
// extern ANI_CODE m012anm009[0];
// extern ANI_CODE m012anm010[0];
// extern ANI_CODE m012anm011[0];
// extern ANI_CODE m012anm012[0];
// extern ANI_CODE m012anm013[0];
// extern ANI_CODE m013anm002[0];
// extern ANI_CODE m013anm006[0];
// extern ANI_CODE m013anm007[0];
// extern ANI_CODE m013anm008[0];
// extern ANI_CODE m013anm009[0];
// extern ANI_CODE m013anm010[0];
// extern ANI_CODE m013anm011[0];
// extern ANI_CODE m013anm012[0];
// extern ANI_CODE m014anm002[0];
// extern ANI_CODE m014anm006[0];
// extern ANI_CODE m014anm007[0];
// extern ANI_CODE m014anm008[0];
// extern ANI_CODE m014anm009[0];
// extern ANI_CODE m014anm010[0];
// extern ANI_CODE m014anm011[0];
// extern ANI_CODE m014anm012[0];
// extern ANI_CODE m014anm013[0];
// extern ANI_CODE m014anm014[0];
// extern ANI_CODE m014anm015[0];
// extern ANI_CODE m014anm016[0];
// extern ANI_CODE m014anm017[0];
// extern ANI_CODE m014anm018[0];
// extern ANI_CODE m015anm000[0];
// extern ANI_CODE m015anm003[0];
// extern ANI_CODE m015anm004[0];
// extern ANI_CODE m015anm006[0];
// extern ANI_CODE m015anm007[0];
// extern ANI_CODE m015anm008[0];
// extern ANI_CODE m015anm009[0];
// extern ANI_CODE m015anm010[0];
// extern ANI_CODE m015anm011[0];
// extern ANI_CODE m015anm012[0];
// extern ANI_CODE m015anm013[0];
// extern ANI_CODE m015anm014[0];
// extern ANI_CODE m015anm015[0];
// extern ANI_CODE m015anm016[0];
// extern ANI_CODE m015anm017[0];
// extern ANI_CODE m016anm002[0];
// extern ANI_CODE m016anm006[0];
// extern ANI_CODE m016anm007[0];
// extern ANI_CODE m016anm009[0];
// extern ANI_CODE m016anm010[0];
// extern ANI_CODE m016anm011[0];
// extern ANI_CODE m016anm012[0];
// extern ANI_CODE m016anm013[0];
// extern ANI_CODE m016anm014[0];
// extern ANI_CODE m016anm015[0];
// extern ANI_CODE m016anm016[0];
// extern ANI_CODE m016anm017[0];
// extern ANI_CODE m016anm018[0];
// extern ANI_CODE m018anm000[0];
// extern ANI_CODE m018anm003[0];
// extern ANI_CODE m018anm004[0];
// extern ANI_CODE m018anm006[0];
// extern ANI_CODE m018anm007[0];
// extern ANI_CODE m018anm008[0];
// extern ANI_CODE m018anm009[0];
// extern ANI_CODE m018anm010[0];
// extern ANI_CODE m018anm011[0];
// extern ANI_CODE m018anm012[0];
// extern ANI_CODE m018anm013[0];
// extern ANI_CODE m018anm014[0];
// extern ANI_CODE m018anm015[0];
// extern ANI_CODE m018anm016[0];
// extern ANI_CODE m019anm000[0];
// extern ANI_CODE m019anm001[0];
// extern ANI_CODE m019anm002[0];
// extern ANI_CODE m019anm006[0];
// extern ANI_CODE m019anm007[0];
// extern ANI_CODE m019anm008[0];
// extern ANI_CODE m019anm009[0];
// extern ANI_CODE m019anm010[0];
// extern ANI_CODE m019anm011[0];
// extern ANI_CODE m019anm012[0];
// extern ANI_CODE m019anm013[0];
// extern ANI_CODE m020anm000[0];
// extern ANI_CODE m020anm002[0];
// extern ANI_CODE m020anm005[0];
// extern ANI_CODE m020anm006[0];
// extern ANI_CODE m020anm007[0];
// extern ANI_CODE m020anm008[0];
// extern ANI_CODE m020anm009[0];
// extern ANI_CODE m020anm010[0];
// extern ANI_CODE m020anm011[0];
// extern ANI_CODE m020anm012[0];
// extern ANI_CODE m020anm013[0];
// extern ANI_CODE m020anm014[0];
// extern ANI_CODE m021anm000[0];
// extern ANI_CODE m021anm002[0];
// extern ANI_CODE m021anm003[0];
// extern ANI_CODE m021anm004[0];
// extern ANI_CODE m021anm005[0];
// extern ANI_CODE m021anm009[0];
// extern ANI_CODE m022anm000[0];
// extern ANI_CODE m022anm002[0];
// extern ANI_CODE m022anm006[0];
// extern ANI_CODE m022anm007[0];
// extern ANI_CODE m022anm009[0];
// extern ANI_CODE m022anm010[0];
// extern ANI_CODE m022anm011[0];
// extern ANI_CODE m022anm012[0];
// extern ANI_CODE m022anm013[0];
// extern ANI_CODE m022anm014[0];
// extern ANI_CODE m022anm015[0];
// extern ANI_CODE m023anm000[0];
// extern ANI_CODE m023anm002[0];
// extern ANI_CODE m023anm006[0];
// extern ANI_CODE m023anm007[0];
// extern ANI_CODE m023anm009[0];
// extern ANI_CODE m023anm010[0];
// extern ANI_CODE m023anm011[0];
// extern ANI_CODE m023anm012[0];
// extern ANI_CODE m024anm000[0];
// extern ANI_CODE m024anm002[0];
// extern ANI_CODE m024anm006[0];
// extern ANI_CODE m024anm007[0];
// extern ANI_CODE m024anm009[0];
// extern ANI_CODE m024anm010[0];
// extern ANI_CODE m024anm011[0];
// extern ANI_CODE m024anm012[0];
// extern ANI_CODE m024anm013[0];
// extern ANI_CODE m024anm014[0];
// extern ANI_CODE m024anm015[0];
// extern ANI_CODE m024anm016[0];
// extern ANI_CODE m025anm000[0];
// extern ANI_CODE m025anm006[0];
// extern ANI_CODE m025anm007[0];
// extern ANI_CODE m025anm009[0];
// extern ANI_CODE m025anm010[0];
// extern ANI_CODE m025anm013[0];
// extern ANI_CODE m025anm014[0];
// extern ANI_CODE m025anm015[0];
// extern ANI_CODE m025anm016[0];
// extern ANI_CODE m025anm017[0];
// extern ANI_CODE m025anm018[0];
// extern ANI_CODE m025anm019[0];
// extern ANI_CODE m025anm020[0];
// extern ANI_CODE m027anm000[0];
// extern ANI_CODE m027anm001[0];
// extern ANI_CODE m027anm002[0];
// extern ANI_CODE m027anm003[0];
// extern ANI_CODE m027anm004[0];
// extern ANI_CODE m027anm006[0];
// extern ANI_CODE m027anm007[0];
// extern ANI_CODE m027anm009[0];
// extern ANI_CODE m027anm010[0];
// extern ANI_CODE m027anm011[0];
// extern ANI_CODE m027anm012[0];
// extern ANI_CODE m027anm013[0];
// extern ANI_CODE m027anm014[0];
// extern ANI_CODE m027anm015[0];
// extern ANI_CODE m027anm016[0];
// extern ANI_CODE m028anm000[0];
// extern ANI_CODE m028anm001[0];
// extern ANI_CODE m028anm002[0];
// extern ANI_CODE m028anm006[0];
// extern ANI_CODE m028anm007[0];
// extern ANI_CODE m028anm009[0];
// extern ANI_CODE m028anm010[0];
// extern ANI_CODE m028anm011[0];
// extern ANI_CODE m028anm012[0];
// extern ANI_CODE m028anm013[0];
// extern ANI_CODE m028anm014[0];
// extern ANI_CODE m028anm015[0];
// extern ANI_CODE m031anm000[0];
// extern ANI_CODE m031anm001[0];
// extern ANI_CODE m031anm002[0];
// extern ANI_CODE m031anm003[0];
// extern ANI_CODE m031anm004[0];
// extern ANI_CODE m031anm006[0];
// extern ANI_CODE m031anm011[0];
// extern ANI_CODE m031anm012[0];
// extern ANI_CODE m032anm000[0];
// extern ANI_CODE m032anm002[0];
// extern ANI_CODE m032anm003[0];
// extern ANI_CODE m032anm004[0];
// extern ANI_CODE m032anm006[0];
// extern ANI_CODE m032anm007[0];
// extern ANI_CODE m032anm008[0];
// extern ANI_CODE m032anm009[0];
// extern ANI_CODE m032anm010[0];
// extern ANI_CODE m032anm011[0];
// extern ANI_CODE m032anm012[0];
// extern ANI_CODE m032anm013[0];
// extern ANI_CODE m032anm014[0];
// extern ANI_CODE m032anm015[0];
// extern ANI_CODE m032anm016[0];
// extern ANI_CODE m032anm017[0];
// extern ANI_CODE m032anm018[0];
// extern ANI_CODE m032anm019[0];
// extern ANI_CODE m033anm000[0];
// extern ANI_CODE m033anm002[0];
// extern ANI_CODE m033anm003[0];
// extern ANI_CODE m033anm004[0];
// extern ANI_CODE m033anm005[0];
// extern ANI_CODE m033anm006[0];
// extern ANI_CODE m033anm007[0];
// extern ANI_CODE m033anm008[0];
// extern ANI_CODE m033anm009[0];
// extern ANI_CODE m033anm010[0];
// extern ANI_CODE m033anm011[0];
// extern ANI_CODE m033anm012[0];
// extern ANI_CODE m033anm013[0];
// extern ANI_CODE m033anm014[0];
// extern ANI_CODE m033anm015[0];
// extern ANI_CODE m033anm016[0];
// extern ANI_CODE m033anm017[0];
// extern ANI_CODE m033anm018[0];
// extern ANI_CODE m033anm019[0];
// extern ANI_CODE m034anm000[0];
// extern ANI_CODE m034anm002[0];
// extern ANI_CODE m034anm003[0];
// extern ANI_CODE m034anm004[0];
// extern ANI_CODE m034anm006[0];
// extern ANI_CODE m034anm007[0];
// extern ANI_CODE m034anm008[0];
// extern ANI_CODE m034anm009[0];
// extern ANI_CODE m034anm010[0];
// extern ANI_CODE m034anm011[0];
// extern ANI_CODE m034anm012[0];
// extern ANI_CODE m034anm013[0];
// extern ANI_CODE m034anm014[0];
// extern ANI_CODE m034anm015[0];
// extern ANI_CODE m034anm016[0];
// extern ANI_CODE m034anm017[0];
// extern ANI_CODE m034anm018[0];
// extern ANI_CODE m034anm019[0];
// extern ANI_CODE m035anm000[0];
// extern ANI_CODE m035anm002[0];
// extern ANI_CODE m035anm006[0];
// extern ANI_CODE m035anm007[0];
// extern ANI_CODE m035anm008[0];
// extern ANI_CODE m035anm009[0];
// extern ANI_CODE m035anm010[0];
// extern ANI_CODE m035anm011[0];
// extern ANI_CODE m035anm012[0];
// extern ANI_CODE m035anm013[0];
// extern ANI_CODE m035anm014[0];
// extern ANI_CODE m035anm015[0];
// extern ANI_CODE m035anm016[0];
// extern ANI_CODE m035anm017[0];
// extern ANI_CODE m035anm018[0];
// extern ANI_CODE m035anm019[0];
// extern ANI_CODE m036anm000[0];
// extern ANI_CODE m036anm002[0];
// extern ANI_CODE m036anm006[0];
// extern ANI_CODE m036anm007[0];
// extern ANI_CODE m036anm008[0];
// extern ANI_CODE m036anm009[0];
// extern ANI_CODE m036anm010[0];
// extern ANI_CODE m036anm011[0];
// extern ANI_CODE m036anm012[0];
// extern ANI_CODE m036anm013[0];
// extern ANI_CODE m036anm014[0];
// extern ANI_CODE m036anm015[0];
// extern ANI_CODE m036anm016[0];
// extern ANI_CODE m037anm000[0];
// extern ANI_CODE m037anm002[0];
// extern ANI_CODE m037anm006[0];
// extern ANI_CODE m037anm007[0];
// extern ANI_CODE m037anm008[0];
// extern ANI_CODE m037anm009[0];
// extern ANI_CODE m037anm010[0];
// extern ANI_CODE m037anm011[0];
// extern ANI_CODE m037anm012[0];
// extern ANI_CODE m037anm013[0];
// extern ANI_CODE m037anm014[0];
// extern ANI_CODE m037anm015[0];
// extern ANI_CODE m037anm016[0];
// extern ANI_CODE m037anm017[0];
// extern ANI_CODE m038anm000[0];
// extern ANI_CODE m038anm001[0];
// extern ANI_CODE m038anm002[0];
// extern ANI_CODE m038anm006[0];
// extern ANI_CODE m038anm007[0];
// extern ANI_CODE m038anm008[0];
// extern ANI_CODE m038anm009[0];
// extern ANI_CODE m038anm010[0];
// extern ANI_CODE m038anm011[0];
// extern ANI_CODE m038anm012[0];
// extern ANI_CODE m040anm000[0];
// extern ANI_CODE m040anm002[0];
// extern ANI_CODE m040anm006[0];
// extern ANI_CODE m040anm011[0];
// extern ANI_CODE m040anm013[0];
// extern ANI_CODE m040anm014[0];
// extern ANI_CODE m040anm015[0];
// extern ANI_CODE m040anm016[0];
// extern ANI_CODE m042anm002[0];
// extern ANI_CODE m042anm006[0];
// extern ANI_CODE m042anm007[0];
// extern ANI_CODE m042anm008[0];
// extern ANI_CODE m042anm009[0];
// extern ANI_CODE m042anm010[0];
// extern ANI_CODE m042anm011[0];
// extern ANI_CODE m042anm012[0];
// extern ANI_CODE m042anm013[0];
// extern ANI_CODE m042anm014[0];
// extern ANI_CODE m042anm015[0];
// extern ANI_CODE m042anm016[0];
// extern ANI_CODE m042anm017[0];
// extern ANI_CODE arei_anm[0];
// extern ANI_CODE arei_loop_anm[0];
// extern ANI_CODE *m000anm_tbl[0];
// extern ANI_CODE *m001anm_tbl[0];
// extern ANI_CODE *m010anm_tbl[0];
// extern ANI_CODE *m011anm_tbl[0];
// extern ANI_CODE *m012anm_tbl[0];
// extern ANI_CODE *m013anm_tbl[0];
// extern ANI_CODE *m014anm_tbl[0];
// extern ANI_CODE *m015anm_tbl[0];
// extern ANI_CODE *m016anm_tbl[0];
// extern ANI_CODE *m018anm_tbl[0];
// extern ANI_CODE *m019anm_tbl[0];
// extern ANI_CODE *m020anm_tbl[0];
// extern ANI_CODE *m021anm_tbl[0];
// extern ANI_CODE *m022anm_tbl[0];
// extern ANI_CODE *m023anm_tbl[0];
// extern ANI_CODE *m024anm_tbl[0];
// extern ANI_CODE *m025anm_tbl[0];
// extern ANI_CODE *m027anm_tbl[0];
// extern ANI_CODE *m028anm_tbl[0];
// extern ANI_CODE *m031anm_tbl[0];
// extern ANI_CODE *m032anm_tbl[0];
// extern ANI_CODE *m033anm_tbl[0];
// extern ANI_CODE *m034anm_tbl[0];
// extern ANI_CODE *m035anm_tbl[0];
// extern ANI_CODE *m036anm_tbl[0];
// extern ANI_CODE *m037anm_tbl[0];
// extern ANI_CODE *m038anm_tbl[0];
// extern ANI_CODE *m040anm_tbl[0];
// extern ANI_CODE *m042anm_tbl[0];
// extern ANI_CODE *arei_anm_tbl[0];
// extern ANI_CODE *arei_loopanm_tbl[0];
// extern MANMDL_DAT manmdl_dat[0];
// extern ANI_CODE **anm_tbl[0];


#endif // GRAPHICS_MOTION_MDLDAT_H
