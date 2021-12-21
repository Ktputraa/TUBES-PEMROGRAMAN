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

#define  PANEL                            1       /* callback function: panel_login */
#define  PANEL_STRING_2                   2       /* control type: string, callback function: (none) */
#define  PANEL_STRING                     3       /* control type: string, callback function: (none) */
#define  PANEL_TombolCancel               4       /* control type: command, callback function: cancel */
#define  PANEL_TombolLogin                5       /* control type: command, callback function: login */
#define  PANEL_TEXTMSG_2                  6       /* control type: textMsg, callback function: (none) */
#define  PANEL_PICTURE_2                  7       /* control type: picture, callback function: picture_login */
#define  PANEL_PICTURE                    8       /* control type: picture, callback function: picture_login */
#define  PANEL_PICTURE_3                  9       /* control type: picture, callback function: picture_login */
#define  PANEL_TEXTMSG                    10      /* control type: textMsg, callback function: (none) */
#define  PANEL_PICTURE_4                  11      /* control type: picture, callback function: picture_login */

#define  PANEL_2                          2       /* callback function: panel_menu */
#define  PANEL_2_COMMANDBUTTON_4          2       /* control type: command, callback function: Tombol_Keluar */
#define  PANEL_2_COMMANDBUTTON_3          3       /* control type: command, callback function: Tombol_PB */
#define  PANEL_2_COMMANDBUTTON_2          4       /* control type: command, callback function: Tombol_RS */
#define  PANEL_2_COMMANDBUTTON            5       /* control type: command, callback function: Tombol_DK */
#define  PANEL_2_PICTURE_4                6       /* control type: picture, callback function: picture_menu */
#define  PANEL_2_PICTURE_6                7       /* control type: picture, callback function: picture_menu */
#define  PANEL_2_PICTURE_5                8       /* control type: picture, callback function: picture_menu */
#define  PANEL_2_PICTURE_3                9       /* control type: picture, callback function: picture_menu */


     /* Control Arrays: */

#define  CTRLARRAY                        1

     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK cancel(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK login(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panel_login(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panel_menu(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture_login(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture_menu(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_DK(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Keluar(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_PB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_RS(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif