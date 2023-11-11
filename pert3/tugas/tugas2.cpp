#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main(){
   char nama[30], nim[10], plug;
   int x, y;float a,b,c,d;
   system("clear");

   cout << setw(12+20) << setfill(' ') << "Form Biodata" << endl;
   cout << "Nama: ";
   cin.getline(nama, 30);
   cout << "NIM: ";
   cin.getline(nim, 10);
   cout << "Plug: ";
   scanf("%c", &plug);
   cout << "2 digit angka terakhir nim dan angka favorit (2 digit): ";
   cin >> x >> y;

   cout << setfill('-') << setw(11) << "";
   cout << left << setw(7) << "Biodata" << right << "";
   cout << setfill('-') << setw(11) << "";
   cout << endl;

   printf("Nama: %s\n", nama);
   printf("NIM: %s\n", nim);
   printf("Plug: %c\n", plug);

   
   cout << setfill('-') << setw(9) << "";
   cout << left << "Perhitungan" << right << "";
   cout << setfill('-') << setw(9) << "";
   cout << endl;

   cout << "2 angka terakhir NIM (x) : " << x << endl;
   cout << "Angka favorite (y) : " << y << endl;
   cout << "Dari 2 angka diatas, dilakukan perhitungan : " << endl;
   cout << "a = x * (y % 23) = ";
   printf("%d * (%d % 23) = ", x, y);
   a = x * (y%23);
   cout << a << endl;
   cout << "b = (a-y)*2 = ";
   printf("b = (%f-%d) * 2 = ", a,y);
   b = (a-y)*2;
   cout << b << endl;
   cout << "c = b + x/6 = ";
   printf("%f + %d/6 = ", b,x);
   c = b + x/6;
   cout << c << endl;
   
   cout << "d = c/8 + b/13 = ";
   printf(" %f/8 + %f/13 = ", c,b);
   d = c/8 + b/13;
   cout << d << endl;
   
   cout << "Hasil Akhir: " << d << endl;

   

  
   return 0;
}
