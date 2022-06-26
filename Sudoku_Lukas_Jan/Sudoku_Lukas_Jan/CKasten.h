#pragma once
#include "CAnsammlung.h"
class CKasten :
    public CAnsammlung
{
private:
    int positionX;
    int positionY;
public:
    CKasten(CZelle* zellen[9], int positionX, int positionY);
};

