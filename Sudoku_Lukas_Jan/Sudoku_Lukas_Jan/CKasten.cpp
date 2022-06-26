
#include "CKasten.h"

CKasten::CKasten(CZelle* zellen[9], int positionX, int positionY) : CAnsammlung(zellen)
{
	this->positionX = positionX;
	this->positionY = positionY;
}
