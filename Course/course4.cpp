//
// Created by bonac on 1/29/2026.
//

#include "course4.h"
#include <iostream>
using namespace std;

int course4() {
    cout << "Starting course 4" << endl;


    // // Exercise 1
    // int a;
    // int* p = &a;
    //
    // cout << &a << ' ' << p << '\n';
    //
    // a = 7;
    //
    // cout << a << ' ' << *p << '\n';
    //
    // a += 2;
    // (*p)++;
    // cout << a << ' ' << *p << '\n';


    // // Exercise 2
    // cout << "Tipurile de date: char=" << sizeof(char) << " int=" << sizeof(int)
    // << " int_lung=" << sizeof(long long) << " real=" << sizeof(double) << '\n';
    //
    // cout << "Pointerii: char=" << sizeof(char*) << " int=" << sizeof(int*)
    // << " int_lung=" << sizeof(long long*) << " real=" << sizeof(double*) << '\n';


    // // Exercise 3
    // int* p1;
    // p1 = new int;
    //
    // cout << " Dati o valoare intreaga: ";
    // cin >> *p1;
    // cout << " Valoarea citita este: " << *p1 << '\n';
    // delete p1;
    //
    // double* p2 = new double(17.89);
    // cout << "Valoarea atribuita este: " << *p2 << '\n';
    // delete p2;


    // // Exercise 4
    // int* v = new int[3];
    // *v = 2;
    // *(v+1) = 15;
    // *(v+2) = -7;
    //
    // for ( int i = 0; i<3; i++ ) {
    //     cout << *(v+i) << ' ';
    // }
    // cout << '\n';


    // // Exercise 5
    // void* p;
    //
    // int i = 21;
    // p = &i;
    // cout << *(int*)p << '\n';
    //
    // float f = 3.14f;
    // p = &f;
    // cout << *(float*)p << '\n';
    //
    // char c = 'A';
    // p = &c;
    // cout << *(char*)p << '\n';
    //
    // const char* s = "Hello C++!";
    // p = const_cast<char*>(s);
    // char* pChar = static_cast<char*>(p);
    // cout << pChar << '\n';


    // Exercise 6
    // int a;
    // int& b = a;
    //
    // a = 10;
    // cout << a << ' ' << b << '\n';
    // cout << &a << ' ' << &b << '\n';
    //
    // b += 5;
    // cout << a << ' ' << b << '\n';
    // cout << &a << ' ' << &b << '\n';


    // // Exercise 7
    // int a = 1, *p, & q = a;
    // p = &a;
    // (*p)++;
    // q = *p + a;
    // cout << a << '\n';


    cout << "Ending course 4 " << endl;
    return 0;
}