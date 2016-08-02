#include "stdio.h"
#include "string"
#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
	int t; cin >>t;
	string s, r;
	for(int cs = 1; cs <= t; ++cs){
		cin >>s;
		cout <<"Case #" <<cs  <<": ";
		r = string();
		for(char c:s) {
			if(r[0] <= c) {
				r = c + r;
			} else {
				r.push_back(c);
			}
		}
		cout <<r <<endl;
	}
	return 0;
}
