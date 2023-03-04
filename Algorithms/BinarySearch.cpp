#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &vec, int key) {
	int s = 0, e = vec.size() - 1;
	while( s <= e) {
		int mid = s + (e-s)/2;
		if(vec[mid] == key) {
			return mid;
		}
		if(vec[mid] < key) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	
	vector<int> v(n);
	for(int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	
	int key;
	cin >> key;
	
	sort(v.begin(), v.end());
	cout << "sorted array" << endl;
	for(int &value : v) {
		cout << value << " ";
	}
	cout << endl;
	cout << "key index at: " << endl;
	cout << binarySearch(v, key) << endl;
	return 0;
}
