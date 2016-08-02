#include "bits/stdc++.h"

#define DEBUG
#ifdef DEBUG
#define D(x) cout <<(#x) <<" := " <<(x) <<endl
#else
#define D(x)
#endif

using namespace std;

int main(int argc, char const *argv[]) {
	int t; cin >>t;
	long double n, r;
	long double k = 3.0*sqrt(3.0)/2.0;
	long double hex, cir;
	while(t--){
		cin >>n >>r;
		n = 1.0 + 3.0*(n)*(n-1.0);
		cir = acos(-1)*r*r;
		D(cir);
		D(n);
		long double _min = 0.0;
		long double _max = sqrt( (cir/n) / k ) ;
		long double mid;
		for(int i = 0; i < 64; i++) {
			mid = (_min + _max)/2.0;
			hex = n*k*mid*mid;
			if(hex < cir) {
				_min = mid;
			} else {
				_max = mid;
			}
		}
		printf("%llf\n", hex);
	}
	return 0;
}
