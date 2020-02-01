#include <iostream>
using namespace std;

int main(){

  int vetor[5];
  cout << "Digite 5 numeros inteiros:" << endl;
  for(int i = 0; i < 5; i++){
  cin >> vetor[i];
}
  for(int i = 0; i < 5; i++){
  cout << "O valor de vetor[" << i + 1 << "] eh " << vetor[i] << endl;
}
return 0;
}
