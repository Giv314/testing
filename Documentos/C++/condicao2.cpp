#include <iostream>
using namespace std;

int main(){
  
  int num1 = 0;
  cout << "Digite um numero entre 10 e 100" << endl;
  cin >> num1;
  if(num1 < 100 && num1 > 10){
    cout << "O numero digitado esta no intervalo de 10 a 100" << endl;
  }else{
    if(num1 < 10)
    cout << "O numero digitado eh menor que 10" << endl;
    if(num1 > 100)
    cout << "O numero digitado eh maior que 100" << endl;
    if(num1 == 10 || num1 == 100)
    cout << "O numero digitado corresponde a um dos estremos." << endl;
}
 return 0;
}
