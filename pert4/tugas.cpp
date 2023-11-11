/* Program Name: Aplikasi Shopping sederhana
 * Objective: Memenuhi tugas 3 Algoritma Pemrogramman 1 UPN "V" YK
 * created at: 26-11-2023
 * updated at: 26-11-2023
 *
 * */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   system("clear");
   // insialisasi username & password
   const string username="gradiva_arya", password="arya123";
      
   // Login screen
   string login = "Selamat Datang Silahkan Login"; 

   cout << setw(50) << setfill('=') << "" << endl;
   cout << "||" << setw((50-login.size())/2) << setfill(' ') << "";
   cout << login;
   cout << right  << setw((50-login.size())/2-1) << setfill(' ') << "||";
   cout << endl;
   cout << setw(50) << setfill('=') << "" << endl;

   string input_username, input_password;
   cout << "Username: ";
   getline(cin, input_username);
   cout << "Password: ";
   getline(cin, input_password);

   // Exit when username or password doesn't match
   if (input_username != username || input_password != password)
   {
      cout << "Username atau Password Salah!\nKelauar dari program\n";
      return 1;
   }
   
   // Login succeded: Menu screen
   string welcome = "Selamat datang, " + username;
   string struk = "Struk Belanja";
   string daftar_barang_title = "Daftar barang";

   // Daftar barang (maaf mas,mba saya malas nulis 5 barang jadi saya buat array hehehe)
   string daftar_barang[5][3] = {
      {"Cookies", "7000", "200"},
      {"Brownies", "5000", "100"},
      {"Ciffon", "10000", "50"},
      {"Bika ambon", "4000", "500"},
      {"Roti sobek", "1000", "700"}
   };


   cout << setw(50) << setfill('=') << "" << endl;
   cout << "||" << setw((50-welcome.size())/2-1) << setfill(' ') << "";
   cout << welcome;
   cout << right  << setw((50-welcome.size())/2-1) << setfill(' ') << "||";
   cout << endl;
   cout << setw(50) << setfill('=') << "" << endl;

   cout << "Silahkan pilih daftar menu: \n";
   cout << "1. Belanja\n";
   cout << "2. Daftar barang\n";
   cout << "0. Exit\n";
   cout << "Pilih: ";
   // take user choice
   int choice;
   cin >> choice;

   switch (choice) {
      // Exit
      case 0:
         return 0;
         break;
      // Belanja Menu
      case 1:
         system("clear");
         cout << setw(50) << setfill('-') << "" << endl;
         cout << "Nama barang\t\t: Cookies" << endl;
         cout << "Jumlah Barang\t\t: 5" << endl;
         cout << "Harga per Barang\t: Rp7000" << endl;
         cout << "Data sudah direkam!" << endl;
         cout << setw(50) << setfill('-') << "";
         cout << endl;

         // Display Struk
         cout << setw(50) << setfill('=') << "" << endl;
         cout << "||" << setw((50-struk.size())/2) << setfill(' ') << "";
         cout << struk;
         cout << right  << setw((50-struk.size())/2-1) << setfill(' ') << "||";
         cout << endl;
         cout << setw(50) << setfill('=') << "" << endl;

         cout << "Nama Pembeli\t : " << username << endl;
         cout << "Barang\t\t : " << "Cookies" << endl;
         cout << "Jumlah\t\t : " << 5 << endl;
         cout << "Harga\t\t : Rp" << 7000 << endl;
         cout << "Diskon\t\t : 10%" << endl;
         cout << "Jumlah\t\t : Rp" << (7000*5)-(7000*5*0.1) << endl;
         
         cout << setw(50) << setfill('=') << "" << endl;
         break;
      // Daftar Barang Menu
      case 2:
         system("clear");
         cout << setw(50) << setfill('=') << "" << endl;
         cout << "||" << setw((50-daftar_barang_title.size())/2) << setfill(' ') << "";
         cout << daftar_barang_title;
         cout << right  << setw((50-daftar_barang_title.size())/2-1) << setfill(' ') << "||";
         cout << endl;
         cout << setw(50) << setfill('=') << "" << endl;

         for (int i=0; i<5;i++){
            cout << "|| " << "Nama barang: ";
            cout << daftar_barang[i][0];
            cout << setw(34-daftar_barang[i][0].size()) << setfill(' ') << "||";
            cout << endl;
            cout << "|| " << "Harga: ";
            cout << daftar_barang[i][1];
            cout << setw(40-daftar_barang[i][1].size()) << setfill(' ') << "||";
            cout << endl;
            cout << "|| " << "Stok: ";
            cout << daftar_barang[i][2];
            cout << setw(41-daftar_barang[i][2].size()) << setfill(' ') << "||";
            cout << endl;
            cout << setw(50) << setfill('-') << "" << endl;
         }
         break;
      default:
         cout << "Pilihan tidak tersedia!" << endl;
         return 1;
   }


   cout << endl;
   
   



   return 0;
}
