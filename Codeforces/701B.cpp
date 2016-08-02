#include "bits/stdc++.h"

//#define DEBUG
#ifdef DEBUG
#define D(x) std::cout <<#x <<" := " <<x << std::endl
#else
#define D(x)
#endif

using namespace std;

typedef long long ll;

const int N = int(1e5+5);

int main(int argc, char const *argv[]) {
	ll n, m; cin >>n >>m;
	ll t = n*n;
	ll x, y;
	ll dr = n, dc = n;
	bool r[N], c[N];
	memset(r, false, sizeof(r) );
	memset(c, false, sizeof(c) );
	while(m--) {
		cin >>x >>y;
		if(r[x] == false) {
			t -= dc;
		}
		if(c[y] == false){
			t -= dr;
		}
		if(r[x] == false and c[y] == false) {
			t++;
		}
		if(c[y] == false ) {
			c[y] = true;
			dc--;
		}
		if(r[x] == false) {
			r[x] = true;
			dr--;
		}
		cout <<t <<' ';
	}
	return 0;
}
