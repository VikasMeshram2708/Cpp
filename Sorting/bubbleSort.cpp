#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v) {
	int n = v.size();
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n - 1; ++j) {
			if(v[j] > v[j+1]) {
				swap(v[j], v[j+1]);
			}
		}
	}
} 
int main() {
	int n;
	cin >> n;
	
	vector<int> v(n);
	for(auto &value : v) {
		cin >> value;
	}
	cout << "before bubble sort" << endl;
	for(auto &value : v) {
		cout << value << " ";
	}
	cout << endl;
	cout << "After bubble sort" << endl;
	bubbleSort(v);
	for(auto &val : v) {
		cout << val << " ";
	}
	return 0;
}
