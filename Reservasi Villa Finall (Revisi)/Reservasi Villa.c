
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\//\\//\\//
//=============================================================================================\\
\\=============================================================================================//
//|============================RESERVASI MEMPHIS VILLA========================================|\\
\\|===========================================================================================|//																   
//|===========================================================================================|\\
\\|	    Tujuan Aplikasi Boking Villa ini di buat untuk  memudahkan dalam Pemesanan kamar      |//
//|      pada Villa yang mencangkup pengecekan tipe kamar, dan detail harga dari setiap       |\\
\\|        Tipe kamar dan juga memberi bukti transaksi yang sah kepada para pemesan           |//
//|===========================================================================================|\\
\\|===========================================================================================|//
//|===========================================================================================|\\
\\|===========================================================================================|//
//=============================================================================================\\												
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\//\\//\\//


//|===========================================================================================|//
//|====================================+=Library=+============================================|//														   
//|===========================================================================================|//
	
#include "nivision.h"
#include <formatio.h>
#include "combobox.h"
#include <ansi_c.h>
#include <cvirte.h>		
#include <userint.h>
#include "toolbox.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Panel Utama.h"
#include "Panel Menu.h"
#include "Panel Daftar Kamar.h"
#include "Panel Reservasi.h"
#include "Panel Transaksi.h"
	

//|============================================================================================|//
//|=======================================Constants============================================|//
//|============================================================================================|//
//|=========================================Types==============================================|//
//|============================================================================================|//
//|==================================Static global variables===================================|//
//|============================================================================================|//
	
//Deklarasi variabel pada setiap panel//	
static int panelHandle = 0, panelHandle_2= 0, panelHandle_3 = 0, panelHandle_4 = 0, panelHandle_5 = 0;
void InputComboValues (int panel, int control); 

//variabel untuk looping pada panel daftar kamar dan reservasi//
int j=1;
int m=1;
	  

//|============================================================================================|//
//|=======================================Static functions=====================================|//
//|============================================================================================|//
//|========================================Global variables====================================|//
//|============================================================================================|//
//|=========================================Global functions===================================|//
//|============================================================================================|//

int main (int argc, char *argv[])
{
	//Merupakan perintah untuk load panel/memuat panel//
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	
	if ((panelHandle = LoadPanel (0, "Panel Utama.uir", PANEL)) < 0)
		return -1;
	if ((panelHandle_2 = LoadPanel (0, "Panel Menu.uir", PANEL_2)) < 0)
		return -1;
	if ((panelHandle_3 = LoadPanel (0, "Panel Daftar Kamar.uir", PANEL_3)) < 0)
		return -1;
	if ((panelHandle_4 = LoadPanel (0, "Panel Reservasi.uir", PANEL_4)) < 0)
		return -1;
	if ((panelHandle_5 = LoadPanel (0, "Panel Transaksi.uir", PANEL_5)) < 0)
		return -1;
	
	DisplayPanel (panelHandle); //mulai menampilkan panel dari panelHandle yang merupakan variabel dari Panel Utama
	
	//fungsi untuk membuat	combo pada panel daftar kamar dan reservasi//
	Combo_NewComboBox (panelHandle_3, PANEL_3_COMBO);
	InputComboValues (panelHandle_3, PANEL_3_COMBO);
	Combo_NewComboBox (panelHandle_4, PANEL_4_COMBO);
	InputComboValues (panelHandle_4, PANEL_4_COMBO);
	
	RunUserInterface ();
	
	Combo_DiscardComboBox (panelHandle_3, PANEL_3_COMBO);
	Combo_DiscardComboBox (panelHandle_4, PANEL_4_COMBO);
	DiscardPanel (panelHandle);
	
	return 0;
}


//=============================================================================================|//
//===================================INPUT VALUE PADA COMBO====================================|//
//=============================================================================================|//

void InputComboValues (int panel, int control)//Menambah value combo pada tipekamar//
{
	Combo_InsertComboItem (panel, control, -1, "SINGLE ROOM");
	Combo_InsertComboItem (panel, control, -1, "TWIN ROOM");
	Combo_InsertComboItem (panel, control, -1, "TRIPLE ROOM");
	Combo_InsertComboItem (panel, control, -1, "JUNIOR SUITE ROOM");
	Combo_InsertComboItem (panel, control, -1, "DELUXE SUITE ROOM");
	Combo_InsertComboItem (panel, control, -1, "PRESIDENT SUITE ROOM");
}


//Syntax CVICALLBACK berfungsi sebagai argumen kepada fungsi dan kemudian fungsi didalamnya akan dieksekusi//


//|============================================================================================|//
//|=========================MEMBERI TANDA SILANG DIPOJOK KANAN ATAS============================|//
//|============================================================================================|///
//|==========================I Kadek Ananda Krisna Wiralaksana=================================|//
//|============================================================================================|//

//Panel Utama//
int CVICALLBACK panel_login (int panel, int event, void *callbackData,
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

//Panel Menu//
int CVICALLBACK panel_menu (int panel, int event, void *callbackData,
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

//Panel Daftar Kamar//
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

//Panel Reservasi//
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

//Panel Transaksi//
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
//|===============================MENAMPILKAN GAMBAR PADA PANEL================================|//
//|============================================================================================|//
//|============================I Kadek Ananda Krisna Wiralaksana===============================|//
//|============================================================================================|//

//Panel Utama//
int CVICALLBACK picture_login (int panel, int control, int event,
						 	   void *callbackData, int eventData1, int eventData2)
{
	return 0;
}

//Panel Menu//
int CVICALLBACK picture_menu (int panel, int control, int event,
						 	  void *callbackData, int eventData1, int eventData2)
{
	return 0;
}

//Panel Daftar Kamar//
int CVICALLBACK picture_daftarkamar (int panel, int control, int event,
						       	   void *callbackData, int eventData1, int eventData2)
{
	return 0;
}

//Panel Reservasi//
int CVICALLBACK picture_reservasi (int panel, int control, int event,
						 	       void *callbackData, int eventData1, int eventData2)
{
	return 0;
}

//Panel Transaksi//
int CVICALLBACK picture_transaksi (int panel, int control, int event,
								    void *callbackData, int eventData1, int eventData2)
{
	return 0;
}


//|============================================================================================|//
//|=====================================PANEL UTAMA LOGIN======================================|//
//|============================================================================================|//
//|===============================Fungsi Dalam Panel Utama Login===============================|//
//|=====================================I Ketut Putra Jaya=====================================|//
//|============================================================================================|//

//Tombol login//
int CVICALLBACK login (int panel, int control, int event,
					   void *callbackData, int eventData1, int eventData2)
{
	//Mendeklarasikan Variabel dan memberi pointer
	char *user, *pass;
	int length_user, length_pass;
	
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlAttribute (panelHandle, PANEL_STRING, ATTR_STRING_TEXT_LENGTH,  &length_user);
			user=malloc(sizeof(char)*(length_user+1));//mendapatkan panjang dari memory yang cukup pada variabel user//
			GetCtrlAttribute (panelHandle, PANEL_STRING_2, ATTR_STRING_TEXT_LENGTH, &length_pass);
			pass=malloc(sizeof(char)*(length_pass+1));//mendapatkan panjang dari memory yang cukup pada variabel pass//
			GetCtrlVal (panelHandle, PANEL_STRING, user);//mengambil value yang diinput oleh user//
			GetCtrlVal (panelHandle, PANEL_STRING_2, pass);
			if(strcmp(user,"memphis")==0 && strcmp(pass, "14022")==0)//kondisi//
			{
				MessagePopup ("Login Berhasil", "Selamat Datang di Memphis Villa");
				HidePanel (panelHandle); //menyembunyikan panel//
				DisplayPanel (panelHandle_2); //menampilkan panel//
			}
			else
			{
				MessagePopup ("Login Tidak Berhasil", "Silahkan Masukkan Username dan Password Kembali! ");
			}
			break;
	}
	return 0;
}

//Tombol Cancel//
int CVICALLBACK cancel (int panel, int control, int event,
						void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0); //keluar dari panel//
			break;
	}
	return 0;
}


//|============================================================================================|//
//|=======================================PANEL MENU UTAMA=====================================|//
//|============================================================================================|//
//|=============Fungsi Dalam Panel Menu Utama Untuk Menampilkan Panel Beikutnya================|//
//|======================================I Ketut Putra Jaya====================================|//
//|============================================================================================|//

//Tombol Daftar Kamar//
int CVICALLBACK Tombol_DK (int panel, int control, int event,
					       void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_2); //menyembunyikan panel//
			DisplayPanel (panelHandle_3); //menampilkan panel data kamar//
			RunUserInterface ();
			break;
	}
	return 0;
}

//Tombol Reservasi//
int CVICALLBACK Tombol_RS (int panel, int control, int event,
						   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_2); //menyembunyikan panel//
			DisplayPanel (panelHandle_4); // menampilkan panel//
			RunUserInterface ();
			break;
	}
	return 0;
}

//Tombol Transaksi//
int CVICALLBACK Tombol_TR (int panel, int control, int event,
						   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_2); //menyembunyikan panel//
			DisplayPanel (panelHandle_5); //menampilkan panel//
			RunUserInterface ();
			break;
	}
	return 0;
}

//Tombol Keluar//
int CVICALLBACK Tombol_Keluar (int panel, int control, int event,
						       void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0); //keluar dari panel//
			break;
	}
	return 0;
}


//|============================================================================================|//
//|===================================PANEL DAFTAR	KAMAR======================================|//
//|============================================================================================|//
//|============Fungsi Memasukkan Data Ke Dalam Tabel Pada Panel Daftar Kamar===================|//
//|===============================I Kadek Ananda Krisna Wiralaksana============================|//
//|============================================================================================|//

//Tombol Tambah//
int CVICALLBACK Tombol_Tambah (int panel, int control, int event,
							   void *callbackData, int eventData1, int eventData2) 
{
	char NoKamar[50], TipeKamar[50], Fasilitas[200], HargaKamar[100];
	
	switch (event)
	{
		case EVENT_COMMIT:
			
		for(int i=j;i<=j;) //looping untuk melanjutkan memasukkan data yang baru ke baris tabel selanjutnya//
		{
			GetCtrlVal (panelHandle_3, PANEL_3_STRING, NoKamar); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(1,i), NoKamar); //memasukkan value yang sudah diinput oleh user kedalam tabel//
				
			GetCtrlVal (panelHandle_3, PANEL_3_COMBO, TipeKamar); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(2,i), TipeKamar); //memasukkan value yang sudah diinput oleh user kedalam tabel//
				
			GetCtrlVal (panelHandle_3, PANEL_3_STRING_3, Fasilitas); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(3,i), Fasilitas); //memasukkan value yang sudah diinput oleh user kedalam tabel//
				
			GetCtrlVal (panelHandle_3, PANEL_3_STRING_4, HargaKamar); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_3, PANEL_3_TABLE, MakePoint(4,i), HargaKamar); //memasukkan value yang sudah diinput oleh user kedalam tabel//
			j++;
			MessagePopup ("Pendataan Berhasil", "Data Berhasil Dimasukan!");
			break;
		}
	}
return 0;
}


//|============================================================================================|//
//|====================================PANEL DAFTAR KAMAR======================================|//
//|============================================================================================|//
//|==============================Fungsi Pada Panel Daftar Kamar================================|//
//|===========================I Kadek Ananda Krisna Wiralaksana================================|//
//|============================================================================================|//

//membuat drop down list//
//combo tipe kamar pada panel daftar kamar//
int CVICALLBACK ComboTpKamar (int panel, int control, int event,
								 void *callbackData, int eventData1, int eventData2)
{
	char *value;
	int  length;
	
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlAttribute (panel, control, ATTR_STRING_TEXT_LENGTH, &length);
			value = (char *)malloc(length+1); //mendapatkan panjang dari memory yang cukup pada variabel value//
			StringUpperCase (value);
			if (strcmp (value, "SINGLE ROOM") == 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "1 Bed, TV, AC, Lemari"); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 250000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			else if (strcmp (value, "TWIN ROOM")== 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "2 Bed, TV, AC, Lemari, Bathtub"); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 350000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			else if (strcmp (value, "TRIPLE ROOM")== 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "3 Bed + Spray Premium, TV, 2 AC, Lemari, Bathtub"); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 450000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			else if (strcmp (value, "JUNIOR SUITE ROOM")== 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "Ruang Tamu, 1 Bed, TV,  AC, Lemari "); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 650000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			else if (strcmp (value, "DELUXE SUITE ROOM")== 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "Ruang Tamu, Ruang Makan, 2 Bed, TV, AC, Lemari, Bathtub"); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 750000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			else if (strcmp (value, "PRESIDENT SUITE ROOM")== 0)
			{
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_3, "Ruang Tamu, Ruang Makan, 3 Bed + Spray Premium, TV, 2 AC, Lemari, Bathtub"); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				SetCtrlVal (panelHandle_3, PANEL_3_STRING_4, "Rp. 950000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			break;		
	}
	return 0;
}


//Tombol Kembali//
int CVICALLBACK Tombol_Back (int panel, int control, int event,
						 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_3); //menyembunyikan panel//
			DisplayPanel (panelHandle_2); //menampilkan panel//
			QuitUserInterface (0);
			break;
	}
	return 0;
}


//|============================================================================================|//
//|=====================================PANEL RESERVASI========================================|//
//|============================================================================================|//
//|=====================Fungsi Menambah Data Ke Table Pada Panel Reservasi=====================|//
//|====================================I Ketut Putra Jaya======================================|//
//|============================================================================================|//

//Tombol Tambah//
int CVICALLBACK Tombol_Tmbh (int panel, int control, int event,
							 void *callbackData, int eventData1, int eventData2)
{
	char KodeBok[50],namapmsn[100],tipe[50],NoKmr[50],Fasilitas[200],Harga[100],LamaInap[30],waktu[50];
	int	totalharga;
	  
	switch (event)
	{
		case EVENT_COMMIT:

		for(int l=m;l<=m;) //looping untuk melanjutkan memasukkan data yang baru ke baris tabel selanjutnya//
		{
			GetCtrlVal (panelHandle_4, PANEL_4_STRING, KodeBok); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(1,l), KodeBok);//memasukkan value yang sudah diinput oleh user kedalam tabel//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_2, namapmsn); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(2,l), namapmsn); //memasukkan value yang sudah diinput oleh user kedalam tabel//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_3, NoKmr); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(3,l), NoKmr); //memasukkan value yang sudah diinput oleh user kedalam tabel//
			
			GetCtrlVal (panelHandle_4, PANEL_4_COMBO, tipe); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(4,l), tipe); //memasukkan value yang sudah diinput oleh user kedalam tabel//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_4,Fasilitas); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(5,l), Fasilitas); //memasukkan value yang sudah diinput oleh user kedalam tabel//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_5, LamaInap); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(6,l), LamaInap); //memasukkan value yang sudah diinput oleh user kedalam tabel//
		
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_6, Harga); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(7,l), Harga); //memasukkan value yang sudah diinput oleh user kedalam tabel//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_7, waktu); //untuk mengambil value yang akan diinput oleh user//
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(8,l), waktu); //memasukkan value yang sudah diinput oleh user kedalam tabel//
			
			GetCtrlVal (panelHandle_4, PANEL_4_NUMERIC, &totalharga); //mengatur secara otomatis hasil nilainya dan ditampilkan//
			SetTableCellVal (panelHandle_4, PANEL_4_TABLE, MakePoint(9,l), totalharga); //memasukkan value yang sudah diinput oleh user kedalam tabel//
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
//|================================Fungsi Pada Panel Reservasi=================================|//
//|=============================I Kadek Ananda Krisna Wiralaksana==============================|//
//|============================================================================================|//

//combo tipe kamar pada panel reservasi//
int CVICALLBACK combotipekamar (int panel, int control, int event,
					  		 	void *callbackData, int eventData1, int eventData2)
{
	char *value, nomkmr[50], fslts[100];
	int  length;
	
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlAttribute (panel, control, ATTR_STRING_TEXT_LENGTH, &length);
			value = (char *)malloc(length+1); //mendapatkan panjang dari memory yang cukup pada variabel value//
			StringUpperCase (value);
			if (strcmp (value, "SINGLE ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r)); //mengatur secara otomatis waktunya dan ditampilkan//
			
				GetCtrlVal (panelHandle_3, PANEL_3_STRING,	nomkmr); //mengambil value yang akan di input pada panel daftar kamar bagian no_kamar//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_3, nomkmr); //mengatur secara otomatis value yang didapat dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING_3, fslts); //mengambil value yang akan di input pada panel daftar kamar bagian fasilitas//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, fslts); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "250000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			else if (strcmp (value, "TWIN ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r)); //mengatur secara otomatis waktunya dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING, nomkmr); //mengambil value yang akan di input pada panel daftar kamar bagian no_kamar//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_3, nomkmr); //mengatur secara otomatis value yang didapat dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING_3, fslts); //mengambil value yang akan di input pada panel daftar kamar bagian fasilitas//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, fslts); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "350000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			else if (strcmp (value, "TRIPLE ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r)); //mengatur secara otomatis waktunya dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING, 	nomkmr); //mengambil value yang akan di input pada panel daftar kamar bagian no_kamar//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_3, nomkmr); //mengatur secara otomatis value yang didapat dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING_3, fslts); //mengambil value yang akan di input pada panel daftar kamar bagian fasilitas//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, fslts); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "450000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			else if (strcmp (value, "JUNIOR SUITE ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r)); //mengatur secara otomatis waktunya dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING, 	nomkmr); //mengambil value yang akan di input pada panel daftar kamar bagian no_kamar//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_3, nomkmr); //mengatur secara otomatis value yang didapat dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING_3, fslts); //mengambil value yang akan di input pada panel daftar kamar bagian fasilitas//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, fslts); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "650000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			else if (strcmp (value, "DELUXE SUITE ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r)); //mengatur secara otomatis waktunya dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING, 	nomkmr); //mengambil value yang akan di input pada panel daftar kamar bagian no_kamar//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_3, nomkmr); //mengatur secara otomatis value yang didapat dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING_3, fslts); //mengambil value yang akan di input pada panel daftar kamar bagian fasilitas//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, fslts); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "750000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			else if (strcmp (value, "PRESIDENT SUITE ROOM")== 0)
			{
				//MEMBUAT WAKTU OTOMATIS//
				struct tm * r; //struct tm merupakan struktur waktu//
				time_t s; //time_t adalah tipe waktu//
				s = time (NULL); //time adalah waktu saat ini//
				r = localtime (&s); //localtime digunakan untuk mengubah tipe time_t ke tm sebagai waktu local//
				//asctime untuk mengubah tipe tm ke char//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_7, asctime(r)); //mengatur secara otomatis waktunya dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING, 	nomkmr); //mengambil value yang akan di input pada panel daftar kamar bagian no_kamar//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_3, nomkmr); //mengatur secara otomatis value yang didapat dan ditampilkan//
				
				GetCtrlVal (panelHandle_3, PANEL_3_STRING_3, fslts); //mengambil value yang akan di input pada panel daftar kamar bagian fasilitas//
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_4, fslts); //mengatur secara otomatis fasilitasnya dan ditampilkan//
				
				SetCtrlVal (panelHandle_4, PANEL_4_STRING_6, "950000"); //mengatur secara otomatis harganya dan ditampilkan//
			}
			
			break;
	}
	return 0;
}

//Tombol Hitung//
int CVICALLBACK Tombol_Hitung (int panel, int control, int event,
						   	   void *callbackData, int eventData1, int eventData2)
{
	//a merupakan variabel yang mewakili text lama inap//
	//b merupakan variabel yang mewakili text harga kamar//
	char a[20],b[30];
	int nilai1,nilai2,nilai3;
	
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_5, a); //mengambil nilai yang diinput user//
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_6, b); //mengambil nilai yang diinput user//
			nilai1 = atoi(a);//konversi nilai dari char ke int
			nilai2 = atoi(b);//konversi nilai dari char ke int
			nilai3 = (nilai1*nilai2);
			
			SetCtrlVal (panelHandle_4, PANEL_4_NUMERIC, nilai3); //mengatur secara otomatis hasil nilainya dan ditampilkan//
			break;
	}
	return 0;
}

//Tombol Kembali//
int CVICALLBACK Tombol_Kembali (int panel, int control, int event,
							void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_4); //menyembunyikan panel//
			DisplayPanel (panelHandle_2); //menampilkan panel//
			QuitUserInterface (0);
			break;
	}
	return 0;
}


//|============================================================================================|//
//|=====================================PANEL TRANSAKSI========================================|//
//|============================================================================================|//
//|===================================Fungsi Membuat Kuitansi==================================|//
//|===============================I Kadek Ananda Krisna Wiralaksana============================|//
//|============================================================================================|//

//Tombol Print//
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
//|======================================PANEL TRANSAKSI======================================|//
//|============================================================================================|//
//|================================Fungsi Pada Panel TRANSAKSI================================|//
//|============================================================================================|//

//Tombol Klik//
int CVICALLBACK Tombol_Klik	(int panel, int control, int event,
					 		 void *callbackData, int eventData1, int eventData2)
{
	char namapemesan[100],tpkamar[50],NoKmr[50],Fasilitas[100],hrgkamar[100],LamaInap[30], KdBoking[20], wkt[50];
	int total;
	
	switch (event)
	{
		case EVENT_COMMIT:
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_7, wkt); //untuk mengambil value yang akan diinput oleh user//
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_9, wkt); //mengatur secara otomatis waktu saat ini dan ditampilkan//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING, KdBoking); //untuk mengambil value yang akan diinput oleh user//
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_8, KdBoking); //mengatur secara otomatis value yang didapat dan ditampilkan//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_2, namapemesan); //untuk mengambil value yang akan diinput oleh user//
			SetCtrlVal (panelHandle_5, PANEL_5_STRING, namapemesan); //mengatur secara otomatis value yang didapat dan ditampilkan//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_3, NoKmr); //untuk mengambil value yang akan diinput oleh user//
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_2, NoKmr); //mengatur secara otomatis value yang didapat dan ditampilkan//
			
			GetCtrlVal (panelHandle_4, PANEL_4_COMBO, tpkamar); //untuk mengambil value yang akan diinput oleh user//
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_6, tpkamar); //mengatur secara otomatis value yang didapat dan ditampilkan//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_4, Fasilitas); //untuk mengambil value yang akan diinput oleh user//
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_3, Fasilitas); //mengatur secara otomatis value yang didapat dan ditampilkan//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_5, LamaInap); //untuk mengambil value yang akan diinput oleh user//
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_7, LamaInap); //mengatur secara otomatis value yang didapat dan ditampilkan//
			
			GetCtrlVal (panelHandle_4, PANEL_4_STRING_6, hrgkamar); //untuk mengambil value yang akan diinput oleh user//
			SetCtrlVal (panelHandle_5, PANEL_5_STRING_4, hrgkamar); //mengatur secara otomatis value yang didapat dan ditampilkan//
			
			GetCtrlVal (panelHandle_4, PANEL_4_NUMERIC, &total); //untuk mengambil value yang akan diinput oleh user//
			SetCtrlVal (panelHandle_5, PANEL_5_NUMERIC_2, total); //mengatur secara otomatis value yang didapat dan ditampilkan//
			
			break;
	}
	return 0;
}

//Tombol Kembali//
int CVICALLBACK Kembali (int panel, int control, int event,
						void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			HidePanel (panelHandle_5); //menyembunyikan panel//
			DisplayPanel (panelHandle_2); //menampilkan panel//
			QuitUserInterface (0); //Keluar dari program//
			break;
	}
	return 0;
}


