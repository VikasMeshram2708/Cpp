#include <bits/stdc++.h>
using namespace std;


int main() {
	//reverse the given number;
	int n, rev = 0;
	cin >> n;
	
	while(n != 0){
		int last_digit = n % 10;
		rev = (rev*10) + last_digit;
		n /= 10;
	}
	
	cout << rev << "\n";
	return 0;
}

