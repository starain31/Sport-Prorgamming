#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
	int n; cin >>n;
	if(n == 1){
		int b; cin >>b;
		if(b == 1){
			cout <<"YES";
		} else {
			cout <<"NO";
		}
		return 0;
	}
	bool f = false;
	while (n--) {
		int b; cin >>b;
		if(b == 0) {
			if(f) {
				cout <<"NO";
				return 0;
			}
			f = true;
		}
	}
	if(f){
		cout <<"YES";
	} else {
		cout <<"NO";
	}
	return 0;
}
