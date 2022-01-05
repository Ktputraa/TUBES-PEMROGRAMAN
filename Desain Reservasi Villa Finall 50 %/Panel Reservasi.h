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
#define  PANEL_4_COMBO                    2       /* control type: string, callback function: combo */
#define  PANEL_4_TABLE                    3       /* control type: table, callback function: (none) */
#define  PANEL_4_STRING_2                 4       /* control type: string, callback function: (none) */
#define  PANEL_4_STRING                   5       /* control type: string, callback function: (none) */
#define  PANEL_4_KodBO                    6       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_NamaTamu                 7       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_7                8       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_2                9       /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_3                10      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_TEXTMSG_6                11      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_Tombol_Hitung            12      /* control type: command, callback function: Tombol_Hitung */
#define  PANEL_4_Tombol_Kembali           13      /* control type: command, callback function: Tombol_Kembali */
#define  PANEL_4_Tombol_Tmbh              14      /* control type: command, callback function: Tombol_Tmbh */
#define  PANEL_4_STRING_4                 15      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_5                 16      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_6                 17      /* control type: string, callback function: (none) */
#define  PANEL_4_STRING_3                 18      /* control type: string, callback function: (none) */
#define  PANEL_4_PICTURE_2                19      /* control type: picture, callback function: picture_reservasi */
#define  PANEL_4_PICTURE                  20      /* control type: picture, callback function: picture_reservasi */
#define  PANEL_4_TEXTMSG_4                21      /* control type: textMsg, callback function: (none) */
#define  PANEL_4_NUMERIC                  22      /* control type: numeric, callback function: (none) */
#define  PANEL_4_TEXTMSG_5                23      /* control type: textMsg, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK combo(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panel_rs(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture_reservasi(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Hitung(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Kembali(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Tmbh(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif