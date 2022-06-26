#include "CZelle.h"
#include "Spielfeld.h"
#include "CMenue.h"
#include <iostream>

using namespace std;

CZelle::CZelle()
{

}

CZelle::CZelle(int wertZelle, bool belegt,Spielfeld* Sudoku)
{
	this->wertZelle = wertZelle;
	this->belegt = belegt;
	this->Sudoku = Sudoku;
}

CZelle::~CZelle()
{

}

void CZelle::setWertZelle(int wertZelle)
{
	this->wertZelle = wertZelle;
}

void CZelle::setBelegt(bool belegt)
{
	this->belegt = belegt;
}

void CZelle::setPositionSpalte(int positionSpalte)
{
	this->positionSpalte = positionSpalte;
}

void CZelle::setPositionZeile(int positionZeile)
{
	this->positionZeile = positionZeile;
}

int CZelle::getWertZelle()
{
	return wertZelle;
}

int CZelle::getPositionSpalte()
{
	return positionSpalte;
}

int CZelle:: getPositionZeile()
{
	return positionZeile;
}
void CZelle::wertEinfuegen(int zeile, int spalte, int wertZelle)
{
	//if (Sudoku->checkNeunMal(wertZelle) == true)
	//{
		setWertZelle(wertZelle);
		Sudoku->ausgabeSpielfeld();
	/*}
	else
	{
		cout << "Ist schon 9 mal vorhanden" << endl;
		Sudoku->eingabe();
	}*/
}

bool CZelle::checkBelegt()
{
	if (wertZelle > 0)
		return true;
	else
		return false;
}
