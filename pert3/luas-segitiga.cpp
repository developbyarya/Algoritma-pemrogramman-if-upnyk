#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){
   char nama[40], kelas;
   cout << "Masukan nama: ";
   cin.getline(nama, sizeof(nama));
   cout << endl;
   cout << "Masukan kelas: ";
   cin >> kelas;

   float alas, tinggi, luas;
   cout << "Mencari Luas segitiga" << endl;
   cout << "Masukan alas: ";
   cin >> alas;
   cout << endl;
   cout << "Masukan tinggi: ";
   cin >> tinggi;

   luas = alas*tinggi*0.5;
   cout << "Luas segitiga adalah: " ;
   printf("%.6f\n", luas );



   
   return 0;
}

