#include <ansi_c.h>
#include <formatio.h>
#include "combobox.h"
#include <cvirte.h>		
#include <userint.h>
#include "Panel Daftar Kamar.h"


//|============================================================================================|//
//|=======================================Constants============================================|//
//|============================================================================================|//
//|=========================================Types==============================================|//
//|============================================================================================|//
//|==================================Static global variables===================================|//

static int panelHandle_3 = 0;
void InputComboValues (int panel, int control);

int j=1;
	  
//|============================================================================================|//
//|=======================================Static functions=====================================|//
//|============================================================================================|//
//|=======================================Global variables=====================================|//
//|============================================================================================|//
//|=======================================Global functions=====================================|//
//|============================================================================================|//

int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;
	if ((panelHandle_3 = LoadPanel (0, "Panel Daftar Kamar.uir", PANEL_3)) < 0)
		return -1;

	DisplayPanel (panelHandle_3);
	
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
	Combo_InsertComboItem (panel, control, -1, "SINGLE ROOM");
	Combo_InsertComboItem (panel, control, -1, "TWIN ROOM");
	Combo_InsertComboItem (panel, control, -1, "TRIPLE ROOM");
	Combo_InsertComboItem (panel, control, -1, "JUNIOR SUITE ROOM");
	Combo_InsertComboItem (panel, control, -1, "DELUXE SUITE ROOM");
	Combo_InsertComboItem (panel, control, -1, "PRESIDENT SUITE ROOM");	
}


//|============================================================================================|//
//|=========================MEMBERI TANDA SILANG DIPOJOK KANAN ATAS============================|//
//|============================================================================================|//

int CVICALLBACK panel_dk (int panel, int event, void *callbackData,
						  int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_CLOSE:
			QuitUserInterface (0); //keluar dari panel//
			break;
	}
	return 0;
}


//|============================================================================================|//
//|=============================MENAMPILKAN GAMBAR PADA PANEL==================================|//
//|============================================================================================|//

int CVICALLBACK picture_daftarkamar (int panel, int control, int event,
						       	   void *callbackData, int eventData1, int eventData2)
{
	return 0;
}


//|============================================================================================|//
//|===================================PANEL DAFTAR KAMAR=======================================|//
//|============================================================================================|//
//|============Fungsi Memasukkan Data Ke Dalam Tabel Pada Panel Daftar Kamar===================|//
//|============================================================================================|//

int CVICALLBACK Tombol_Tambah (int panel, int control, int event,
							   void *callbackData, int eventData1, int eventData2) 
{
	char NoKamar[50], TipeKamar[50], Fasilitas[100], HargaKamar[100];
	
	switch (event)
	{
		case EVENT_COMMIT:
			
		for(int i=j;i<=j;) 
		{
			GetCtrlVal (panelHandle_3, PANEL_3_STRING, NoKamar); 
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(1,i), NoKamar); 
				
			GetCtrlVal (panelHandle_3, PANEL_3_COMBO, TipeKamar); 
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(2,i), TipeKamar); 
				
			GetCtrlVal (panelHandle_3, PANEL_3_STRING_3, Fasilitas);
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(3,i), Fasilitas);
				
			GetCtrlVal (panelHandle_3, PANEL_3_STRING_4, HargaKamar);
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(4,i), HargaKamar);
			j++;
			MessagePopup ("Pendataan Berhasil", "Data Berhasil Dimasukan!");
			break;
		}
	}
	return 0;
}


//|============================================================================================|//
//|===================================PANEL DAFTAR KAMAR=======================================|//
//|============================================================================================|//
//|============================Fungsi Pada Panel Daftar Kamar==================================|//
//|============================================================================================|//

int CVICALLBACK ComboTpKamar (int panel, int control, int event,
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
			if (strcmp (value, "SINGLE ROOM") == 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "1 Bed, TV, AC, Lemari"); 
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 250000"); 
			}
			else if (strcmp (value, "TWIN ROOM")== 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "2 Bed, TV, AC, Lemari, Bathtub"); 
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 350000");
			}
			else if (strcmp (value, "TRIPLE ROOM")== 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "3 Bed + Spray Premium, TV, 2 AC, Lemari, Bathtub"); 
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 450000"); 
			}
			else if (strcmp (value, "JUNIOR SUITE ROOM")== 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "Ruang Tamu, 1 Bed, TV,  AC, Lemari "); 
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 650000");
			}
			else if (strcmp (value, "DELUXE SUITE ROOM")== 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "Ruang Tamu, Ruang Makan, 2 Bed, TV, AC, Lemari, Bathtub"); 
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 750000"); 
			}
			else if (strcmp (value, "PRESIDENT SUITE ROOM")== 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "Ruang Tamu, Ruang Makan, 3 Bed + Spray Premium, TV, 2 AC, Lemari, Bathtub"); 
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 950000");
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
