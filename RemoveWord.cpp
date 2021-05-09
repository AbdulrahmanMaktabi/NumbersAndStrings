#include <iostream>
#include <string>
using namespace std;

string removeWord(string , string);
int len(string);
void swapC(char& , char);
void swapC(char& , char&);

int main(){

  string str ="" , word = "" , StrWithOutWord = "";

  cout << "Enter the Base String: ";
  getline(cin , str);

  cout << "Enter The word you want to remove: ";
  getline(cin , word);

  StrWithOutWord = removeWord(str , word);

  cout << "-------------------------------------------" << endl;
  cout << "String Without Word is: " << StrWithOutWord << endl;

  return 0;
}

int len(string str){
  int i;
  for(i=0; str[i]!='\0'; i++){

  }
  return i;
}

void swapC(char &one , char two){
  char temp;
  temp = one;
  one = two;
  two = temp;
}

void swapC(char &one , char &two){
  char temp;
  temp = one;
  one = two;
  two = temp;
}

string removeWord(string str , string word){

  string newStr = "";
  int len1 = len(str) , len2 = len(word);

  for(int i=0; i<len1;){
    if(i <= len1 - len2 && str.substr(i , len2) == word){
      i += len2;
    }else{
      newStr += str[i];
      i++;
    }
  }

  return newStr;
}
