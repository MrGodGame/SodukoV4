#include "CMenue.h"
#include "Spielfeld.h"
#include "CZelle.h"
#include <iomanip>
#include <iostream>

using namespace std;

CMenue:: CMenue()
{

}

CMenue::CMenue(int schwierigkeit, int anzahlMoeglicheFehler)
{
	this->schwierigkeit = schwierigkeit;
	this->anzahlMoeglicheFelher = anzahlMoeglicheFelher;
}

CMenue::~CMenue()
{

}

int CMenue:: getSchwierkeit()
{
	return schwierigkeit;
}

int CMenue:: getAnzahlMoeglicheFehler()
{
	return anzahlMoeglicheFelher;
}

void CMenue:: setSchwierigkeit(int schwierigkeit)
{
	this->schwierigkeit = schwierigkeit;
}

void CMenue:: setAnzahlMoeglicheFehler(int anzahlMoeglicheFelher)
{
	this->anzahlMoeglicheFelher = anzahlMoeglicheFelher;
}

int CMenue:: neuesSpiel()
{
	int Auswahl;
	cout << "\t" "\t" "\t" "\t" "Startseite" << endl;
	cout << char(201);

	for (int i = 0; i < 75; i++)
	{

		cout << char(205);
	}

	cout << char(187) << endl;
	cout << char(186) << "\t" "Spiel starten: [1]" << setw(51) << char(186) << endl
		<< char(204);

	for (int i = 0; i < 75; i++)
	{
		cout << char(205);
	}

	cout << char(185) << endl;

	cout << char(186) << "\t" "Spiel Beenden: [2]" << setw(51) << char(186) << endl;
	
	cout << char(200);

	for (int i = 0; i < 75; i++)
	{
		cout << char(205);
	}
	cout << char(188) << endl;;

	cout << "Auswahl: " << endl;
	cin >> Auswahl;

	if (Auswahl == 1)
	{
		schwierigkeitsAuswahl();
	}
	else if (Auswahl == 1)
	{
		return 0;
	}
}

void CMenue::schwierigkeitsAuswahl()
{
	system("cls");

	cout << "\t" "\t" "\t" "\t" "Waehle deine Schwierigkeit" << endl;
	cout << char(201);

	for (int i = 0; i < 75; i++)
	{

		cout << char(205);
	}

	cout << char(187) << endl;
	cout << char(186) << "\t" "Einfach: [1]      " << setw(51) << char(186) << endl
		<< char(204);

	for (int i = 0; i < 75; i++)
	{
		cout << char(205);
	}

	cout << char(185) << endl;

	cout << char(186) << "\t" "Mittel:  [2]      " << setw(51) << char(186) << endl;

	cout << char(204);

	for (int i = 0; i < 75; i++)
	{
		cout << char(205);
	}
	cout << char(185) << endl;


	cout << char(186) << "\t" "Schwer:  [3]      " << setw(51) << char(186) << endl;

	cout << char(200);

	for (int i = 0; i < 75; i++)
	{
		cout << char(205);
	}
	cout << char(188) << endl;;


	int temp;

	cin >> temp;

	this->schwierigkeit = temp;

	if (schwierigkeit == 1)
	{
		cout << "schwierigkeit leicht wurde gewählt" << endl;
		this->anzahlMoeglicheFelher = 5;
		cout << "Die Anzahl der Moeglichen Fehler beträgt: " << anzahlMoeglicheFelher << endl;
		//Sudoku.auslesen(schwierigkeit);
		Sudoku.ausgabeSpielfeld();
	}

	if (schwierigkeit == 2)
	{
		cout << "schwierigkeit mittel wurde gewählt" << endl;
		this->anzahlMoeglicheFelher = 4;
		cout << "Die Anzahl der Moeglichen Fehler beträgt: " << anzahlMoeglicheFelher << endl;
		Sudoku.auslesen(schwierigkeit);
		Sudoku.ausgabeSpielfeld();
	}

	if (schwierigkeit == 3)
	{
		cout << "schwierigkeit schwer wurde gewählt" << endl;
		this->anzahlMoeglicheFelher = 3;
		cout << "Die Anzahl der Moeglichen Fehler beträgt: " << anzahlMoeglicheFelher << endl;
		Sudoku.auslesen(schwierigkeit);
		Sudoku.ausgabeSpielfeld();
	}
	system("PAUSE");
}
