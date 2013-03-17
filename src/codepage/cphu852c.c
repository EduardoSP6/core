/*
 * Harbour Project source code:
 * National Collation Support Module (HU852C)
 *
 * Copyright 2009 Przemyslaw Czerpak <druzus / at / priv.onet.pl>
 * www - http://harbour-project.org
 *
 * This file is generated automatically by cpinfo.prg
 */

#define HB_CP_ID        HU852C
#define HB_CP_INFO      "Hungarian CP-852 (ntxhu852.obj compatible)"
#define HB_CP_UNITB     HB_UNITB_852
#define HB_CP_ACSORT    HB_CDP_ACSORT_NONE
#define HB_CP_UPPER     "AĆÁÄBCDEÉFGHIŹÍJKLMNOĽÓÖž ŐPQRSTUŚÚÜś ŰVWXYZ"
#define HB_CP_LOWER     "a áäbcdeéfghi íjklmno óö ôőpqrstu úü ľűvwxyz"
#define HB_CP_UTF8

#if 0 /* VERIFIED: 20091116 */

#define HB_CP_RAW

static const unsigned char s_flags[ 256 ] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,0,0,0,0,0,0,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,0,0,0,0,0,6,6,0,6,0,0,0,0,0,10,6,0,10,10,10,10,0,0,6,6,10,6,10,10,10,10,0,0,0,0,0,6,6,6,6,0,0,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0,0,10,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0 };
static const unsigned char s_upper[ 256 ] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,123,124,125,126,127,128,154,144,131,142,133,134,135,136,137,138,138,140,141,142,143,144,145,146,147,153,149,150,151,152,153,154,155,156,157,158,159,181,214,224,233,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,235,252,253,254,255 };
static const unsigned char s_lower[ 256 ] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,139,139,140,141,132,143,130,145,146,147,148,149,150,151,152,148,129,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,160,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,161,215,216,217,218,219,220,221,222,223,162,225,226,227,228,229,230,231,232,163,234,251,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255 };
static const unsigned char s_sort [ 256 ] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,69,70,71,72,74,75,76,77,80,81,82,83,84,85,91,92,93,94,95,96,102,103,104,105,106,107,108,109,110,111,112,113,116,117,118,119,121,122,123,124,126,127,128,129,130,131,136,137,138,139,140,141,146,147,148,149,150,151,152,153,154,155,156,143,120,157,115,158,159,160,161,162,90,135,163,78,68,66,73,164,165,134,133,86,144,97,100,88,99,166,167,168,169,170,114,125,132,142,171,172,173,89,174,175,176,177,178,179,180,181,182,183,184,185,186,67,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,79,219,220,221,222,223,224,225,226,227,87,228,229,230,231,232,233,234,235,98,236,101,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,145,252,253,254,255 };

#endif

/* include CP registration code */
#include "hbcdpreg.h"