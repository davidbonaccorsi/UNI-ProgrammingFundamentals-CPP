//
// Created by acasa on 12/10/2025.
//

#include "lab3.h"
#include <iostream>
using namespace std;

int lab3()
{
    cout << "Launching workshop 3" << "\n";



    // // exercitiul 1
    // int N;
    // int sum = 0;
    // cout << "Introduceti un numar pozitiv: " << "\n";
    // cin >> N;
    // if (N<1)
    // {
    //     cout << "Numarul introdus nu este pozitiv...";
    //     return 0;
    // }
    //
    // for (int i = 1; i<N; i++)
    // {
    //     sum+= i;
    // }
    //
    // cout << "Suma numerelor de la 1 la " << N << " este de " << sum;






    // exercise 2
    // int N;
    // cout << "Introduceti un numar pozitiv: " << "\n";
    // cin >> N;
    // if (N<1)
    // {
    //     cout << "Numarul introdus nu este pozitiv...";
    //     return 0;
    // }
    //
    // for (int i = N; i>=1; --i)
    // {
    //     if (i%2==0)
    //     {
    //         cout << "Numarul " << i << " este par \n";
    //     }
    // }







    // exercise 3
    // cout << "Facem tabla inmultirii \n";
    //
    // for (int i = 1; i<=10; i++)
    // {
    //     cout << "Pentru numarul " << i << " avem: \n";
    //     for (int j = 0; j<=10; j++)
    //     {
    //         cout << i << " * " << j << " = " << i*j << "\n";
    //     }
    // }





    // // exercise 4
    // long long n;
    // cout << "Scrie un numar intreg pozitiv: ";
    // cin >> n;
    //
    // if (n<1){ cout << "Numarul introdus nu este pozitiv..."; return 0;}
    //
    // long digits = 0l;
    // while (n>0)
    // {
    //     digits++;
    //     n /= 10;
    //     // cout << n << "\n";
    // }
    // cout << digits;











    // // exercise 5
    // int n;
    // int newNumber = 0;
    // cout << "Introduceti un nr intreg poz: ";
    // cin >> n;
    // if (n<1){ cout << "Numarul introdus nu este pozitiv..."; return 0;}
    // while (n>0)
    // {
    //     int lastDigit = n%10;
    //     newNumber = newNumber*10 + lastDigit;
    //     n/=10;
    // }
    //
    // cout << newNumber;






    //
    // // exercise 6
    // long long n;
    // long suma = 0;
    // cout << "Introduceti un nr poz: ";
    // cin >> n;
    // if (n<1){ cout << "Numarul introdus nu este pozitiv..."; return 0;}
    //
    // while (n>0)
    // {
    //     int lastDigit = n%10;
    //     suma+=lastDigit;
    //     n/=10;
    // }
    //
    // cout << "Suma cifrelor este de " << suma;






    // // exercise 7
    //
    // long long n;
    // cout << "Introduceti un nr intreg: ";
    // cin >> n;
    // long long reverse = 0LL;
    // const long long nBack = n;
    //
    // while (n>0)
    // {
    //     const int lastDigit = n%10;
    //     reverse = reverse*10 + lastDigit;
    //     n/=10;
    // }
    //
    // if (nBack == reverse)
    // {
    //     cout << "Palindrom";
    // } else
    // {
    //     cout << "Nein!";
    // }









    // // exercise 8
    // long long n;
    // cout << "Input the number: ";
    // cin >> n;
    //
    // if (n<2) {cout << "Nu este prim..."; return 0;}
    //
    // for (long long i = 1; i*i <= n; i++)
    // {
    //     if (n%i==0)
    //     {
    //         cout << "NU ESTE PRIM!";
    //         return 0;
    //     }
    // }
    //
    // cout << "Este prim :)";







    // // exercise 9
    // long a,b;
    // cout << "Introdu 2 numere intregi: ";
    // cin >> a >> b;
    // long r = 0;
    //
    // while (b != 0)
    // {
    //     r = a%b;
    //     a = b;
    //     b = r;
    // }
    //
    // cout << "CMMDC este: " << a;





    // // exercise 10
    // int N;
    // cout << "Introduceti un nr intreg: ";
    // cin >> N;
    //
    // long t1 = 0, t2 = 1;
    // long res = 0;
    // for (int i = 1; i<=N; i++)
    // {
    //     if (i==1)
    //     {
    //         cout<<t1 << "\n";
    //     } else if (i==2)
    //     {
    //         cout<<t2<<"\n";
    //     }
    //
    //     res = t1 + t2;
    //     t1 = t2;
    //     t2 = res;
    //     cout << res << "\n";
    // }


    cout << "\n Ending workshop 3" << "\n";
    return 0;
}