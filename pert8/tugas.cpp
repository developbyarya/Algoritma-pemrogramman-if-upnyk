#include <iostream>
using namespace std;

char pin[] = "089";
int saldo = 1000;

int cekSaldo(){
  return saldo;
}

int tarikTunai(int amount){
  saldo -= amount;
  return saldo;
}

int setor(int amount){
  saldo += amount;
  return saldo;
}

void menu(){
  
  bool next = true;
  while(next){
  int choice;
  cout << "Pilihan Menu: " << endl;
  cout << "1. Cek Saldo: " << endl;
  cout << "2. Tarik Tunai: " << endl;
  cout << "3. Setor Tunai: " << endl;
  cout << "4. Keluar: " << endl;
  cout << "Pilih: ";
  cin >> choice;
  int jumlah;

  switch(choice){
    case 1:
      cout << "Saldo: $" << cekSaldo() << endl;
      break;
    case 2:
      cout << "Jumlah: $";
      cin >> jumlah;
      if (jumlah > cekSaldo()){
	cout << "Saldo Tidak Mencukupi" << endl;
	break;
      }
      cout << "Sisa Saldo: $" << tarikTunai(jumlah) << endl;
      break;
    case 3:
      cout << "Jumlah: $ ";
      cin >> jumlah;
      cout << "Saldo Akhir: " << setor(jumlah) << endl;
      break;
    case 4:
      next = false;
      cout << "Good bye!" << endl;

      break;
    default:
      cout << "Wrong choice!";
      break;
  }
  cout << endl << endl;
}


}

int main(){
  int tries=3;
  string Ipin;
  bool isLogin =false;


  while(tries > 0){
    cout << "Selamat Datang!\nMasukan Pin terlebih dahulu\n";
    cout << "Pin: ";
    cin >> Ipin;

    if (pin == Ipin ){
      isLogin = true;
      break;
    }
    cout << "Pin Wrong! " << --tries << "left";
  }

  if (!isLogin) return 1;


  menu();


  

  
  return 0;
}
