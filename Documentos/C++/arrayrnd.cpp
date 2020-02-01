#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

  float matriz[5][6];
  for(int x = 0; x < 5; x++){
     for(int y = 0; y < 5; y++){
         matriz[x][y] = (float)rand() / RAND_MAX;
}
}
  float total;
  for(int x = 0; x < 5; x++){
     for(int y = 0; y < 5; y++){
         matriz[x][5] += matriz[x][y];
}
total += matriz[x][5];
}
   cout << endl;
   for(int x = 0; x < 5; x++){
     for(int y = 0; y < 6; y++){
         string text;
         text  = (y < 4) ? " + " :
         (y != 5) ? " = " : "\n";
         cout << matriz[x][y] << text;

}
}
cout << endl << "O valor total resulta em " << total << endl << endl;
}
