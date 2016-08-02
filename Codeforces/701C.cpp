#include "bits/stdc++.h"

//#define DEBUG
#ifdef DEBUG
#define D(x) std::cout <<#x <<" := " <<x << std::endl
#else
#define D(x)
#endif

using namespace std;

typedef long long ll;

const int N = int(1e6+6);

int main(int argc, char const *argv[]) {
	int n; cin >>n;
	string p;
	cin.ignore(200, '\n');
	getline(cin, p);
	D(p);
	bool f[200];
	memset(f, false, sizeof f);
	int tp = 0;
	for(int i = 0; i < n; i++){
		if( !f[ p[i] ] ) {
			f[ p[i] ] = true;
			tp++;
		}
	}
	D(tp);
	int m[200];
	memset(m, -1, sizeof m);
	int pf = 0;
	int ans = N;
	for(int i = 0; i < n; i++){
		D(i);
		D(p[i]);

		if(m[ p[i] ] == -1) {
			pf++;
		}

		m[ p[i] ] = max( m[ p[i] ], i);
		D(m[ p[i] ] );
		D(pf);
		if(tp <= pf) {
			int l = N;
			for(int c = 0; c < 190; c++) {
				if(m[c] != -1) {
					l = min(m[c], l);
				}
			}
			D(l);
			ans = min(i-l+1, ans);
		}
	}
	cout <<ans;


	return 0;
}
