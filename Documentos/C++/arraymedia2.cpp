#include <iostream>
using namespace std;

int main(){
  
  int t;
  cout << "Digite o indice do vetor: ";
  cin >> t;
  double vet[t];
  cout <<"Digite os valores do vetor" << endl;
  
for(int i = 0; i < t; i++){
  cin >> vet[i];
}
  double total = 0;
  for(int i = 0; i < t; i++){
  total += vet[i]; 
}
  cout << fixed;
  cout << "A media aritmetica entre os valores digitados resulta em: " << total / t << endl;
return 0;
}
