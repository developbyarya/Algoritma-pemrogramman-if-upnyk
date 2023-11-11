#include <iostream>
using namespace std;

/*
 *Aku adalah X, ketika aku ditambah dengan 3.75 aku menjadi Y. 
 Ketika Y dikali 15 ia menghasilkan Z, lalu Z dibagi dengan 30 dan menghasilkan A. 
 A nantinya akan dikurangi dengan 21.5 dan menghasilkan B, lalu B mod 7 menghasilkan Az.

Pertanyaanya berapakah Az, Jika X nya adalah 75.25?
Analisis:
X = 75.25
Y = X + 3.75
Z = Y * 15
A = Z / 30
B = A - 21.5
Az = B mod 7
karena x dan y menghasilkan float atau double. maka variable lain diasumsikan float
terkecuali B dan Az karena operator mod (%) tidak berlaku pada float/double
 */

int main(){
   system("clear");
   float x,y,z,a;
   int b, az;
   x = 75.25;
   y = x + 3.75;
   z = y*15;
   a = z/30;
   b = a - 21.5;
   az = b % 7;
   cout << "Aku adalah X, ketika aku ditambah dengan 3.75 aku menjadi Y. " << endl;
   cout << "Ketika Y dikali 15 ia menghasilkan Z, lalu Z dibagi dengan 30 dan menghasilkan A." << endl;
   cout << "A nantinya akan dikurangi dengan 21.5 dan menghasilkan B, lalu B mod 7 menghasilkan Az." << endl;

   cout << "Hasil Az adalah: " << az << endl;
}
