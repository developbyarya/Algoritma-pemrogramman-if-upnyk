#include <iostream>
using namespace std;

int main(){
   int uang = 12543;
   int ribu = uang / 1000;
   int ratus = (uang % 1000) / 100;
   int puluh = (uang % 100) / 10;
   int akhir = (uang % 10);

   cout << "Uangku: " << uang;
   cout << "Nominal: ";
   cout << ribu << " Ribu " << ratus << " Ratus " << puluh << " puluh " << akhir << " rupiah " << endl;
}

/*
 * Output:
 * Uangku: 12543
 * Nominal: 12 Ribu 5 ratus 4 puluh 3 rupiah
 * /
