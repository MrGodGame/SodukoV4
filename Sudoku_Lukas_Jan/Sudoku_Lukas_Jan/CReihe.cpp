
#include "CReihe.h"

CReihe::CReihe(CZelle* zellen[9], bool ausrichtung, int position) : CAnsammlung(zellen)
{
	this->ausrichtung = ausrichtung;
	this->position = position;
}