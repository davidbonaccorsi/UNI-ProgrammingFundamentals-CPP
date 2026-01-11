//
// Created by acasa on 12/8/2025.
//

#include "../Course/course1.h"
#include <iostream>
#include <string>
using namespace std;

int course1()
{
    // exercitiul 1
    // string mesaj = "Salut, limbajul C++";
    // cout << mesaj << endl;
    //
    // system("pause");
    //
    //
    // // exercitiul 3
    //
    // string mesaj2;
    // cout << "Scrieti al doilea mesaj:  ";
    // getline(cin, mesaj2);
    //
    // cout << mesaj2 << '\n';
    // system("pause");


    // // exerctiul 4
    // cout << "10 + 25 = " << 10 + 25 << '\n';
    // system("pause");


    // exercitiul 5
    // const int firstNo = 10, secondNo = 25;
    // cout << firstNo << " + " << secondNo << " = " << firstNo + secondNo << '\n';
    // system("pause");

    // exercitiul 6
    // int firstNo = 10, secondNo;
    // secondNo = 25;
    // firstNo = -firstNo;
    // cout << firstNo << " + " << secondNo << " = " << firstNo + secondNo << endl;

    // exercitiul 7
    // #define _CRT_SECURE_NO_WARNINGS
    // int a,b;
    // long sum;
    // cout << "Dati primul numar: ";
    // cin >> a;
    //
    // cout << "Dati al doilea numar: ";
    // cin >> b;
    //
    // cout << a << " + " << b << " = " << a+b << "\n";
    // system("pause");


    // exercitiul 8
    // int a,b;
    // float med;
    //
    // cout << "Dati cele doua numere: ";
    // cin >> a >> b;
    //
    // med = (float)(a+b)/2;
    //
    // cout << "Media aritmetica ( " << a << ", " << b << " ) = " << med << " \n";
    // system("pause");

    // exercitiul 9
    // int a,b;
    // cout << "Dati cele doua numere: ";
    // cin >> a >> b;
    // int sum;
    // sum = (a++) + (++b);
    // cout << "Primul numar: " << a << ". Al doilea numar: " << b << ". Suma lor: " << sum << "\n";
    // system("pause");

    // exercitiul 10
    // int a,b;
    // cout<<"Dati cele doua numere: ";
    // cin >> a >> b;
    // int min,max;
    //
    // ( a < b ) ? (min = a, max = b) : (min = b, max = a);
    // cout << "Minimul este: " << min << "\n";
    // cout << "Maximul este: " << max << "\n";


    // exercitiul 11
    // int a,b,c;
    // cout << "Dati cele trei numere: ";
    // cin >> a >> b >> c;
    // int min,max;
    // (a < b) ? (min = a, max = b) : (min = b, max = a);
    // (c < min) ? (min=c) : (c>max ? (max = c) : max);
    //
    // cout << "Minimul este: " << min;
    // cout << "\nMaximul este: " << max << '\n';

    // // exerctiul 12
    // #define min(x,y) x<y?x:y
    // #define max(x,y) x>y?x:y
    // int a, b;
    //
    // cout << "Dati cele doua numere: ";
    // cin >> a >> b;
    //
    // int min, max; //putem utiliza aceeasi denumire variabila-macrou
    //
    // min = min(a, b);
    // max = max(a, b);
    //
    // cout << "Minimul este: " << min;
    // cout << "\nMaximul este: " << max << '\n';


    // // exercitiul 13
    // const char a = 'A';
    // cout<< "zecimal= " << (unsigned)a << " octal = " << oct << (unsigned)a << " hexazecimal= " << hex << (unsigned)a << '\n';
    //
    // cout << 'A' << ' ' << a << ' ' << (char)65 << ' ' << (char)0101 << ' ' << (char)0x41 << " \101 \x41" << '\n';


    // exercitiul 15
    #define _CRT_SECURE_NO_WARNINGS

    #define si &&
    #define adevarat ?
    #define altfel :
    #define afiseaza printf
    #define citeste scanf
    #define reale float
    #define asteapta system

    reale a,b,c;
    afiseaza("Dati lungimile laturilor: \n");

    afiseaza("\t prima latura: ");
    citeste("%f", &a);

    afiseaza("\t a doua latura: ");
    citeste("%f", &b);

    afiseaza("\t a treia latura: ");
    citeste("%f", &c);

    (a>0) si (b>0) si (c>0) si (a<(b+c)) si (b < (a+c)) si (c < (a+b))
    adevarat afiseaza("Formeaza triunghi \n") altfel afiseaza("NU formeaza triunghi\n");
    asteapta("pause");

    return 0;
}