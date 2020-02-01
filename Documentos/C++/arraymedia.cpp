#include <iostream>
using namespace std;

int main(){

  int vet[5];

  cout <<"Digite 5 valores inteiros" << endl;
  
for(int i = 0; i <= 4; i++){
  cin >> vet[i];
}
  int k = (vet[0] + vet[1]+ vet[2]+ vet[3]+ vet[4]) / 5;
  cout << "A media aritmetica entre os valores digitados resulta em: " << k << endl;
return 0;
}
