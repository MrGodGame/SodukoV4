#include "Spielfeld.h"
#include "CZelle.h"
#include "CMenue.h"
#include <iostream>
using namespace std;
    
Spielfeld::Spielfeld()
{
    for (int z = 0; z < 9; z++)
    {
        for (int s = 0; s < 9; s++)
        {
            feld[z][s] = new CZelle(0, false, this);
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

    cout << char(201);

    for (int i = 0; i < 9; i++)
    {
        cout << char(205);
    } 
    cout << char(187) << endl;
    for (int z = 0; z < 9; z++)
    {
        cout << char(186);
        for (int s = 0; s < 9; s++)
        {
            cout << feld[z][s]->getWertZelle();
        }
        cout << char(186) << endl;
    }
    cout << char(200);

    for (int i = 0; i < 9; i++)
    {
        cout << char(205);
    }

    cout << char(188) << endl;

    if (checkWin() == true)
    {
        cout << "Sie haben es geschaft!!!" << endl;
    }
    else
    {
        int Auswahl = 0;

        cout << "Was wollen Sie machen?" << endl
            << "Zahl setzten[1] " << endl
            << "Neustarten  [2] " << endl
            << "Verlassen   [3] " << endl;
        cin >> Auswahl;

        if (Auswahl == 1)
        {

            for (int z = 0; z < 9; z++)
            {
                for (int s = 0; s < 9; s++)
                {
                    if (feld[z][s]->checkBelegt() == false)
                    {
                       eingabe();
                    }
                    else
                    {
                        cout << "Alle Felder sind belegt" << endl;
                        system("PAUSE");
                        return;
                    }
                }
            }

        }
        if (Auswahl == 2)
        {
                (feld[0][0])->setWertZelle(3);
                (feld[0][1])->setWertZelle(4);
                (feld[0][2])->setWertZelle(2);
                (feld[0][3])->setWertZelle(9);
                //(feld[0][4])->setWertZelle(1);
                (feld[0][5])->setWertZelle(5);
                (feld[0][6])->setWertZelle(8);
                (feld[0][7])->setWertZelle(7);
                (feld[0][8])->setWertZelle(6);

                (feld[1][0])->setWertZelle(1);
                (feld[1][1])->setWertZelle(9);
                (feld[1][2])->setWertZelle(7);
                (feld[1][3])->setWertZelle(6);
                (feld[1][4])->setWertZelle(8);
                (feld[1][5])->setWertZelle(3);
                (feld[1][6])->setWertZelle(5);
                (feld[1][7])->setWertZelle(4);
                //(feld[1][8])->setWertZelle(2);

                (feld[2][0])->setWertZelle(5);
                (feld[2][1])->setWertZelle(6);
                (feld[2][2])->setWertZelle(8);
                (feld[2][3])->setWertZelle(4);
                (feld[2][4])->setWertZelle(2);
                (feld[2][5])->setWertZelle(7);
                (feld[2][6])->setWertZelle(1);
                //(feld[2][7])->setWertZelle(3);
                (feld[2][8])->setWertZelle(9);

                (feld[3][0])->setWertZelle(8);
                (feld[3][1])->setWertZelle(5);
                (feld[3][2])->setWertZelle(1);
                (feld[3][3])->setWertZelle(3);
                //(feld[3][4])->setWertZelle(4);
                (feld[3][5])->setWertZelle(9);
                (feld[3][6])->setWertZelle(2);
                (feld[3][7])->setWertZelle(6);
                (feld[3][8])->setWertZelle(7);

                (feld[4][0])->setWertZelle(9);
                (feld[4][1])->setWertZelle(2);
                (feld[4][2])->setWertZelle(6);
                (feld[4][3])->setWertZelle(8);
                (feld[4][4])->setWertZelle(7);
                (feld[4][5])->setWertZelle(1);
                (feld[4][6])->setWertZelle(4);
                //(feld[4][7])->setWertZelle(5);
                (feld[4][8])->setWertZelle(3);

                (feld[5][0])->setWertZelle(4);
                (feld[5][1])->setWertZelle(7);
                (feld[5][2])->setWertZelle(3);
                (feld[5][3])->setWertZelle(2);
                (feld[5][4])->setWertZelle(5);
                //(feld[5][5])->setWertZelle(6);
                (feld[5][6])->setWertZelle(9);
                (feld[5][7])->setWertZelle(1);
                (feld[5][8])->setWertZelle(8);

                (feld[6][0])->setWertZelle(6);
                (feld[6][1])->setWertZelle(8);
                (feld[6][2])->setWertZelle(5);
                (feld[6][3])->setWertZelle(1);
                (feld[6][4])->setWertZelle(3);
                (feld[6][5])->setWertZelle(2);
                //(feld[6][6])->setWertZelle(7);
                (feld[6][7])->setWertZelle(9);
                (feld[6][8])->setWertZelle(4);

                (feld[7][0])->setWertZelle(7);
                (feld[7][1])->setWertZelle(3);
                (feld[7][2])->setWertZelle(4);
                (feld[7][3])->setWertZelle(5);
                (feld[7][4])->setWertZelle(9);
                //(feld[7][5])->setWertZelle(8);
                (feld[7][6])->setWertZelle(6);
                (feld[7][7])->setWertZelle(2);
                (feld[7][8])->setWertZelle(1);

                (feld[8][0])->setWertZelle(2);
                //(feld[8][1])->setWertZelle(0);
                (feld[8][2])->setWertZelle(9);
                (feld[8][3])->setWertZelle(7);
                (feld[8][4])->setWertZelle(6);
                (feld[8][5])->setWertZelle(4);
                (feld[8][6])->setWertZelle(3);
                (feld[8][7])->setWertZelle(8);
                (feld[8][8])->setWertZelle(5);

                ausgabeSpielfeld();
        }
        if (Auswahl == 3)
        {
            //neuesspiel();
        }
        if (Auswahl == 4)
        {
            (feld[0][0])->setWertZelle(3);
            (feld[0][1])->setWertZelle(4);
            (feld[0][2])->setWertZelle(2);
            (feld[0][3])->setWertZelle(9);
            (feld[0][4])->setWertZelle(1);
            (feld[0][5])->setWertZelle(5);
            (feld[0][6])->setWertZelle(8);
            (feld[0][7])->setWertZelle(7);
            (feld[0][8])->setWertZelle(6);

            (feld[1][0])->setWertZelle(1);
            (feld[1][1])->setWertZelle(9);
            (feld[1][2])->setWertZelle(7);
            (feld[1][3])->setWertZelle(6);
            (feld[1][4])->setWertZelle(8);
            (feld[1][5])->setWertZelle(3);
            (feld[1][6])->setWertZelle(5);
            (feld[1][7])->setWertZelle(4);
            (feld[1][8])->setWertZelle(2);

            (feld[2][0])->setWertZelle(5);
            (feld[2][1])->setWertZelle(6);
            (feld[2][2])->setWertZelle(8);
            (feld[2][3])->setWertZelle(4);
            (feld[2][4])->setWertZelle(2);
            (feld[2][5])->setWertZelle(7);
            (feld[2][6])->setWertZelle(1);
            (feld[2][7])->setWertZelle(3);
            (feld[2][8])->setWertZelle(9);

            (feld[3][0])->setWertZelle(8);
            (feld[3][1])->setWertZelle(5);
            (feld[3][2])->setWertZelle(1);
            (feld[3][3])->setWertZelle(3);
            (feld[3][4])->setWertZelle(4);
            (feld[3][5])->setWertZelle(9);
            (feld[3][6])->setWertZelle(2);
            (feld[3][7])->setWertZelle(6);
            (feld[3][8])->setWertZelle(7);

            (feld[4][0])->setWertZelle(9);
            (feld[4][1])->setWertZelle(2);
            (feld[4][2])->setWertZelle(6);
            (feld[4][3])->setWertZelle(8);
            (feld[4][4])->setWertZelle(7);
            (feld[4][5])->setWertZelle(1);
            (feld[4][6])->setWertZelle(4);
            (feld[4][7])->setWertZelle(5);
            (feld[4][8])->setWertZelle(3);

            (feld[5][0])->setWertZelle(4);
            (feld[5][1])->setWertZelle(7);
            (feld[5][2])->setWertZelle(3);
            (feld[5][3])->setWertZelle(2);
            (feld[5][4])->setWertZelle(5);
            (feld[5][5])->setWertZelle(6);
            (feld[5][6])->setWertZelle(9);
            (feld[5][7])->setWertZelle(1);
            (feld[5][8])->setWertZelle(8);

            (feld[6][0])->setWertZelle(6);
            (feld[6][1])->setWertZelle(8);
            (feld[6][2])->setWertZelle(5);
            (feld[6][3])->setWertZelle(1);
            (feld[6][4])->setWertZelle(3);
            (feld[6][5])->setWertZelle(2);
            (feld[6][6])->setWertZelle(7);
            (feld[6][7])->setWertZelle(9);
            (feld[6][8])->setWertZelle(4);

            (feld[7][0])->setWertZelle(7);
            (feld[7][1])->setWertZelle(3);
            (feld[7][2])->setWertZelle(4);
            (feld[7][3])->setWertZelle(5);
            (feld[7][4])->setWertZelle(9);
            (feld[7][5])->setWertZelle(8);
            (feld[7][6])->setWertZelle(6);
            (feld[7][7])->setWertZelle(2);
            (feld[7][8])->setWertZelle(1);

            (feld[8][0])->setWertZelle(2);
            //(feld[8][1])->setWertZelle(0);
            (feld[8][2])->setWertZelle(9);
            (feld[8][3])->setWertZelle(7);
            (feld[8][4])->setWertZelle(6);
            (feld[8][5])->setWertZelle(4);
            (feld[8][6])->setWertZelle(3);
            (feld[8][7])->setWertZelle(8);
            (feld[8][8])->setWertZelle(5);

            ausgabeSpielfeld();
        }
    }
    
}

void Spielfeld::neustarten()
{

    system("cls");
    //auslesen(getSchwierkeit());
 
}

void Spielfeld::auslesen(int auswahl)
{       
    int z = 0, s = 0, tmp[9] = {0};
    if (auswahl == 1)
    {
        FILE* datei;

        if ((fopen_s(&datei, "Einfach.csv", "r")) != NULL)
        {
            fprintf_s(stderr, "Datei konnte nicht geoeffnet werden!\n");
        }

        while ((fscanf_s(datei, "%i;%i;%i;%i;%i;%i;%i;%i;%i\n", tmp[0], tmp[1], tmp[2], tmp[3], tmp[4], tmp[5], tmp[6], tmp[7], tmp[8])) != EOF)
        {
            z++;
            (feld[z][0])->setWertZelle(tmp[0]);
            (feld[z][1])->setWertZelle(tmp[1]);
            (feld[z][2])->setWertZelle(tmp[2]);
            (feld[z][3])->setWertZelle(tmp[3]);
            (feld[z][4])->setWertZelle(tmp[4]);
            (feld[z][5])->setWertZelle(tmp[5]);
            (feld[z][6])->setWertZelle(tmp[6]);
            (feld[z][7])->setWertZelle(tmp[7]);
            (feld[z][8])->setWertZelle(tmp[8]);
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

        while ((fscanf_s(datei, "%i ; %i ; %i ; %i ; %i ; %i ; %i ; %i ; %i\n", tmp[0], tmp[1], tmp[2], tmp[3], tmp[4], tmp[5], tmp[6], tmp[7], tmp[8])) != EOF)
        {
            z++;
            (feld[z][0])->setWertZelle(tmp[0]);
            (feld[z][1])->setWertZelle(tmp[1]);
            (feld[z][2])->setWertZelle(tmp[2]);
            (feld[z][3])->setWertZelle(tmp[3]);
            (feld[z][4])->setWertZelle(tmp[4]);
            (feld[z][5])->setWertZelle(tmp[5]);
            (feld[z][6])->setWertZelle(tmp[6]);
            (feld[z][7])->setWertZelle(tmp[7]);
            (feld[z][8])->setWertZelle(tmp[8]);
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

        while ((fscanf_s(datei, "%i ; %i ; %i ; %i ; %i ; %i ; %i ; %i ; %i\n", tmp[0], tmp[1], tmp[2], tmp[3], tmp[4], tmp[5], tmp[6], tmp[7], tmp[8])) != EOF)
        {
            z++;
            (feld[z][0])->setWertZelle(tmp[0]);
            (feld[z][1])->setWertZelle(tmp[1]);
            (feld[z][2])->setWertZelle(tmp[2]);
            (feld[z][3])->setWertZelle(tmp[3]);
            (feld[z][4])->setWertZelle(tmp[4]);
            (feld[z][5])->setWertZelle(tmp[5]);
            (feld[z][6])->setWertZelle(tmp[6]);
            (feld[z][7])->setWertZelle(tmp[7]);
            (feld[z][8])->setWertZelle(tmp[8]);
        }

        fclose(datei);
    }

}

void Spielfeld::eingabe()
{
    int wertZelle = 0;

    do
    {

        cout << "Zeile: " << endl;
        cin >> zeile;
        cout << "Spalte: " << endl;
        cin >> spalte;

    } while (feld[zeile - 1][spalte - 1]->checkBelegt() == true);

    cout << "Welche Zahl möchten sie eingeben: ";

    cin >> wertZelle;

    if (wertZelle < 9 && wertZelle > 0)
    {
        feld[zeile - 1][spalte - 1]->wertEinfuegen(zeile, spalte, wertZelle);
    }
    else
    {
        cout << "Falsche Zahl. Versuchen Sie es erneut" << endl;
        eingabe();
    }

}
