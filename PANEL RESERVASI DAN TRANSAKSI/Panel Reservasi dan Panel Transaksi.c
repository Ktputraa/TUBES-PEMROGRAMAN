#include <ansi_c.h>
#include <formatio.h>
#include "combobox.h"
#include <cvirte.h>		
#include <userint.h>
#include "Panel Reservasi.h"
#include "Panel Transaksi.h"


//|============================================================================================|//
//|=======================================Constants============================================|//
//|============================================================================================|//
//|=========================================Types==============================================|//
//|============================================================================================|//
//|==================================Static global variables===================================|//
//|============================================================================================|//

static int panelHandle_4 = 0, panelHandle_5 = 0;
void InputComboValues (int panel, int control);
int j=1;
int m=1;

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
	if ((panelHandle_4 = LoadPanel (0, "Panel Reservasi.uir", PANEL_4)) < 0)
		return -1;
	if ((panelHandle_5 = LoadPanel (0, "Panel Transaksi.uir", PANEL_5)) < 0)
		return -1;
	
	DisplayPanel (panelHandle_4);
	
	Combo_NewComboBox (panelHandle_4, PANEL_4_COMBO);
	InputComboValues (panelHandle_4, PANEL_4_COMBO);
	
	RunUserInterface ();
	
	Combo_DiscardComboBox (panelHandle_4, PANEL_4_COMBO);
	DiscardPanel (panelHandle_4);
	
	return 0;
}


//=============================================================================================|//
//===============================UI callback function prototypes===============================|//
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
/// HIFN Exit when the user dismisses the panel.

int CVICALLBACK panel_rs (int panel, int event, void *callbackData,
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

int CVICALLBACK panel_tr (int panel, int event, void *callbackData,
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
//|=====================MENAMBAH GAMBAR PADA PANEL DATA RESERVASI==============================|//
//|============================================================================================|//

int CVICALLBACK picture_reservasi (int panel, int control, int event,
						 	 void *callbackData, int eventData1, int eventData2)
{
	return 0;
}
int CVICALLBACK picture_transaksi (int panel, int control, int event,
								   void *callbackData, int eventData1, int eventData2)
{
	return 0;
}


//|============================================================================================|//
//|=====================================PANEL RESERVASI========================================|//
//|============================================================================================|//
//|=====================Fungsi Menambah Data Ke Table Pada Panel Reservasi=====================|//
//|============================================================================================|//

int CVICALLBACK Tombol_Tmbh (int panel, int control, int event,
						void *callbackData, int eventData1, int eventData2)
{
	char KodeBok[50],namapmsn[100],tipe[50],NoKmr[50],Fasilitas[100],Harga[100],LamaInap[30], waktu[50];
	int totalharga;

	switch (event)
	{
		
		case EVENT_COMMIT:

		for(int l=m;l<=m;)
		{
			GetCtrlVal (panelHandle_4, PANEL_4_STRING, KodeBok);
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(1,l), KodeBok); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_2, namapmsn); 
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(2,l), namapmsn); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_3, NoKmr); 
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(3,l), NoKmr); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_COMBO, tipe); 
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(4,l), tipe); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_4,Fasilitas); 
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(5,l), Fasilitas);
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_5, LamaInap); 
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(6,l), LamaInap); 
		
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_6, Harga); 
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(7,l), Harga); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_7, waktu); 
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(8,l), waktu); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_NUMERIC, &totalharga); 
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(9,l), totalharga); 
			m++; 
			MessagePopup ("Reservasi Berhasil", "Data berhasil dimasukan!");
			break;
		}
		
	}
	return 0;
	
}


//|============================================================================================|//
//|======================================PANEL RESERVASI=======================================|//
//|============================================================================================|//
//|=========================Membuat Drop Down List Pada Panel Reservasi========================|//
//|============================================================================================|//

int CVICALLBACK combotipekamar (int panel, int control, int event,
					  			 void *callbackData, int eventData1, int eventData2)
{
	char *value;
	int  length;
	
	
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlAttribute (panel, control, ATTR_STRING_TEXT_LENGTH, &length);
			value = (char *)malloc(length+1); //mendapatkan panjang value yang cukup//
			StringUpperCase (value);
			if (strcmp (value, "SINGLE ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r)); 
			
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, "1 Bed, TV, AC, Lemari"); 
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "250000"); 
			}
			else if (strcmp (value, "TWIN ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r));
				
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, "2 Bed, TV, AC, Lemari, Bathtub"); 
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "350000"); 
			}
			else if (strcmp (value, "TRIPLE ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r)); 
				
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, "3 Bed + Spray Premium, TV, 2 AC, Lemari, Bathtub"); 
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "450000"); 
			}
			else if (strcmp (value, "JUNIOR SUITE ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r)); 
				
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, "Ruang Tamu, 1 Bed, TV,  AC, Lemari "); 
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "650000"); 
			}
			else if (strcmp (value, "DELUXE SUITE ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r)); 
				 
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, "Ruang Tamu, Ruang Makan, 2 Bed, TV, AC, Lemari, Bathtub"); 
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "750000"); 
			}
			else if (strcmp (value, "PRESIDENT SUITE ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r));
				
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, "Ruang Tamu, Ruang Makan, 3 Bed + Spray Premium, TV, 2 AC, Lemari, Bathtub"); 
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "950000"); 
			}
			break;
	}
	return 0;
}

int CVICALLBACK Tombol_Hitung (int panel, int control, int event,
						   void *callbackData, int eventData1, int eventData2)
{
	char a[20],b[10];
	int nilai1,nilai2,nilai3;

	
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_5, a);
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_6, b);
			nilai1 = atoi(a);//konversi nilai dari char ke int
			nilai2 = atoi(b);//konversi nilai dari char ke int
			nilai3 = (nilai1*nilai2);
			
			
			SetCtrlVal (panelHandle_4, PANEL_4_NUMERIC, nilai3);
			break;
	}
	return 0;
}

int CVICALLBACK Tombol_Kembali (int panel, int control, int event,
							void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_4);
			DisplayPanel (panelHandle_5);
			break;
	}
	return 0;
}


//|============================================================================================|//
//|======================================PANEL PEMBAYARAN======================================|//
//|============================================================================================|//
//|=====================Fungsi Membuat Print Kuitansi Pada Panel PEMBAYARAN====================|//
//|============================================================================================|//


int CVICALLBACK Tombol_Print (int panel, int control, int event,
					   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			
			PrintPanel (panelHandle_5, "", 1, VAL_FULL_PANEL, 1);
			break;
	}
	return 0;
}


//|============================================================================================|//
//|======================================PANEL PEMBAYARAN======================================|//
//|============================================================================================|//
//|===================Fungsi Membuat Menambahkan Data Pada Panel PEMBAYARAN====================|//
//|============================================================================================|//

int CVICALLBACK Tombol_Klik	(int panel, int control, int event,
					  void *callbackData, int eventData1, int eventData2)
{
	char namapemesan[100],tpkamar[50],NoKmr[50],Fasilitas[100],hrgkamar[100],LamaInap[30], KdBoking[20], wkt[50];
	int total;
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_7, wkt); 
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_9, wkt); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING, KdBoking);
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_8, KdBoking);
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_2, namapemesan);
			SetCtrlVal (panelHandle_5, PANEL_5_STRING, namapemesan); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_3, NoKmr); 
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_2, NoKmr); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_COMBO, tpkamar); 
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_6, tpkamar); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_4, Fasilitas);
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_3, Fasilitas); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_5, LamaInap); 
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_7, LamaInap); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_6, hrgkamar);
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_4, hrgkamar); 
			
			GetCtrlVal (panelHandle_4, PANEL_4_NUMERIC, &total); 
			SetCtrlVal (panelHandle_5, PANEL_5_NUMERIC_2, total); 
			break;
	}
	return 0;
}

int CVICALLBACK Kembali (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_5);
			QuitUserInterface(0);
			break;
	}
	return 0;
}
