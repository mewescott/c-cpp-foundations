//: C02:WhiteSpaceCount.cpp
// Break a file into whitespace-separated words and count them
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> words;
  ifstream in("GetWords.txt");
  string word;
  while(in >> word)
    words.push_back(word); 
  for(int i = 0; i < words.size(); i++)
    cout << words[i] << endl;
  cout << "Number of words in file: " << words.size() << endl;
} ///:~
