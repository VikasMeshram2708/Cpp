#include <bits/stdc++.h>
using namespace std;

void printDisntinct(int arr[], int n) {
	sort(arr, arr+n);
	for(int i = 0; i < n; ++i) {
		int temp = arr[i];
		if((temp + 1) == arr[i+1]) {
			continue;
		}
		else {
			cout << temp + 1 << "\n";
		}
	}
} 
int main() {
	
	//print the distinct integer
	int n;
	cin >> n;
	
	int arr[n];

	for(int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	
	printDisntinct(arr, n);
	return 0;
}
	
