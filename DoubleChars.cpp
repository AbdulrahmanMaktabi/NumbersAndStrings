#include <iostream>
#include <string>
using namespace std;

string DoubleChars(string);

int main(){
  cout<<DoubleChars("admin")<<endl;
  return 0;
}

string DoubleChars(string s){
  string newS = "";
  for(int i=0; i<s.length(); ){
    newS += s[i];
    newS += s[i];
    i++;
  }
  return newS;
}
