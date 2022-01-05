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


     /* Control Arrays: */

#define  CTRLARRAY                        1

     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK cancel(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK login(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panel_login(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture_login(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif