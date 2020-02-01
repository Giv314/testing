#include <iostream>
using namespace std;

int main(){
  
  int num1;
  cout << "Digite um numero inteiro: ";
  cin >> num1;
  if (num1 % 2 == 0)
  cout << "O numero digitado eh par ";
  else
  cout << "O numero digitado eh impar ";

  if(num1 % 4 == 0 || num1 % 6 == 0 || num1 % 8 == 0 || num1 % 9 == 0 || num1 % 10 == 0)
  cout << "e nao eh primo" << endl;
  else
  if(num1 % 7 == 0)
  cout << "e eh multiplo de 7" << endl;
  else
  cout << "e eh primo" << endl;
  return 0;
}
