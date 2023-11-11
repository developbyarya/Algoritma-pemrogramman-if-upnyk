#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main(){
   const int width=50;
   const string login_welcome="Sistem Pemilu - Login";
   map<string, string> users;
   users["340216"] = "Test11";
   users["311111"] = "12323";

   cout << setw(width) << setfill('=') << "" << endl;
   cout << setw((width-login_welcome.size())/2) << setfill(' ') << "" << login_welcome;
   cout << setw((width-login_welcome.size())/2)  << setfill(' ')<< "" << endl;
   cout << setw(width) << setfill('=') << "" << endl;

   string username, password;
   cout << "NIK\t: ";
   getline(cin, username);
   cout << "pass\t: ";
   getline(cin, password);

   try {
      users.at(username);
      cout << "Nice";
   }
   catch (string username) {
      return 1;
   };


   cout << endl;
   return 0;
}

