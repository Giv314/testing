#include <iostream>
using namespace std;

int main(){

  int num1, res;
  cout << "Digite um numero: ";
  cin >> num1;
  for(res = 1; res < 11; res++){
  cout << "\nO numero digitado vezes "<< res << " eh igual a " << num1 * res << endl;

}
cout << endl;
return 0;
}
