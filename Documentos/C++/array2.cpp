#include <iostream>
using namespace std;

int main(){
  int t, vetor[t];
  cout << "Digite o valor do indice do vetor." << endl;
  cin >> t;
  cout << "Digite os numeros inteiros conforme o numero do indice:" << endl;
  for(int i = 0; i < t; i++){
  cin >> vetor[i];
}
  for(int i = 0; i < t; i++){
  cout << "O valor de vetor[" << i + 1 << "] eh " << vetor[i] << endl;
}
return 0;
}
