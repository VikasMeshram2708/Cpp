#include <bits/stdc++.h>
using namespace std;


const int N = 1e7+10;

void isSieve(int n) {
	vector<bool> vec(N, 1);
	vec[0] = vec[1] = false;
	for(int i = 2; i <= N; ++i) {
		if(vec[i] == true) {
			for(int j = 2 * i ; j <= N ; j+=i) {
				vec[j] = false;
			}
		}
	}
	
	while(n--) {
		if(vec[n]) {
			cout << "prime\n" << endl;
		} else {
			cout << "notPrime\n" << endl;
		}
	}
}
int main() {
	int n;
	cin >> n;
	
	isSieve(n);
	return 0;
}
