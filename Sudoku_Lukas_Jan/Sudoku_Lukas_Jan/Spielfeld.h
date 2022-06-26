	#pragma once

class CZelle;

class Spielfeld
{
private:
	int zeile;
	int spalte;
	CZelle* feld[9][9];
public:
	Spielfeld();
	~Spielfeld();
	int getZeile() { return zeile; }
	int getSpalte() { return spalte; }
	void setZeile();
	void setSpalte();
	bool checkWin();
	bool checkNeunMal(int zahl);
	void ausgabeSpielfeld();
	void neustarten();
	void auslesen(int auswahl);
	void eingabe();

};

