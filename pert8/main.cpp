#include <iostream>

using namespace std;

int kpk(int a, int b, int iter=1){
  if (a==1 || b==1) return a*b;

  if (a%b == 0) return a;

  return kpk(a*iter, b, iter+1);
}

int fpb(int a, int total=0){
  
}

void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = kpk(14,12);

  cout << a << endl;

  return 0;
}
