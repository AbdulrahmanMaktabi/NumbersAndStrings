#include <iostream>
#include <string>
using namespace std;

int len(string);
string Replace(string , string , string);

int main(){

  string str = "" , word = "" , newWord  = "" , newStr = "";

  cout << "Enter The Base String: ";
  getline(cin , str);
  cout << "Enter The Word You want To Replace: ";
  getline(cin , word);
  cout << "Enter The New Word: ";
  getline(cin , newWord);

  newStr = Replace(str , word , newWord);

  cout << "New String: " << newStr << endl;
  return 0;
}

int len(string s){
  int i=0;
  while(s[i] != '\0'){
    i++;
  }
  return i;
}

string Replace(string str , string word , string rep){
  string newStr = "";
  int len1 = len(str) , len2 = len(word) , len3 = len(rep) ;

  for(int i=0; i<len1; ){
    if(i <= len1 - len2 && str.substr(i , len2) == word){
       newStr += rep;
       i += len2;
    }else{
      newStr += str[i];
      i++;
    }
  }
  return newStr;
}
