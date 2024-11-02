#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrom(const string& word) {
	string reversedWord = word;
	reverse(reversedWord.begin(), reversedWord.end());
	return word == reversedWord;
}
int main() {
	string input;

	cout << "Masukan kata:"; cin >> input;
}