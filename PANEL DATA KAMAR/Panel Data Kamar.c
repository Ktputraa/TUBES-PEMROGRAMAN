#include <ansi_c.h>
#include <formatio.h>
#include "combobox.h"
#include <cvirte.h>		
#include <userint.h>
#include "Panel Data Kamar.h"
#include "Panel Data.h"


//|============================================================================================|//
//|=======================================Constants============================================|//
//|============================================================================================|//
//|=========================================Types==============================================|//
//|============================================================================================|//
//|==================================Static global variables===================================|//
//|============================================================================================|//	

static int panelHandle_3 = 0, panelHandle_6 = 0;
void InputComboValues (int panel, int control);
int n=1;
int m=1;
int a=1;


//|============================================================================================|//
//|======================================Static functions======================================|//
//|============================================================================================|//
//|======================================Global functions======================================|//
//|============================================================================================|//
/// HIFN The main entry-point function \\\

int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle_3 = LoadPanel (0, "Panel Data Kamar.uir", PANEL_3)) < 0)
		return -1;
	if ((panelHandle_6 = LoadPanel (0, "Panel Data.uir", PANEL_6)) < 0)
		return -1;
	
	DisplayPanel (panelHandle_3);
	
	//FUNGSI UNTUK INPUT VALUE  PADA COMBO//
	Combo_NewComboBox (panelHandle_3, PANEL_3_COMBO);
	InputComboValues (panelHandle_3, PANEL_3_COMBO);
	
	RunUserInterface ();

	Combo_DiscardComboBox (panelHandle_3, PANEL_3_COMBO);
	DiscardPanel (panelHandle_3);
	
	return 0;
}


//=============================================================================================|//
//===================================INPUT VALUE PADA COMBO====================================|//
//=============================================================================================|//

void InputComboValues (int panel, int control)
{
	Combo_InsertComboItem (panel, control, -1, "STANDAR");
	Combo_InsertComboItem (panel, control, -1, "VIP");
	Combo_InsertComboItem (panel, control, -1, "VVIP");
	
}


//|============================================================================================|//
//|=========================MEMBERI TANDA SILANG DIPOJOK KANAN ATAS============================|//
//|============================================================================================|//

/// HIFN Exit when the user dismisses the panel.

int CVICALLBACK panel_dk (int panel, int event, void *callbackData,
						int eventData1, int eventData2)
{
	if (event == EVENT_CLOSE)
		QuitUserInterface (0);
	return 0;
}

int CVICALLBACK panel_d (int panel, int event, void *callbackData,
						int eventData1, int eventData2)
{
	if (event == EVENT_CLOSE)
		QuitUserInterface (0);
	return 0;
}


//|============================================================================================|//
//|=====================MENAMBAH GAMBAR PADA PANEL DATA	KAMAR==================================|//
//|============================================================================================|//

int CVICALLBACK picture_datakamar (int panel, int control, int event,
						  	void *callbackData, int eventData1, int eventData2)
{
	return 0;
}


//|============================================================================================|//
//|======================================PANEL DATA============================================|//
//|==========================Fungsi Dalam Panel Data Kamar=====================================|//
//|============================================================================================|//
int CVICALLBACK Back (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_6);
			DisplayPanel(panelHandle_3);
			break;
	}
	return 0;
}

//|============================================================================================|//
//|================================PANEL DATA KAMAR ============================================|//
//|==========================Fungsi Dalam Panel Data Kamar=====================================|//
//|============================================================================================|//

int CVICALLBACK Tombol_Data (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel(panelHandle_3);
			DisplayPanel(panelHandle_6);
			break;
	}
	return 0;
}

int CVICALLBACK Tombol_Tambah (int panel, int control, int event,
void *callbackData, int eventData1, int eventData2)
{

	char NoKamar[50], TipeKamar[50], Fasilitas[100], HargaKamar[100];
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlVal (panelHandle_3, PANEL_3_STRING, NoKamar);
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(1,a), NoKamar);
			
			GetCtrlVal (panelHandle_3, PANEL_3_COMBO, TipeKamar);
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(2,a), TipeKamar);
			
			GetCtrlVal (panelHandle_3, PANEL_3_STRING_3, Fasilitas);
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(3,a), Fasilitas);
			
			GetCtrlVal (panelHandle_3, PANEL_3_STRING_4, HargaKamar);
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(4,a), HargaKamar);
			
			++a;
			MessagePopup ("Daftar Kamar", "Data Berhasil Dimasukan!");
			break;
	}
	return 0;
}


//|============================================================================================|//
//|====================================PANEL DATA KAMAR========================================|//
//|====================Fungsi Membuat Drop Down List Pada Panel Data Kamar=====================|//
//|============================================================================================|//


int CVICALLBACK ComboJenisKamar (int panel, int control, int event,
								 void *callbackData, int eventData1, int eventData2)
{
	char *value;
	int  length;
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlAttribute (panel, control, ATTR_STRING_TEXT_LENGTH, &length);
			value = (char *)malloc(length+1);
			StringUpperCase (value);
			if (strcmp (value, "STANDAR") == 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "1 Bed, TV, AC, Lemari");
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 250000");
				
			}
			else if (strcmp (value, "VIP") == 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "2 Bed, TV, AC, Lemari, Bathtub");
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 350000");
			}
			else if (strcmp (value, "VVIP") == 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "2 Bed + Spray Premium, TV, 2 AC, Lemari, Bathtub");
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 450000");
			}

			break;		
	}
	return 0;
}

int CVICALLBACK Tombol_Back (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_3);
			QuitUserInterface (0);
			break;
	}
	return 0;
}
