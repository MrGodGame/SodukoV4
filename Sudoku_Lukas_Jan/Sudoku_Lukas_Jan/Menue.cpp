#include "Menue.h"
#include <iomanip>
#include <iostream>
using namespace std;

Menue::Menue()
{

}

Menue::Menue(int schwierigkeit, int anzahlMoeglicheFehler)
{
	this->schwierigkeit = schwierigkeit;
	this->anzahlMoeglicheFelher = anzahlMoeglicheFelher;
}

Menue::~Menue()
{

}

int Menue::getSchwierkeit()
{
	return schwierigkeit;
}

int Menue::getAnzahlMoeglicheFehler()
{
	return anzahlMoeglicheFelher;
}

void Menue::setSchwierigkeit(int schwierigkeit)
{
	this->schwierigkeit = schwierigkeit;
}

void Menue::setAnzahlMoeglicheFehler(int anzahlMoeglicheFelher)
{
	this->anzahlMoeglicheFelher = anzahlMoeglicheFelher;
}

int Menue::neuesSpiel()
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
		cout << 1;
	}
	else if (Auswahl == 1)
	{
		return 0;
	}
}

void Menue::schwierigkeitsAuswahl()
{
	int temp;
	cout << "Waehle deine Schwierigkeit" << endl
		<< "leicht[1]"
		<< "mittel[2]"
		<< "schwer[3]";
	cin >> temp;

	this->schwierigkeit = temp;

	if (schwierigkeit == 1)
	{
		cout << "schwierigkeit leicht wurde gew�hlt" << endl;
		this->anzahlMoeglicheFelher = 5;
		cout << "Die Anzahl der Moeglichen Fehler betr�gt: " << anzahlMoeglicheFelher << endl;
	}

	if (schwierigkeit == 2)
	{
		cout << "schwierigkeit mittel wurde gew�hlt" << endl;
		this->anzahlMoeglicheFelher = 4;
		cout << "Die Anzahl der Moeglichen Fehler betr�gt: " << anzahlMoeglicheFelher << endl;

	}

	if (schwierigkeit == 3)
	{
		cout << "schwierigkeit schwer wurde gew�hlt" << endl;
		this->anzahlMoeglicheFelher = 3;
		cout << "Die Anzahl der Moeglichen Fehler betr�gt: " << anzahlMoeglicheFelher << endl;
	}
	system("PAUSE");
}