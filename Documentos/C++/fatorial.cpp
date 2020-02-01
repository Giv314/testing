#include <iostream>
using namespace std;

int main(){

  int i, j;
   cout << "Digite um numero: " << endl;
   cin >> i;
   for(j = 1; i > 1 ; i--){
    
   j *= i;
}
cout << "O fatorial do numero digitado eh: " << j << endl;
 return 0;
}
