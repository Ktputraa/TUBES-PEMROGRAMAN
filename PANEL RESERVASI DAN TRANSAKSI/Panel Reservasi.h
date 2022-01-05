/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL_4                          1       /* callback function: panel_rs */
#define  PANEL_4_COMBO                    2       /* control type: string, callback function: combotipekamar */
#define  PANEL_4_TABLE                    3       /* control type: table, callback function: (none) */
#define  PANEL_4_STRING_2                 4       /* control type: string, callback function: (none) */
#define  PANEL_4_STRING                   5       /* control type: string, callback function: (none) */
#define  PANEL_4_KodBO                    6       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_NamaTamu                 7       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_7                8       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_2                9       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_3                10      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_8                11      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_6                12      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_Tombol_Hitung            13      /* control type: command, callback function: Tombol_Hitung */
#define  PANEL_4_Tombol_Kembali           14      /* control type: command, callback function: Tombol_Kembali */
#define  PANEL_4_Tombol_Tmbh              15      /* control type: command, callback function: Tombol_Tmbh */
#define  PANEL_4_STRING_3                 16      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_4                 17      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_6                 18      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_7                 19      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_5                 20      /* control type: string, callback function: (none) */
#define  PANEL_4_PICTURE_2                21      /* control type: picture, callback function: picture_reservasi */
#define  PANEL_4_TEXTMSG_4                22      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_NUMERIC                  23      /* control type: numeric, callback function: (none) */
#define  PANEL_4_TEXTMSG_5                24      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_PICTURE                  25      /* control type: picture, callback function: picture_reservasi */
#define  PANEL_4_TEXTMSG                  26      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_PICTURE_3                27      /* control type: picture, callback function: (none) */
#define  PANEL_4_DECORATION               28      /* control type: deco, callback function: (none) */
#define  PANEL_4_PICTURE_4                29      /* control type: picture, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK combotipekamar(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panel_rs(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture_reservasi(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Hitung(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Kembali(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Tmbh(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif