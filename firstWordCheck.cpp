#include <iostream>
#include <string>
using namespace std;

int main(){

  string s1 , s2 ;

  cout << "Enter The Text: ";
  getline(cin , s1);

  cout << "Enter The Text: ";
  getline(cin , s2);

  int len_s2 = s2.length();

  if((s1.substr(0 , len_s2)).find(s2) != string::npos)
    cout << "Found!" << endl;
  else
    cout << "Not Found!" << endl;
  return 0;
}
