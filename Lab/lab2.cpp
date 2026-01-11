//
// Created by acasa on 12/9/2025.
//

#include "lab2.h"

#include<iostream>
using namespace std;

int lab2()
{

    // //exerctiul 1 - verificare nr par
    // int a;
    // cout << "Introduceti numarul: " << " \n";
    // cin >> a;
    //
    // if (a%2==0)
    // {
    //     cout << "Numarul " << a << " este par";
    // } else
    // {
    //     cout << "Numarul " << a << " este impar";
    // }


    // exerctiul 2 - verificare an bisect
    // int an;
    // cout << "Introduceti un an: " << " \n";
    // cin >> an;
    //
    // string rez;
    // rez = (an%4==0) ? (an%100==0 ? (an%400==0 ? "Bisect" : "NU este bisect") : "Bisect" ) : "NU este bisect";
    // cout << rez;




    // // exerctiul 3 - maximul dintre 3 numere
    // int a,b,c,max,min;
    // cout << "Introduceti cele 3 numere: " << " \n";
    // cin >> a >> b >> c;
    //
    // if (a<b)
    // {
    //     min = a;
    //     max = b;
    // } else
    // {
    //     min = b;
    //     max = a;
    // }
    //
    // if (c<min)
    // {
    //     min = c;
    // } else if (c>max)
    // {
    //     max = c;
    // }
    //
    // cout << "Maxim : " << max << " | Minim: " << min;



    // // exerctiul 4 - semnul unui nr
    // int a;
    // cout << "Introduceti numarul: " << " \n";
    // cin >> a;
    //
    // string rezultat;
    //
    // if (a>0 && a!=0)
    // {
    //     rezultat = "Pozitiv";
    // } else if (a<0 && a!=0)
    // {
    //     rezultat = "Negativ";
    // } else
    // {
    //     rezultat = "Zero :(";
    // }
    //
    // cout << "Numarul " << a << " este: " << rezultat;





    // // exercitiul 5 - ziua saptamanii
    //
    // int a;
    // cout << "Introduceti numarul zilei (1-7):  " << " \n";
    // cin >> a;
    // string zi;
    //
    // switch (a)
    // {
    // case 1 : zi = "Luni"; break;
    // case 2 : zi = "Marti"; break;
    // case 3 : zi = "Miercuri"; break;
    // case 4 : zi = "Joi"; break;
    // case 5 : zi = "Vineri"; break;
    // case 6 : zi = "Sambata"; break;
    // case 7 : zi = "Duminica"; break;
    // default : cout << "Numarul zilei nu face parte din intervalul 1-7"; break;
    // }
    //
    // if (!zi.empty())
    // {
    //     cout << " Ziua este: " << zi;
    // }



    // // exercitiul 6 - operator aritmetic
    // int a,b;
    // char c;
    // cout << "Introduceti 2 numere: " << "\n";
    // cin >> a >> b;
    //
    // cout << "Introduceti un operator aritmetic: " << "\n";
    // cin >> c;
    //
    // long rezultat = 0l;
    //
    //
    // switch (c)
    // {
    // case '+' : rezultat = a + b; break;
    // case '-' : rezultat = a - b; break;
    // case '*' : rezultat = a * b; break;
    // case '/' : rezultat = a / b; break;
    // case '%' : rezultat = a % b; break;
    // default : cout << "Operatorul aritmetic introdus este invalid"; break;
    // }
    //
    //
    //
    // cout << "Rezultatul este " << rezultat;




    // // exercitiul 7
    // char litera;
    // int vocala;
    //
    // cout << "Introduceti o litera: " << " \n";
    // cin >> litera;
    //
    // switch (std::tolower(litera))
    // {
    //  case 'a' : vocala = 1; break;
    //  case 'e' : vocala = 1; break;
    // case 'i' : vocala = 1; break;
    // case 'o' : vocala = 1; break;
    // case 'u' : vocala = 1; break;
    // default : vocala = 0; break;
    // }
    //
    // string mesaj = (vocala == 1) ? ("este o vocala ") : (" NU este o vocala ");
    // cout << "Litera " << litera << " " << mesaj;



    // // exercitiul 8
    // int luna;
    //
    // cout << "Introduceti numarul lunii: " << "\n";
    // cin >> luna;
    //
    // if ( luna > 12 || luna <1)
    // {
    //     cout << "Numarul introdus este invalid: INTERVAL CORECT (1,12)";
    // }
    //
    // string nume;
    // int zile;
    //
    // switch (luna)
    // {
    // case 1 : nume = "Ianuarie"; zile = 31; break;
    // case 2 : nume = "Februarie"; zile = 28; break;
    // case 3 : nume = "Martie"; zile = 31; break;
    //     // more months
    // default : nume = "invalida"; zile = 0; break;
    // }
    //
    //
    // cout << "Luna este " << nume << " si are " << zile << " zile.";






    // // exercitiul 9
    // int nota;
    // cout << "Introduceti nota ca val numerica (1-10): " << "\n";
    // cin >> nota;
    //
    // if (nota<1 || nota >10)
    // {
    //     cout << "Nota invalida, trebuie sa fie din intervalul 1-10";
    //     return 0;
    // }
    //
    // string calificativ;
    //
    // switch (nota)
    // {
    // case 10 : case 9 : calificativ = "FB"; break;
    // case 8 : case 7 : calificativ = "B"; break;
    // case 6 : case 5 : calificativ = "S"; break;
    // default : calificativ = "I"; break;
    // }
    //
    // cout << "Nota " << nota << " are calificativul " << calificativ << ". Felicitari!";


    return 0;
}