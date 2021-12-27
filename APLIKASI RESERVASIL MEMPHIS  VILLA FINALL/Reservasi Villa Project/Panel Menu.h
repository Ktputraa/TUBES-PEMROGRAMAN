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

#define  PANEL_2                          1       /* callback function: panel_menu */
#define  PANEL_2_COMMANDBUTTON_4          2       /* control type: command, callback function: Tombol_Keluar */
#define  PANEL_2_COMMANDBUTTON_3          3       /* control type: command, callback function: Tombol_PB */
#define  PANEL_2_COMMANDBUTTON_2          4       /* control type: command, callback function: Tombol_RS */
#define  PANEL_2_COMMANDBUTTON            5       /* control type: command, callback function: Tombol_DK */
#define  PANEL_2_PICTURE_2                6       /* control type: picture, callback function: picture_menu */
#define  PANEL_2_PICTURE_3                7       /* control type: picture, callback function: picture_menu */
#define  PANEL_2_PICTURE                  8       /* control type: picture, callback function: picture_menu */
#define  PANEL_2_PICTURE_4                9       /* control type: picture, callback function: picture_menu */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK panel_menu(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture_menu(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_DK(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Keluar(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_PB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_RS(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif