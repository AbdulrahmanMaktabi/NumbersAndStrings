#include <iostream>
#include <string>
using namespace std;

int CountOfSearch(string , string);
int strLength(string);

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

int strLength(string str){
  int i=0;
  while(str[i] != '\0'){
    i++;
  }
  return i;
}

int CountOfSearch(string base, string search){
  int count = 0 , i = 0 , j = 0 , length;
  length = strLength(search);

  while (base[i] != '\0'){
    if (base[i] == search[j]){
      i++;
      j++;
    }else{
      j = 0;
      i++;
    }
    if (j == length){
      count++;
    }
  }
  return count;
}
