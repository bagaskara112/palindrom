#include <iostream>
#include <string>

using namespace std;

void main() {
	int , j;
	string kata;
	bool palindrome = true;
	cout << "Masukan kata :";
	getline(cin, kata); 
	j = kata.length();

	for (i = 0; 1 < j; i++) {
		if (kata[i] != kata[j - i - 1]) {
			palindrome = false;
			break;
		}
	}
	
		
	}
}
	