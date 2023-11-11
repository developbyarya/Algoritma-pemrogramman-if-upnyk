#include <iostream>
using namespace std;

int main(){
  const int boundaries = 33;
  string input;
  getline(cin, input, static_cast<char>(EOF));

  int karakter[128] = {0};



  for (int i=0; i < input.size(); i++){
    if (input[i] == ' ' || input[i] == '\n') continue;

    karakter[input[i]-boundaries]++;


  }

  for (int i=0; i < 128; i++) {
    if (karakter[i] == 0) continue;

    cout << char(i+boundaries) << "=" << karakter[i];
    cout << endl;
  }


  return 0;
}
