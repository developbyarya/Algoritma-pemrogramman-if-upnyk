#include <iostream>
using namespace std;
int main(){
  string str;
  cout << "Masukan string: ";
  getline(cin, str);
  int len = 0;
  while (str[len])
  {
    len++;
  }
  cout << "Panjang String: " << len;
  cout << endl;
  return 0;
}
