#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
	int n; cin >>n;
	int a[100+5];
	for (size_t i = 0; i < n; i++) {
		cin >>a[i];
	}
	bool s = true;
	while(s) {
		s = false;
		for (size_t i = 0; i < n-1; i++) {
			if(a[i] > a[i+1] ) {
				swap(a[i+1], a[i]);
				cout <<i+1 <<' ' <<i+2 <<endl;
				s = true;
			}
		}
	}
return 0;
}
