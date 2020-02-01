#include <iostream>
using namespace std;

int main(){

  int var1 = 100;
  char var2 = 's';
  float var3 = 2.45;
  double var4 = 3.1415;

  cout << "O valor da primeira variável é " << var1 << endl;
  cout << "O valor da segunda variável é " << var2 << endl;
  cout << "O valor da terceira variável é " << var3 << endl;
  cout << "O valor da quarta variável é " << var4 << endl;

  cout << "\nO tamanho da primeira variável é " << sizeof(var1) << " bytes" << endl;
  cout << "O tamanho da segunda variável é " << sizeof(var2) << " bytes" << endl;
  cout << "O tamanho da terceira variável é " << sizeof(var3) << " bytes" << endl;
  cout << "O tamanho da quarta variável é " << sizeof(var4) << " bytes" << endl;

  getchar();
  return 0;

  }
