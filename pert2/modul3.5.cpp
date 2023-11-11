#include <iostream>
using namespace std;

int main(){
   int x,y,z,m,n;
   float m2;
   x = 9 + 4; /* menghitung 9+4 */
   y = 9 - 4; /* menghitung 9-4 */
   z = 9 * 4; /* menghitung 9*4 */
   m = 9 / 4; /* menghitung 9/4 */
   m2 = 9.0 / 4.0; /* menghitung 9/4 */
   n = 9 % 4; /* menghitung 9%4 */
   system("clear");
   
   cout << "Nilai dari 9 + 4 = " << x;
   cout << "\nNilai dari 9 - 4 = " << y;
   cout << "\nNilai dari 9 * 4 = " << z;
   cout << "\nNilai dari 9 / 4 = " << m;
   cout << "\nNilai dari 9 mod 4 = " << n << endl;
   cout << "Nilai dari 9.0 / 4.0 = " << m2 << endl;
   return 0;
}
