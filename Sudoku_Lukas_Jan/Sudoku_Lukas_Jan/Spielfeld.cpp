#include "Spielfeld.h"
#include "CZelle.h"
#include <iostream>
using namespace std;
    
Spielfeld::Spielfeld()
{
    for (int z = 0; z < 9; z++)
    {
        for (int s = 0; s < 9; s++)
        {
            feld[z][s] = new CZelle;
        }
    }
}

Spielfeld::~Spielfeld()
{

}

void Spielfeld::setZeile()
{
    this->zeile = zeile;
}

void Spielfeld::setSpalte()
{
    this->spalte = spalte;
}

bool Spielfeld::checkWin()
{
    int summe = 0;
    for (int z = 0; z < 9; z++)
    {
        for (int s = 0; s < 9; s++)
        {
            summe = summe + feld[z][s]->getWertZelle();
        }
    }

    if (summe == 405)
    {
        return true;
    }

    return false;
}


bool Spielfeld::checkNeunMal(int zahl)
{
    int summe = 0;
    for (int z = 0; z < 9; z++)
    {
        for (int s = 0; s < 9; s++)
        {
            if (zahl == feld[z][s]->getWertZelle())
            {
                summe++;
            }
        }
    }
    if (summe == 9)
    {
        return false;
    }

    if (summe < 9)
    {
        return true;
    }

}

void Spielfeld::ausgabeSpielfeld()
{
    system("cls");


    for (int z = 0; z < 9; z++)
    {
        for (int s = 0; s < 9; s++)
        {
            cout << feld[z][s]->getWertZelle();
        }
        cout << endl;
    }


    checkWin();
    eingabe();
}

void Spielfeld::neustarten()
{

    system("cls");

}

void Spielfeld::auslesen(int auswahl)
{       
    int z = 0, s = 0, tmp = 0;
    if (auswahl == 1)
    {
        FILE* datei;

        if ((fopen_s(&datei, "Einfach.csv", "r")) != NULL)
        {
            fprintf_s(stderr, "Datei konnte nicht geoeffnet werden!\n");
        }

        while ((fscanf_s(datei, "%i\n", &tmp)) != EOF)
        {
            s++;
            if (s == 8)
            {
                z++;
                s = 0;
            }
            (feld[z][s])->setWertZelle(tmp);
        }

        fclose(datei);
    }

    if (auswahl == 2)
    {
        FILE* datei;

        if ((fopen_s(&datei, "Mittel.csv", "r")) != NULL)
        {
            fprintf_s(stderr, "Datei konnte nicht geoeffnet werden!\n");
        }

        while ((fscanf_s(datei, "%i\n", &tmp)) != EOF)
        {
            s++;
            if (s == 8)
            {
                z++;
                s = 0;
            }
            (feld[z][s])->setWertZelle(tmp);
        }

        fclose(datei);
    }

    if (auswahl == 3)
    {
        FILE* datei;

        if ((fopen_s(&datei, "Schwer.csv", "r")) != NULL)
        {
            fprintf_s(stderr, "Datei konnte nicht geoeffnet werden!\n");
        }

        while ((fscanf_s(datei, "%i\n", &tmp)) != EOF)
        {
            s++;
            if (s == 8)
            {
                z++;
                s = 0;
            }
            (feld[z][s])->setWertZelle(tmp);
        }

        fclose(datei);
    }

}

bool Spielfeld::eingabe()
{
    int wertZelle = 0;
    do
    {

        cout << "Zeile: " << endl;
        cin >> zeile;
        cout << "Spalte: " << endl;
        cin >> spalte;

    } while (feld[zeile][spalte]->checkBelegt() == true);

    cout << "Welche Zahl möchten sie eingeben: ";

    cin >> wertZelle;

    feld[zeile][spalte]->wertEinfuegen(zeile, spalte, wertZelle);

    return false;
}
