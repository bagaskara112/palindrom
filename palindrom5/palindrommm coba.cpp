#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& word) {
	string reversedWord = word;
	reverse(reversedWord.begin(), reversedWord.end());
	return word == reversedWord;
}
int main() {
	string input;

	cout << "Masukan kata:"; cin >> input;

	if (isPalindrome(input)) {
		cout << "Kata ini adalah panlindrom." << endl;
	}
	else {
		cout << "Kata ini bukan palindrom." << endl;
	}
}
