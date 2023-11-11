#include <iostream>

using namespace std;

int main(){
  const char username[]="arya", password[]="089";
  string inputUsername, inputPassword;
  int tries = 3;
  bool isLogin = false;

  for (int i=0; i < 30; i++){
    cout << "=";
  }
  cout << endl;
  cout << "Welcome to Hogwarts!\nWizard Login Page";
  cout << endl;
  for (int i=0; i < 30; i++){
    cout << "=";
  }
  cout << endl;

  // Login with 3 tries

  do {
    cout << "Username\t: ";
    getline(cin, inputUsername);
    cout << "Password\t: ";
    getline(cin, inputPassword);
    if (username == inputUsername && inputPassword == password) 
    {
      isLogin = true; 
      break;
      }
    cout << "Login failed username or password wrong!\nyou have "<< --tries << " more tries" << endl;
    for (int i=0; i < 30; i++){
      cout << "=";
    }
    cout << endl;
  } while (tries > 0 && !isLogin);

  // exit the program when not login and don't have tries left
  if (!isLogin) return 1;


  // Login succesfull
  cout << "Welcome Wizard:  " << username << endl;

  int inputChoice, inputAngka;
  while (true){
    cout << "Menu:\n1. Deret Angka\n2. Perhitungan Acak\n3. Exit\nPilih Menu: ";
    cin >> inputChoice;
    if (inputChoice == 3) break;

    switch (inputChoice)
    {
    case 1:
      cout << "Input angka (10-100): ";
      cin >> inputAngka;

      if (inputAngka < 10 || inputAngka > 100){
        cout << "Diluar Batas!\n";
        cout << endl;
        break;
      }

      // if inputAngka is 1 or odd (1 is true in boolean)
      if (inputAngka % 2){
        int b=0, sum=0;
        for (int i=1; i <= inputAngka; i++){
          cout  << i << ". " << "b=" << b << endl;
          sum+=b;
          b+=5;
        }
        cout << endl << "Total: " << sum << endl;

	cout << "Balik ke menu? (y/n)";
	char backToMenu;
	cin >> backToMenu;
	if (backToMenu == 'n') return 0;
	else if (backToMenu == 'y') continue;
	else return 0;
        
      } else {
        int b=0, sum=0;
        for (int i=1; i <= inputAngka; i++){
          cout  << i << ". " << "b=" << b << endl;
          sum+=b;
          b+=7;
        }
        cout << endl << "Total: " << sum << endl;
	cout << "Balik ke menu? (y/n)";
	char backToMenu;
	cin >> backToMenu;
	if (backToMenu == 'n') return 0;
	else if (backToMenu == 'y') continue;
	else return 0;

      }

      break;
    case 2:
      cout << "Input Angka (100 - 1.000): ";
      cin >> inputAngka;
      if (inputAngka > 1000 || inputAngka < 100) {
        cout << "Diluar Batas!\n";
        cout << endl;
        break;
      }
      while (inputAngka > 0 && inputAngka <= 100000){
        int sisa;
        switch (sisa = inputAngka % 4)
        {
        case 0:
          inputAngka /= 7;
          cout << "x/7 = " << inputAngka << endl; 
          break;
        case 1:
          inputAngka *= 11;
          cout << "x*11 = " << inputAngka << endl; 
          break;
        case 2:
          inputAngka += 23;
          cout << "x+23 = " << inputAngka << endl; 
          break;
        case 3:
          inputAngka -= 29;
          cout << "x-29 = " << inputAngka << endl; 
          break;
        
        default:
          break;
        }
      }
      break;
    default:
      break;
    }
	cout << "Balik ke menu? (y/n)";
	char backToMenu;
	cin >> backToMenu;
	if (backToMenu == 'n') return 0;
	else if (backToMenu == 'y') continue;
	else return 0;
    cout << endl;

  }



  cout << endl;
  return 0;
}
