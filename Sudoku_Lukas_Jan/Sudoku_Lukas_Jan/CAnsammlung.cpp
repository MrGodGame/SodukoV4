
#include "CAnsammlung.h"

CAnsammlung::CAnsammlung(CZelle* zellen[9])
{
    vollstaendig = false;
    for (int i = 0; i != 9; i++)
    {
        this->zellen[i] = zellen[i];
    }
}

bool CAnsammlung::checkVollstaendig()
{
    for (int i = 0; i != 9; i++)
    {
        if (zellen[i]->getWertZelle() == 0)
            return false;
    }
    return true;
    
}

int CAnsammlung::checkWin()
{
    if (!checkVollstaendig())
        return 0;

    for (int i = 0; i != 9; i++)
    {
        for (int j = i; j != 9; j++)
        {
            if (zellen[i]->getWertZelle() == zellen[j]->getWertZelle())
            {
                return 0;
            }
        }
    }
    return 1;
}
