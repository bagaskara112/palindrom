#include <iostream>
using namespace std;


bool is_palindrom(string text) {
	for (int i = 1; i < text.length() / 2; i++)
		if (text[i] != text[text.length() - i - 1])
			return false;

	return true;


}
int main() {
	string test1 = "abccba";
	string test2 = "race star";
	string test3 = "abcdcba";

	if (is_palindrom(test1))
		cout << test1 << "    is a palindrom" << endl;
	else
		cout << test1 << "     is not palindrom" << endl;
	if (is_palindrom(test2))
		cout << test2 << "    is a palindrom" << endl;
	else
		cout << test2 << "     is not palindrom" << endl;
	if (is_palindrom(test3))
		cout << test3 << "    is a palindrom" << endl;
	else
		cout << test3 << "     is not palindrom" << endl;
}