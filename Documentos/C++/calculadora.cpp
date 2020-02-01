#include <iostream>
using namespace std;

int main(){

  int num1, num2;
  
  cout << "Welcome to the calcuator." << endl;
  cout << "Digite um numero" << endl;
  cin >> num1;
  cout << "Digite um outro numero" << endl;
  cin >> num2;
  cout << endl;

  cout << "soma: " << num1 + num2 << endl;
  cout << "subtracao: " << num1 - num2 << endl;
  cout << "multiplicacao: " << num1 * num2 << endl;
  cout << "divisao: " << num1 / num2 << endl;
  cout << "O resto da divisão entre os numeros: " << num1 % num2 << endl;

  getchar();
  return 0;
}
