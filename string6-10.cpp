#include <iostream>
#include <string>
#include <string.h>
using namespace std;
string itc_even_place(string str) {
	string rez = "";
	for (int i = 1; i < str.length(); i += 2) {
		rez += str[i];
	}
	if (rez.empty()) {
		rez =  "-1";
	}
	return rez;
	
}
double  itc_percent_lower_uppercase(string str)  {
	double prop, stroch;
	prop = 0;
	stroch = 0;
	int str_size = str.size();
	for (int i = 0; i < str_size; i++) {
		if (islower(str[i])) stroch++;
		if (isupper(str[i])) prop++;

	}
	return prop / stroch * 100;
}
string itc_reverse_str(string str){
	int str_size = str.size();
	for (int i = 1; i <= str_size; i++){
		cout << str[str_size - i];
	
	}
	 return 0;
}
string itc_slice_str(string str, int start, int end) {
	int str_size = str.size();
	if (start > str_size) return str;
	for (int i = start; i <= end; i++) {
		cout << str[i];
		if (end > str_size) {
			end = str_size;
		}
	}
	return 0;
}
bool itc_equal_reverse(string str) {
	string str1;
	str1 = itc_reverse_str(str);
	if (str == str1) return "1";
	else return "0";

}
