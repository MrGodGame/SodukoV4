#pragma once
class CZelle
{
private:
	int wertZelle;
	bool belegt;
	int positionSpalte;
	int positionZeile;

public:	
	CZelle();
	CZelle(int wertZelle, bool belegt);
	~CZelle();
	void setWertZelle(int wertZelle);
	void setBelegt(bool belegt);
	void setPositionSpalte(int positionSpalte);
	void setPositionZeile(int positionZeile);
	int getWertZelle();
	int getPositionSpalte();
	int getPositionZeile();
	void wertEinfuegen(CZelle feld[9][9]);
	bool checkBelegt();

};

