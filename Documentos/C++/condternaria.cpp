#include <iostream>
using namespace std;

int main(){
   
   int i;
   cout << "Digite um numero: ";
   cin >> i;
   string texto = (i % 2 == 0) ? "O numero digitado eh par" : "O numero digitado eh impar";
   cout << texto << endl;
   return 0;
 }
