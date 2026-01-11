//
// Created by acasa on 12/8/2025.
//

#include "../Course/course2.h"

#include <cmath>
#include<iostream>
using namespace std;

int course2() {

    // // exercitiul 1
    // int a,b,c;
    // int min,max;
    //
    // cout << "Dati cele trei numere: ";
    // cin >> a >> b >> c;
    //
    // if (a < b)
    // {
    //     min = a;
    //     max = b;
    // } else
    // {
    //     min = b;
    //     max = a;
    // }
    //
    // if ( c<min)
    // {
    //     min = c;
    // } else if ( c>max)
    // {
    //     max = c;
    // }
    // cout << min << " " << max << "\n";


    // exercitiul 2

    int a,b,c,delta;
    float x1, x2;

    cout << "Dati coeficientii: ";
    cin >> a >> b >> c;
    if (!a) //(a==0)
        if (!b)
            if (!c)
                cout << "Ec. de gradul 0. Solutii infinite. \n";
            else
                cout << "Ec de gradul 0. Fara solutii \n";
        else
        {
            x1 = -(float)c/b;
            cout << "Ecuatia de gr. 1 | Solutia: " << x1 << " \n";
        }
    else
    {
        delta = b*b - 4 * a * c;
        if (delta<0)
        {
            cout << "Ecuatia de gr.2 | Solutii din C";
        }
        else
            if (delta) // (delta!=0)
            {
                x1 = (-b - (float)sqrt(delta)) / (2*a);
                x2 = (-b + (float)sqrt(delta)) / (2*a);
                cout << "Ec de gr. 2 | Solutii: " << x1 << ", " << x2 << "\n";
            }
        else
        {
            x1 = -b / (2*a);
            cout << "Ec de gr. 2 | Solutie unica: " << x1;
        }
    }

    return 0;
}