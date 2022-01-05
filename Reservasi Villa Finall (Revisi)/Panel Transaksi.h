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

#define  PANEL_5                          1       /* callback function: panel_tr */
#define  PANEL_5_DECORATION               2       /* control type: deco, callback function: (none) */
#define  PANEL_5_DECORATION_4             3       /* control type: deco, callback function: (none) */
#define  PANEL_5_STRING_4                 4       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_3                 5       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_8                 6       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_2                 7       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_7                 8       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_6                 9       /* control type: string, callback function: (none) */
#define  PANEL_5_STRING_9                 10      /* control type: string, callback function: (none) */
#define  PANEL_5_STRING                   11      /* control type: string, callback function: (none) */
#define  PANEL_5_TEXTMSG_2                12      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_4                13      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_6                14      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_3                15      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_8                16      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_TEXTMSG_7                17      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_PICTURE_2                18      /* control type: picture, callback function: picture_transaksi */
#define  PANEL_5_PICTURE                  19      /* control type: picture, callback function: picture_transaksi */
#define  PANEL_5_NUMERIC_2                20      /* control type: numeric, callback function: (none) */
#define  PANEL_5_Kembali                  21      /* control type: command, callback function: Kembali */
#define  PANEL_5_COMMANDBUTTON_2          22      /* control type: command, callback function: Tombol_Klik */
#define  PANEL_5_COMMANDBUTTON            23      /* control type: command, callback function: Tombol_Print */
#define  PANEL_5_TEXTMSG_13               24      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_DECORATION_5             25      /* control type: deco, callback function: (none) */
#define  PANEL_5_PICTURE_3                26      /* control type: picture, callback function: picture_transaksi */
#define  PANEL_5_DECORATION_3             27      /* control type: deco, callback function: (none) */
#define  PANEL_5_TEXTMSG_12               28      /* control type: textMsg, callback function: (none) */
#define  PANEL_5_DECORATION_2             29      /* control type: deco, callback function: (none) */
#define  PANEL_5_TEXTMSG_5                30      /* control type: textMsg, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK Kembali(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panel_tr(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture_transaksi(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Klik(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Print(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif