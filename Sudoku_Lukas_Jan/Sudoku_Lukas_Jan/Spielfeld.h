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
	Spielfeld(int zeile, int spalte);
	int getZeile() { return zeile; }
	int getSpalte() { return spalte; }
	void setZeile();
	void setSpalte();
	bool checkWin(CZelle feld[9][9]);
	bool checkZeile(CZelle feld[9][9], int zeile, int zahl);
	bool checkSpalte(CZelle feld[9][9], int spalte, int zahl);
	bool checkNeunMal(CZelle feld[9][9], int zahl);
	void ausgabeSpielfeld(CZelle feld[9][9]);
	void neustarten();
	void auslesen(int auswahl);
};

