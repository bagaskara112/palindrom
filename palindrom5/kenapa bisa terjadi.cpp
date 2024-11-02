#include <iostream>
#include <string>
using namespace std;

void main() {
	string kata;
	int i, pjkar, palindrom,kat;

	cout << "Masukkan kata :";
	getline(cin, kata);

	palindrom = 1;
	pjkar = kata.length();
	
	for (i = 0; i < pjkar; i++) {
	//menentukan seperti di exel
		//cout << i << endl;
		//cout << i << " : " << pjkar << endl;
		//cout << i << " : " << pjkar -1 << endl;
		//cout << i  << " : " <<pjkar -1-i << endl;
		cout << kata[i] << " : " << kata[pjkar-1-i] << endl;
		
	}


}