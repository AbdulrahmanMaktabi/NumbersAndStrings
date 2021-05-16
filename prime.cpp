#include <iostream>
using namespace std;

bool IsPrime(int n);

int main(){

  int num;

  cout << "Enter The Number: ";
  cin >> num;

  cout << (IsPrime(num) ? "True" : "False") << endl;
  return 0;
}

bool IsPrime(int n){
  if (1 >= n){
    return false;
  }
  
  for(int i=2; i<n; i++){
    if(n % i == 0)
      return false;
  }
  return true;
}
