#include <bits/stdc++.h>


using namespace std;

int dis(string s) {
	bool f[200]; memset(f, true, sizeof(f) );
	int cnt = 0;
	for(char c:s) {
		if(f[c]) {
			cnt++;
		}
		f[c] = false;
	}
	return cnt;
}

int main(int argc, char *argv[]) {
	int t; cin >>t;
	for(int c = 1; c <= t; ++c){
		cout <<"Case #" <<c <<": ";
		int n; cin >>n; cin.ignore(100, '\n');
		cout <<n <<endl;
		string l, s; getline(cin, l);
		int m, d; m = dis(l);
		cout <<l <<' ' <<m <<endl;
		for(int i = 1; i < n; ++i) {
			getline(cin, s);
			d = dis(s);
			if(m < d) {
				m = d;
				l = s;
			}
			cout  <<l <<' ' <<s <<' ' <<d <<endl;
		}
	}
	return 0;
}
