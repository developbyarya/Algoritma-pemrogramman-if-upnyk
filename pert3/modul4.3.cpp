#include <stdio.h>

int main(){
   int jumlah;
   char huruf, nim[10];
   float nilai;
   printf("Masukan sebuah karakter : ");
   scanf("%c", &huruf);
   printf("Masukan sebuah bilangan bulat : ");
   scanf("%d", &jumlah);
   printf("Masukan nim anda : ");
   scanf("%s", nim);
   printf("Masukan sebuah bilangan pecahan : ");
   scanf("%f", &nilai);
   printf("\nNilai Variable yang anda masukan : ");
   printf("\nJumlah = %d", jumlah);
   printf("\nhuruf = %c", huruf);
   printf("\nnim = %s", nim);
   printf("\nnilai = %.2f \n", nilai);

}
