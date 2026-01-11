//
// Created by acasa on 12/15/2025.
//

#include "lab4.h"
#include <iostream>
using namespace std;

int lab4()
{
    cout << "Launching workshop 4" << "\n";

    // // exercise 1
    //
    // int N;
    // cout << "Introduceti un numar: ";
    // cin >> N;
    // long long rez = 1;
    //
    // while (N>0)
    // {
    //     rez = rez * N--;
    // }
    // cout << rez;


    // // exercise 2
    //
    // double nr;
    // long long suma = 0;
    // int contor = 0;
    //
    // do
    // {
    //     cout << "Baga un numar la baiatu: ";
    //     cin >> nr;
    //
    //     if (nr==0)
    //     {
    //         break;
    //     }
    //     contor++;
    //     suma+=nr;
    // } while (nr !=0);
    //
    // if (contor == 0)
    // {
    //     cout<<"Nu ai bagat numere...";
    // } else
    // {
    //     double ma = (double)suma/contor;
    //     cout<<ma;
    // }





    // // exercise 3
    // int nr;
    // int max = 0;
    // int min = 9;
    //
    // do
    // {
    //     cout<<" Baga un numar natural: ( 0 pt a iesii ):";
    //     cin>>nr;
    //
    //     if (nr==0)
    //     {
    //         break;
    //     }
    //
    //     if (max<nr)
    //     {
    //         max = nr;
    //     }
    //     if (min>nr)
    //     {
    //         min = nr;
    //     }
    // } while (nr!=0);
    //
    // cout << "Minimul este : " << min <<"\n";
    // cout << "Maximul este: " << max;



    // // exercise 4
    // long long N;
    // cout << "Introdu un numar N: ";
    // cin >> N;
    //
    // long long S = 0;
    // for (int i = 1; i<=N; i++)
    // {
    //     if (i%2==0)
    //     {
    //         S-=i;
    //     } else
    //     {
    //         S+=i;
    //     }
    // }
    // cout <<S;



    // // exercise 5
    // int N;
    // cout << "Introdu un numar N: ";
    // cin >> N;
    //
    // long long S = 0;
    //
    // for (int i = 1; i<= N; i++)
    // {
    //     S+=i*i;
    // }
    //
    // cout << S;

        


    // // exercise 6
    // long long N;
    // cout << "Scrieti un nr in baza 2: ";
    // cin >> N;
    //
    // int base;
    // cout << "Write a base: ";
    // cin >> base;
    //
    //
    // int nr_baza_10 = 0;
    // int putere = 1;
    //
    // while (N>0)
    // {
    //
    //     int cifra = N%10;
    //
    //     if (cifra>1 || cifra <0)
    //     {
    //         cout << "Numarul nu este binar!!!!!!!!!!!!!";
    //         return 0;
    //     }
    //
    //     nr_baza_10+=cifra*putere;
    //     putere*=2;
    //     N/=10;
    // }
    //
    // if (nr_baza_10 == 0 )
    // {
    //     cout << "Numarul in baza " << base << " este: 0 ";
    //     return 0;
    // }
    //
    // cout<<"Numarul in baza 10 este : " << nr_baza_10 << "\n";
    //
    // int rezultat[100];
    // int index = 0;
    //
    // while (nr_baza_10>0)
    // {
    //     int rest = nr_baza_10%base;
    //     rezultat[index++] = rest;
    //     nr_baza_10/=base;
    // }
    //
    // cout << "Rezultatul in baza " << base << " este: ";
    // for (int i = index-1; i>= 0; i--)
    // {
    //     cout<<rezultat[i];
    // }
    //






    // // exercise 7
    // long long number;
    // int base;
    //
    // cout << "Input a number: ";
    // cin >> number;
    //
    // cout << "Input it's base:";
    // cin >> base;
    //
    // long long numberBase10 = 0;
    // int powerOfBase = 1;
    //
    // while (number>0)
    // {
    //     const int digit = number%10;
    //
    //     if (digit<0 || digit >= base)
    //     {
    //         cout << "The number isn't in the base: " << base;
    //         return 0;
    //     }
    //     numberBase10+= digit*powerOfBase;
    //     number/=10;
    //     powerOfBase*=base;
    // }
    //
    // cout << "Number in base 10 is " <<numberBase10 << "\n";
    //
    //
    // long long numberBase2 = 0;
    //
    // if (numberBase10==0)
    // {
    //     cout << "Number in base 2: 0";
    // } else
    // {
    //     int biti[100];
    //     int index = 0;
    //
    //     while (numberBase10>0)
    //     {
    //         biti[index++] = numberBase10%2;
    //         numberBase10/=2;
    //     }
    //
    //     cout << "Number in base 2 is: ";
    //     for (int i = index-1; i>=0; i--)
    //     {
    //         cout << biti[i];
    //     }
    // }






    // // exercise 8
    // long long N = rand() * rand();
    // int digits[10] = {0};
    //
    // if (N<0) {N = -N;}
    //
    // cout << "Numarul generat este: " << N << "\n";
    //
    // if (N==0)
    // {
    //     digits[0] = 1;
    // }
    //
    // while (N>0)
    // {
    //     int lastDigit = N%10;
    //     digits[lastDigit]++;
    //     N/=10;
    // }
    //
    // for (int i = 0; i<=9; i++)
    // {
    //    if (digits[i] > 0)
    //    {
    //        cout << "Cifra " << i << " este afisata de " << digits[i] << " ori. \n";
    //    }
    // }





    cout << "\n Ending workshop 4" << "\n";

    return 0;
}