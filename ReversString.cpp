#include <iostream>
#include <string>
using namespace std;

string reverse1(string);
string reverse2(string);

int main(){

  string base , reversed ,reversed2;

  cout << "Enter The string: ";
  getline(cin , base);

  reversed = reverse1(base);
  reversed2 = reverse2(base);

  cout << "Reversed String is1: " << reversed << endl;
  cout << "Reversed String is2: " << reversed2 << endl;

  return 0;
}

string reverse1(string str){

  int length = str.length();
  string rev = "";

  for (int i=0; i<length; i++){
    rev = str[i] + rev;
  }

  return rev;
}

string reverse2(string str){

  for(int i=0; i<str.length()/2; i++){
    swap(str[i] , str[str.length()- i - 1]);
  }
  return str;
}
