#include <bits/stdc++.h>
using namespace std;

int main() {
	
	//find the palindrome sequence
	int n,saved, rev = 0;
	cin >> n;
	
	saved = n;
	
	while(n != 0) {
		int last_digit = n % 10;
		rev = ( rev * 10) + last_digit;
		n = n / 10;
	}
	
	if(saved == rev)
		cout << "Palindrome Sequence Found" << "\n";
	else 
		cout << "Palindrom Sequence Not Found " << "\n";
	
	return 0;
}
