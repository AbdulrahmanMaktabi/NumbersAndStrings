#include <iostream>
#include <string>
using namespace std;

int main(){

  string s1 , s2 , s3;

  cout << "Enter S1: ";
  getline(cin , s1);
  cout << "Enter S2: ";
  getline(cin , s2);
  cout << "Enter S3: ";
  getline(cin ,s3);

  cout << "-------------------------------" << endl;

  cout << "is s1 + s2 == s3: " << s1+s2 == s3 ? "True" : "False" << endl;

  return 0;
}
