#include<iostream>
using namespace std;

int length(string s) {
	int size = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		size++;
	}

	return size;
}

bool palindrome(string str, int current = 0) {

	int size = 0;

	size = length(str);

	if (current >= size / 2) {
		return true;
	}


	if (str[current] == str[size - current - 1]) {
		return palindrome(str, current + 1);
	}
	else {
		return false;
	}

}

int main() {


	string str1 = "MADAM";
	string str2 = "Hello";

	

	if (palindrome(str1) == true) {
		cout << "The string " << str1 << " is palindrome" << endl;
	}
	else {
		cout << "The string " << str1 << " is not a palindrome" << endl;

	}


	if (palindrome(str2) == true) {
		cout << "The string " << str1 << " is palindrome" << endl;
	}
	else {
		cout << "The string " << str2 << " is not a palindrome" << endl;

	}
	
}