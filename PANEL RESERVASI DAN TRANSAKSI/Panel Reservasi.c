#include "combobox.h"
#include <cvirte.h>		
#include <userint.h>
#include "Panel Reservasi.h"

static int panel4;

int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panel4 = LoadPanel (0, "Panel Reservasi.uir", PANEL_4)) < 0)
		return -1;
	Combo_NewComboBox (panel4, PANEL_4_COMBO);
	DisplayPanel (panel4);
	RunUserInterface ();
	DiscardPanel (panel4);
	return 0;
}

int CVICALLBACK panel_rs (int panel, int event, void *callbackData,
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

int CVICALLBACK combotipekamar (int panel, int control, int event,
								void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK Tombol_Hitung (int panel, int control, int event,
							   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

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
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK Tombol_Tmbh (int panel, int control, int event,
							 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:

			break;
	}
	return 0;
}

int CVICALLBACK picture_reservasi (int panel, int control, int event,
								   void *callbackData, int eventData1, int eventData2)
{
	return 0;
}
