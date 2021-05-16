#include <iostream>
using namespace std;

int factorialFun(int);

int main(){

  int n;
  cout << "Enter The Number: ";
  cin >> n;

  cout << factorialFun(n) << endl;

  return 0;
}

int factorialFun(int base){
  int res = 1;
  for (int j=1; j<=base; j++){
    res *= j;
  }
  return res;
}
