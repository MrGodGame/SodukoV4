#pragma once
#include "Spielfeld.h"

class CZelle
{
private:
	int wertZelle;
	bool belegt;
	int positionSpalte;
	int positionZeile;
	Spielfeld* Sudoku;
public:	
	CZelle();
	CZelle(int wertZelle, bool belegt,Spielfeld* Sudoku);
	~CZelle();
	void setWertZelle(int wertZelle);
	void setBelegt(bool belegt);
	void setPositionSpalte(int positionSpalte);
	void setPositionZeile(int positionZeile);
	int getWertZelle();
	int getPositionSpalte();
	int getPositionZeile();
	void wertEinfuegen(int zeile, int spalte, int wertZelle);
	bool checkBelegt();

};

