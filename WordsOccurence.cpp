
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printWordsOccurence(string);

int main() {

    string baseStr = "";

    cout << "Enter The Base String: ";
    getline(cin, baseStr);

    printWordsOccurence(baseStr);

    return 0;
}

void printWordsOccurence(string s) {
    string word = "";
    vector <string> arr;
    int j = 0 , counter = 1;
    s += " ";

    for (auto i : s) {
        if (i == ' ') {
            arr.push_back(word);
            word = "";
        }
        else
            word += i;
    }

    for (int i = 0; i < arr.size(); i++) {
        counter = 1;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                counter++;
                arr[j] = "";
            }
        }
        if(arr[i] != "")
        cout << "{ " << counter << " } " << words[i] << endl;
    }
}
