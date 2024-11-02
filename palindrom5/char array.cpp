#include <iostream>
#include <string>
using namespace std;

void main() {
	/*char str1[100] = " Hello Word ";
	char str2[25] = "Artinya Hello Dunia \n";*/

	//penggunaan func strcat_s(a,b)
	//strcat_s(str1, str2); 
	//cout << " Hasil Dari strcat_s(a,b) adalah "<<str1;

	//penggunaan function strcmp(a,b)
	//cout << " perbandingkan str1 dengan str2 adalah " << strcmp(str1, str2);

	//penggunaan punction strcpy_s(a,b)
	/*strcpy_s(str1, str2);
	cout << " Hasil Penggunaan strcpy_s(str1, str2) adalah " << str1;*/

	//penggunaan function strlen(a)
	//cout << "Panjang karakter dari str2 adalah " << strlen(str2);

	//penggunaan function _strrev(a)
	/*char str3[25] = "Ayo Mabar";

	cout << str3 << " Dibalik menjadi : ";
	_strrev(str3);
	cout << str3;*/
	//string kata;
	
	//string str4 = " di kantin";
	//string r = "";


	string str3;
	cout << "Masukan kata :"; getline(cin, str3);
	
	reverse(str3.begin(), str3.end());
	cout << str3;


	//array index
	/*string nilai[6] = { "m","a","l","a","m"};

	cout << nilai[0] << endl;
	cout << nilai[1] << endl;
	cout << nilai[2] << endl;
	cout << nilai[3] << endl;
	cout << nilai[4] << endl;*/



}