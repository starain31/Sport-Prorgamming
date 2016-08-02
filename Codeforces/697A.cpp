#include "bits/stdc++.h"

// #define DEBUG
#ifdef DEBUG
#define D(x) std::cout <<(#x) <<" := " <<(x) << std::endl
#else
#define D(x)
#endif

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[]) {
	int t, s, x; cin >>t >>s >>x;
	D(x-t);
	if( x < t) {
		cout <<"NO";
	} else if( x == t) {
		cout <<"YES";
	} else if( (x-t) < s) {
		cout <<"NO";
	} else if( (x-t)%s == 1 or (x-t)%s == 0 ) {
		cout <<"YES";
	} else {
		cout <<"NO";
	}
	return 0;
}
