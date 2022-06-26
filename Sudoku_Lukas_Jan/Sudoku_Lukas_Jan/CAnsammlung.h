#pragma once
#include "CZelle.h"
class CAnsammlung
{
private:
	CZelle* zellen[9];
	bool vollstaendig; 
public:
	CAnsammlung(CZelle* zellen[9]);
	~CAnsammlung();
	bool checkVollstaendig();
	int checkWin();
};

