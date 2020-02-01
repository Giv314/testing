#include <iostream>
using namespace std;

int main(){

  int matriz[10][11];
  cout << "Tabuada do 1: " << endl;
  for(int x = 0; x < 10; x++){
    for(int y = 0; y < 11; y++){
    if(y == 0)
    continue;
    else
    matriz[x][y] = (x * y) + y;
    cout << matriz[x][y];
    if(y == 10 && x != 9)
    cout << ";" << endl << endl << "Tabuada do " << x + 2 << ": " << endl;
    else
    if (x == 9 && y == 10)
    cout << ";";
    else
    cout << ", ";
}
}
   cout << endl << endl;
return 0;
}
