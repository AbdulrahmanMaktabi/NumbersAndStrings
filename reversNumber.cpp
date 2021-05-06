#include <iostream>
using namespace std;

int main(){

  int baseNum , revers = 0, digit;

  cout << "Enter The Base Number: ";
  cin >> baseNum;

  cout << "Based Number: " << baseNum <<endl;
  while (baseNum != 0){
    digit = baseNum%10;
    revers = revers*10 + digit;
    baseNum /= 10;
  }

  cout << "Reversed Number: " << revers << endl;
  return 0;
}
