#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printWordsOccurence(string);

int main(){

  string s = "";

  cout << "Enter The Text: ";
  getline(cin , s);

  printWordsOccurence(s);
  return 0;
}

void printWordsOccurence(string s){
  string word = "";
  vector <string>words;
  int counter , j=0;
  s += " ";

  for (auto i : s){
    if (i != ' ')
      word += i;
    else {
      words.push_back(word);
      word = "";
    }
  }

  for (int i=0; i<words.size(); i++){
    counter = 1;
    for(int j=i+1; j<words.size(); j++){
      if (words[i] == words[j]){
        counter++;
        words[j] = " ";
      }
    }
    if (words[i] != " "){
      cout << "{ " << counter << " } " << words[i] << endl;
    }
  }

}
