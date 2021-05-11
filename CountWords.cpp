#include <iostream>
#include <string>
using namespace std;

int CountWords(string &);

int main(){

  string str = "";

  cout << "Enter The String: ";
  getline(cin ,str);

  int words = CountWords(str);

  cout << "Words Number is: " << words << endl;

  return 0;
}

int CountWords(string &s){
  int found = 0;
  for (int i=0; i<s.length(); i++){
    if(s[i] == ' ')
      found++;
  }
  return ++found;
}
