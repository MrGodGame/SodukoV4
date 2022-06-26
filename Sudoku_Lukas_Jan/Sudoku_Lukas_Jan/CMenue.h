#pragma once
#include "Spielfeld.h"

class CMenue
{
private:
	int schwierigkeit;
	int anzahlMoeglicheFelher;
	Spielfeld Sudoku;
public:
	CMenue();
	CMenue(int schwierigkeit, int anzahlMoeglicheFelder);
	~CMenue();
	int getSchwierkeit();
	int getAnzahlMoeglicheFehler();
	void setSchwierigkeit(int schwierigkeit);
	void setAnzahlMoeglicheFehler(int anzahlMoeglicheFelher);
	int neuesSpiel();
	void schwierigkeitsAuswahl();
	Spielfeld* getSpielfeld() { return &Sudoku; };
};

