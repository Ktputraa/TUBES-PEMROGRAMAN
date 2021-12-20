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

#define  PANEL_5                          1       /* callback function: panel_pb */
#define  PANEL_5_DECORATION               2       /* control type: deco, callback function: (none) */
#define  PANEL_5_DECORATION_4             3       /* control type: deco, callback function: (none) */
#define  PANEL_5_STRING_4                 4       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_3                 5       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_8                 6       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_2                 7       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_7                 8       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_6                 9       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING                   10      /* control type: string, callback function: (none) */
#define  PANEL_5_TEXTMSG_2                11      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_4                12      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_6                13      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_3                14      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_8                15      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_7                16      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG                  17      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_NUMERIC_2                18      /* control type: numeric, callback function: (none) */
#define  PANEL_5_COMMANDBUTTON_3          19      /* control type: command, callback function: Kembali */
#define  PANEL_5_COMMANDBUTTON_2          20      /* control type: command, callback function: Tombol_Cari */
#define  PANEL_5_COMMANDBUTTON            21      /* control type: command, callback function: Tombol_Print */
#define  PANEL_5_TEXTMSG_13               22      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_DECORATION_5             23      /* control type: deco, callback function: (none) */
#define  PANEL_5_TEXTMSG_12               24      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_PICTURE_3                25      /* control type: picture, callback function: (none) */
#define  PANEL_5_PICTURE                  26      /* control type: picture, callback function: picture_pembayaran */
#define  PANEL_5_PICTURE_2                27      /* control type: picture, callback function: picture_pembayaran */
#define  PANEL_5_DECORATION_3             28      /* control type: deco, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK Kembali(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panel_pb(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture_pembayaran(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Cari(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Print(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif