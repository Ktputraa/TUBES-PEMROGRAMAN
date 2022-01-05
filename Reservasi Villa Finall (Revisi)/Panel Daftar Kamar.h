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

#define  PANEL_3                          1       /* callback function: panel_dk */
#define  PANEL_3_COMMANDBUTTON            2       /* control type: command, callback function: Tombol_Back */
#define  PANEL_3_STRING                   3       /* control type: string, callback function: (none) */
#define  PANEL_3_STRING_3                 4       /* control type: string, callback function: (none) */
#define  PANEL_3_STRING_4                 5       /* control type: string, callback function: (none) */
#define  PANEL_3_COMMANDBUTTON_2          6       /* control type: command, callback function: Tombol_Tambah */
#define  PANEL_3_TABLE                    7       /* control type: table, callback function: (none) */
#define  PANEL_3_TABLE_2                  8       /* control type: table, callback function: (none) */
#define  PANEL_3_PICTURE                  9       /* control type: picture, callback function: picture_daftarkamar */
#define  PANEL_3_COMBO                    10      /* control type: string, callback function: ComboTpKamar */
#define  PANEL_3_DECORATION               11      /* control type: deco, callback function: (none) */
#define  PANEL_3_TEXTMSG                  12      /* control type: textMsg, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK ComboTpKamar(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panel_dk(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK picture_daftarkamar(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Back(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Tombol_Tambah(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif