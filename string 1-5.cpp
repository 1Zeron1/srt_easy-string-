#include <iostream>
#include <string>
#include <string.h>
using namespace std;
string itc_hello_str(string name) {
	cin >> name;
	cout << "Hello," << name;


	return 0;
}
long long itc_len(string name) {
	int g = 0;
	int chislo = 0;
	getline(cin, name);
	int name_size = name.size();
	for (int i = 0; name[i] != '\0'; i++) {
		if (name[i] == ' ') {
			g++;
		}

	}
	chislo = name_size - g;
	return chislo;
}
void itc_print_copy_str(string str, int number) {
	for (int i = 0; i < number; i++) {
		cout << str;
	}
}
void itc_first_end_three(string str) {
	int str_size = str.size();
	if (str_size > 5) {
		cout << str[0] << str[1] << str[2] << str[str_size - 3] << str[str_size - 2] << str[str_size - 1];
	}
	else {
		for (int i = 0; i < str_size; i++) {
			cout << str[0];
		}

	}

}
int itc_count_char_in_str(char ch, string str) {
	int g = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ch) {
			g++;
		}

	}
	return g;
}