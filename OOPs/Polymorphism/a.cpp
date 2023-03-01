// Function Overloading
#include <bits/stdc++.h>
using namespace std;

class A {
public:
	int sum(int a) {
		return a;
	}
	
	float sum(float a, float b) {
		return (a + b);
	}
};
int main() {
	
	A a;
	cout << a.sum(1,2);
	//cout << a.sum(1.5, 2.6);
	return 0;
}
