#include <iostream>
using namespace std;

void primeNumbers(int);
bool isPrime(int);

int main(){

  int n;
  cout << "Enter The Number: ";
  cin >> n;

  primeNumbers(n);
  return 0;
}

void primeNumbers(int n){
  for (int i=1; i<=n; i++){
    if (isPrime(i))
      cout << i << " , ";
  }
}

bool isPrime(int n){
  if(1 >= n)
    return false;

    for(int i=2; i<n; i++){
      if(n%i == 0)
        return false;
    }

  return true;
}
