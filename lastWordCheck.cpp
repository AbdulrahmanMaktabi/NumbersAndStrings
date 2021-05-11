#include <iostream>
#include <string>
using namespace std;

int main(){


  // string s1 = "admin panle";
  // cout << s1.substr(11 , 5) << endl;
  string s1 , s2 ;

  cout << "Enter The Text: ";
  getline(cin , s1);

  cout << "Enter The Text: ";
  getline(cin , s2);

  int len_s2 = s2.length();
  int len_s1 = s1.length();

  if(s1.substr(len_s1 - len_s2 , len_s2).find(s2) != string::npos)
    cout << "Found!" << endl;
  else
    cout << "Not Found!" << endl;
  return 0;
}
