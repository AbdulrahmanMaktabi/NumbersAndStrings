#include <iostream>
using namespace std;

int reversNum(int);

int main(){

  int baseNum;

  cout << "Enter The Number To Check: ";
  cin >> baseNum;


  if (baseNum == reversNum(baseNum))
    cout << "its Palindrome Number" << endl;
  else
    cout << "its not Palindrome Number" << endl;

  return 0;
}

int reversNum(int base){
  int  revers = 0 , digit;

  while (base != 0){
    digit = base % 10;
    revers = revers*10 + digit;
    base /= 10;
  }

  return revers;
}
