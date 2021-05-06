#include <iostream>
using namespace std;

int main(){

  int baseNum , total = 0 , m;
  cout << "Enter Number: ";
  cin >> baseNum;

  while(baseNum != 0){
    total += baseNum%10;
    baseNum /= 10;
  }
  
  cout<<"Digit Total : "<<total;
  return 0;
}
