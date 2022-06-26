#pragma once
class CMenue
{
private:
	int schwierigkeit;
	int anzahlMoeglicheFelher;
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
};

