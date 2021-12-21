#include <ansi_c.h>
#include <cvirte.h>		
#include <userint.h>
#include "Panel Utama.h"


//|============================================================================================|//
//|=======================================Constants============================================|//
//|============================================================================================|//
//|=========================================Types==============================================|//
//|============================================================================================|//
//|==================================Static global variables===================================|//
//|============================================================================================|//

static int panelHandle = 0, panelHandle_2=0;


//|============================================================================================|//
//|=======================================Static functions=====================================|//
//|============================================================================================|//
//|========================================Global variables====================================|//
//|============================================================================================|//
//|=========================================Global functions===================================|//
//|============================================================================================|//

/// HIFN The main entry-point function \\\

int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "Panel Utama.uir", PANEL)) < 0)
		return -1;
	if ((panelHandle_2 = LoadPanel (0, "Panel Utama.uir", PANEL_2)) < 0)
		return -1;
	
	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	
	return 0;
}


//|============================================================================================|//
//|========================MEMBERI TANDA SILANG DI POJOK KANAN ATAS============================|//
//|============================================================================================|//

int CVICALLBACK panel_login (int panel, int event, void *callbackData,
						 int eventData1, int eventData2)
{
	if (event == EVENT_CLOSE)
		QuitUserInterface (0);
	return 0;
}

int CVICALLBACK panel_menu (int panel, int event, void *callbackData,
						int eventData1, int eventData2)
{
	if (event == EVENT_CLOSE)
		QuitUserInterface (0);
	return 0;
}


//|============================================================================================|//
//|=====================================PANEL UTAMA LOGIN======================================|//
//|============================================================================================|//

int CVICALLBACK login (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	char *u, *p;
	int length_u, length_p;
	
	switch (event)
	{
		
		case EVENT_COMMIT:
			GetCtrlAttribute (panelHandle, PANEL_STRING, ATTR_STRING_TEXT_LENGTH,  &length_u);
			u=malloc(sizeof(char)*(length_u+1));
			GetCtrlAttribute (panelHandle, PANEL_STRING_2, ATTR_STRING_TEXT_LENGTH, &length_p);
			p=malloc(sizeof(char)*(length_p+1));
			GetCtrlVal (panelHandle, PANEL_STRING, u);
			GetCtrlVal (panelHandle, PANEL_STRING_2, p);
			if(strcmp(u,"memphis")==0 && strcmp(p, "14022")==0)
			{
				MessagePopup ("Login Berhasil", "Selamat Datang di Memphis Villa");
			DisplayPanel (panelHandle_2);
			}
			else
			{
				MessagePopup ("Login Tidak Berhasil", "Silahkan Masukkan Username dan Password Kembali! ");
			}
			break;
	}
	return 0;
}

int CVICALLBACK cancel (int panel, int control, int event,
						void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}


//|============================================================================================|//
//|=====================MENAMBAH GAMBAR PADA PANEL LOGIN DAN MENU UTAMA========================|//
//|============================================================================================|//

int CVICALLBACK picture_login (int panel, int control, int event,
						 	void *callbackData, int eventData1, int eventData2)
{
	return 0;
}

int CVICALLBACK picture_menu (int panel, int control, int event,
						 	 void *callbackData, int eventData1, int eventData2)
{
	return 0;
}


//|============================================================================================|//
//|=====================================PANEL MENU UTAMA=======================================|//
//|============================================================================================|//

int CVICALLBACK Tombol_Keluar (int panel, int control, int event,
							   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK Tombol_PB (int panel, int control, int event,
						   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK Tombol_RS (int panel, int control, int event,
						   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK Tombol_DK (int panel, int control, int event,
						   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}


