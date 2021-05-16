#include <iostream>
using namespace std;

int powerFun(int , int);

int main(){

  int base , power;
  cout << "Enter The Base And The Power: ";
  cin >> base >> power ;

  cout << powerFun(base , power) << endl;
  return 0;
}

int powerFun(int base , int power){
  int res = 1;

  for(int i=1; i<=power; i++){
    res *= base;
  }
  return res;
}
