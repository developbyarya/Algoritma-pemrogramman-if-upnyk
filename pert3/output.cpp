#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   system("clear");
   char nama[25] = "Arya", nim[10] = "123230089", plug ='c';
  /* 
   cout << left <<  setw(10) << "Nama" << setfill(' ') << ": ";
   cin.getline(nama, sizeof(nama)); 
   cout << setw(10) << "NIM" << setfill(' ') << ": ";
   cin.getline(nim, sizeof(nim)); 
   cout << setw(10) << "Plug" << setfill(' ') << ": ";
   cin >> plug;
   */
   
   cout << "Inilah data anda : " << endl;
   cout << left <<  setw(10) << "Nama" << setfill(' ') << ": " << nama << endl ;
   cout << setw(10) << "NIM" << setfill(' ') << ":" << nim << endl;
   cout << setw(10) << "Plug" << setfill(' ') << ":" << plug << endl;

   cout << "Dalam Bentuk Tabel: " << endl;
   cout << setfill('=') << setw(50) << "" << endl;
   cout << right << setfill(' ') << setw(10) << "NIM";
   cout << setw(6) << setfill(' ') << "|";
   
   cout << right << setfill(' ') << setw(12) << "Nama";
   cout << setfill(' ') << setw(12) << "|";

   cout << right << setfill(' ') << setw(8) << "Plug";
   cout << endl;
   cout << setfill('=') << setw(50) << "" << endl;


   cout << right << setfill(' ') << setw(15) << nim;
   cout  << "|";
   
   cout << right << setfill(' ') << setw(12) << nama;
   cout << setfill(' ') << setw(12) << "|";

   cout << right << setfill(' ') << setw(8) << plug;
   cout << endl;
   cout << setfill('=') << setw(50) << "" << endl;

   cout << endl;



   return 0;
}
