#include <iostream>
#include <string>
using namespace std;

int main(){

  string s1 , s2 , s3 , s4;
  int i = 0;

  cout << "Enter S1: ";
  getline(cin , s1);
  cout << "Enter S2: ";
  getline(cin , s2);
  cout << "Enter S3: ";
  getline(cin ,s3);

  cout << "-------------------------------" << endl;

  cout << "is s1 + s2 == s3: " << ((s1+s2 == s3) ? "True" : "False") << endl;

  cout << "is s1 part of s2 or s1 == s2: " << ((s1.find(s2 , 0)) ? "True" : "False") << endl;

  cout << "is s1 length taller than s2 length: " ;
  if (s1.length() > s2.length()){
    s4 = s1 + s2;
    cout << "True" << endl;
  } else cout << "False" << endl;

  cout << "is s2 length taller than s1 length: " ;
  if (s1.length() < s2.length()){
    s4 = s1 + s2;
    cout << "True" << endl;
  } else cout << "False" << endl;

  cout << "is s2 /2 == s1: " << ((s1.find(s2 , s1.length()/2)) ? "True" : "False") << endl;

  cout << "Print Chartacters on the first side of the s1: " ;
  while(i <= s1.length()/2){
    cout << s1[i] << " " ;
    i++;
  }


  return 0;
}
