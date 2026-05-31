#include<iostream>
using namespace std;

int length(string s) {
	int size=0;
	for (int i = 0; s[i] != '\0'; i++) {
		size++;
	}

	return size;
}

string reverse(string str,int current=0) {

	   int size=0;
	
		size=length(str);

		if (current >=size / 2) {
			return str;
		}
	

	char temp;
      temp = str[current];
	str[current] = str[size - current - 1];
	str[size - current - 1] = temp;


	return reverse(str, current+1);
}

int main() {


	cout<<reverse("Hello",0);

}