#include <iostream>
using namespace std;

int main(){
  
  int n, fat, res;
  cout << "Digite um numero: ";
  cin >> n;
  fat = 1;

  while(n >= 1){
  fat *= n;
  n--;
  
}
cout << "O fatorial do numero digitado eh: " << fat << endl;
 return 0;
}
