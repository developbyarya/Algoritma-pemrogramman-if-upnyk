#include <iostream>

using namespace std;

int main()
{
  cout << "Masukan: " << endl;

  cout << "Jumlah Baris M A & B: ";
  int baris;
  cin >> baris;

  cout << "Jumlah Kolom A : ";
  int kolomA;
  cin >> kolomA;

  cout << "Jumlah Kolom B : ";
  int kolomB;
  cin >> kolomB;

  int matrixA[baris][kolomA];
  int matrixB[baris][kolomB];
  int matrixC[baris][kolomB];
  
  cout << "Masukan Nilai Matrix A : " << endl;
  for (int i=0; i < baris; i++){
    for (int j=0; j < kolomA; j++){

      cout << "[" << i << "]" << "[" << j << "]" << " = ";
      cin >> matrixA[i][j];
    }
  }
  cout << "Masukan Nilai Matrix B : " << endl;
  for (int i=0; i < baris; i++){
    for (int j=0; j < kolomB; j++){

      cout << "[" << i << "]" << "[" << j << "]" << " = ";
      cin >> matrixB[i][j];
    }
  }

  for (int i=0; i<baris; i++){
    for (int j=0; j<kolomB; j++){
      int sum =0;
      for (int k=0; k < baris; k++){
	sum += matrixA[i][k] * matrixB[k][j];
      }
      matrixC[i][j] = sum;
    }
  }
  for (int i=0; i < baris; i++){
    for (int j=0; j < kolomB; j++){
      cout << matrixC[i][j] << " ";
    }
    cout << endl;
  }

  // C[0][0] = A[0][0]*B[0][0] + A[0][1] * B[1][0]
  // C[0][1] = A[0][0]*B[0][1] + A[0][1] * B[1][1]
  // C[1][0] = A[1][0]*B[0][0] + A[1][1] * B[1][0]

  return 0;
}
