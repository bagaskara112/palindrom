#include <iostream>
#include <string>
using namespace std;

void main() {
	string kata;
	int i, pjkar, palindrom;
	cout << "Masukkan kata/kalimat :";
	getline(cin, kata);

	palindrom = 1;
	pjkar = kata.length();
	for (i = 0; i < pjkar; i++) {
		if (kata[i] != kata[pjkar - 1 - i]) {
			palindrom = 0;
			//0=false
			break;
		}
	}


	//membalikkan kata
	reverse(kata.begin(), kata.end());
	cout << "Kata  :" << kata << endl;


	cout << "Hasil :";
	if (palindrom == 1) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	
}