#include <iostream>
#include <string>
using namespace std;

int CountOfSearch(string , string);

int main(){

  string baseStr , search;
  int count;

  cout << "Enter The Base String: ";
  getline(cin , baseStr);

  cout << "Enter The Word You Want To Search: ";
  getline(cin , search);

  count = CountOfSearch(baseStr , search);

  if (count > 0)
    cout << "Found! " << count << " Times" << endl;
  else
    cout << "Not Found!" << endl;

  return 0;
}

int CountOfSearch(string str1, string str2){
  int count = 0;

  for (int i=0; i<str1.length() - str2.length() + 1; i++){
    if (str1.substr(i , str2.length()) == str2)
      count++;
  }
  return count;
}
