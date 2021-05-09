#include <iostream>
#include <string>
using namespace std;

void printIndex(string , char);

int main(){

  string s = "";
  char c ;

  cout << "Enter The String: ";
  getline(cin , s);

  cout << "Enter The Chartacter: ";
  cin >>  c;

  cout << "---------------" << endl;
  printIndex(s , c);

  return 0;
}

void printIndex(string s , char c){
  for(int i=0; i<s.length(); i++){
    if(s[i] == c)
      cout << c << " Found! in " << i << endl;
  }
}
