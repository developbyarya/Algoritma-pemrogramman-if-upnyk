#include <iostream>
using namespace std;
int main(){
   int x; //mendeklarasikan variabel x
   x = 7 ; //mengisikan nilai ke dalam variabel x dengan nilai 7
   //melakukan pre-increment
   cout << "Nilai x awal : " << x << endl;
   cout << "Nilai ++x : " << --x << endl;
   cout << "Nilai x akhir : " << x << endl << endl;
   //mengubah nilai x menjadi 10
   x = 10 ;
   //melakukan post-increment
   cout << "Nilai x awal : " << x << endl;
   cout << "Nilai x++ : " << x-- << endl;
   cout << "Nilai x akhir : " << x << endl;
   return 0;
}
