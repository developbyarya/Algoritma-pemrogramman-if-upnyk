#include <iostream>
using namespace std;

int main(){
   // konstan sisi dan tinggi
   const int sisi_persegi = 12, tinggi = 17;

   // variable luas, keliling,volume, luas_permukaan
   float luas, keliling, volume_kubus, volume_balok, luas_permukaan_kubus, luas_permukaan_balok;

   // L = s^2
   luas = sisi_persegi*sisi_persegi;
   cout << "Jika sisi persegi adalah " << sisi_persegi << " Maka Luas dan Keliling Persegi adalah sebagai berikut" << endl;
   cout << "Luas Persegi: " << luas << endl;
   // K = 4s
   keliling = 4*sisi_persegi;
   cout << "Keliling Persegi: " << keliling << endl;

   // V = s^3
   volume_kubus = sisi_persegi*sisi_persegi*sisi_persegi;
   // Lp = 6s^2
   // karena s*s = luas maka,
   // Lp = 6*luas
   luas_permukaan_kubus = 6*luas;

   cout << endl;
   cout << "Lalu ketika persegi (bangun datar) diubah menjadi kubus (bangun ruang) maka volume \n dan luas permukaan nya adalah sebagai berikut" << endl;
   cout << "Volume: " << volume_kubus << endl;
   cout << "Luas_permukaan: " << luas_permukaan_kubus << endl;

   cout << endl;
   cout << "Lalu ketika persegi (bangun datar) diubah menjadi balok (bangun ruang) dengan tinggi " << tinggi 
   << " maka \nvolume dan luas permukaan nya adalah sebagai berikut "<< endl;
   // V = p x l x t
   // Karena p dan l sama, dan p x l sama dengan luas persegi maka,
   // V = luas * t
   volume_balok = luas*tinggi;
   // Lp = 2 (pl + lt + pt)
   // karena pl = luas dan p=l maka
   // Lp = 2*(luas + 2*sisi*tinggi)
   luas_permukaan_balok = 2*(luas + 2*sisi_persegi*tinggi); 
   cout << "Volume: " << volume_balok << endl;
   cout << "Luas_permukaan: " << luas_permukaan_balok << endl;





}
