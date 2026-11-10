//: C02:CountSearchWord.cpp
// Create a program that counts the occurrence of a particular word in a file (use the string class’ operator ‘==’ to find the word)
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
  cout << "Enter a word to search for: ";
  string searchWord;
  cin >> searchWord;
  int count = 0;
  for(int i = 0; i < words.size(); i++) {
    if (words[i] == searchWord) {
      count++;
    }
  }
  cout << "The word '" << searchWord << "' occurs " << count << " times in the file." << endl; 
} ///:~
