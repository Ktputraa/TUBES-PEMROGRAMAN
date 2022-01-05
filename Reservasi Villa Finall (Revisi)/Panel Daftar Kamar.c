#include "combobox.h"
#include <cvirte.h>		
#include <userint.h>
#include "Panel Daftar Kamar.h"

static int panel3;

int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panel3 = LoadPanel (0, "Panel Daftar Kamar.uir", PANEL_3)) < 0)
		return -1;
	Combo_NewComboBox (panel3, PANEL_3_COMBO_2);
	Combo_NewComboBox (panel3, PANEL_3_COMBO);
	DisplayPanel (panel3);
	RunUserInterface ();
	DiscardPanel (panel3);
	return 0;
}

int CVICALLBACK panel_dk (int panel, int event, void *callbackData,
						  int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_GOT_FOCUS:

			break;
		case EVENT_LOST_FOCUS:

			break;
		case EVENT_CLOSE:

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

			break;
	}
	return 0;
}

int CVICALLBACK Tombol_Tambah (int panel, int control, int event,
							   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK picture_daftarkamar (int panel, int control, int event,
									 void *callbackData, int eventData1, int eventData2)
{
	return 0;
}

int CVICALLBACK ComboTpKamar (int panel, int control, int event,
							  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK ComboTpKmr (int panel, int control, int event,
							void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}
