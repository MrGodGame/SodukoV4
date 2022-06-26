#pragma once

class Menue
{
private:
	int schwierigkeit;
	int anzahlMoeglicheFelher;
public:
	Menue();
	Menue(int schwierigkeit, int anzahlMoeglicheFelder);
	~Menue();
	int getSchwierkeit();
	int getAnzahlMoeglicheFehler();
	void setSchwierigkeit(int schwierigkeit);
	void setAnzahlMoeglicheFehler(int anzahlMoeglicheFelher);
	int neuesSpiel();
	void schwierigkeitsAuswahl();
};
