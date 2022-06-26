#pragma once
#include "CAnsammlung.h"
class CReihe :
    public CAnsammlung
{
private:
    bool ausrichtung; //Null gleich horizontal; Eins gleich vertikal
    int position; 
public:
    CReihe(CZelle* zellen[9], bool ausrichtung, int position);
};

