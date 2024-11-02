#include <iostream>
#include <string>

using namespace std;

int main() {
	string kata;
	bool palindrom = true;

	cout << "Masukan kalimat :"; getline(cin, kata);
	string str3 = kata;

	reverse(begin(str3), end(str3));
	cout << str3;
}

//string chechPalindrom(string& word){
//	
// }