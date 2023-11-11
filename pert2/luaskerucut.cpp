#include <iostream>
// define konstan pi
#define phi 3.14

using namespace std;


int main(){
   double r, s, luas_alas, luas_selimut;
   // mengambil input radius dan panjang selimut
   cout << "Radius: ";
   cin >> r;
   cout << "Panjang selimut: ";
   cin >> s;

   // luas alas = phi * r * r
   luas_alas = phi*r*r;
   luas_selimut = phi*r*s;

   cout << "Luas Permukaan: " << luas_alas + luas_selimut << endl; 
   
   
   return 0;
}
