#include "bits/stdc++.h"

#define DEBUG
#ifdef DEBUG
#define D(x) std::cout <<#x <<" := " <<x << std::endl
#else
#define D(x)
#endif

using namespace std;

typedef long long ll;
const int N = int(1e5+5);

int main() {

	int x[N];
	int n; cin >>n;
	for(int i = 0; i < n; i++) {
		cin >>x[i];
	}
	sort(x, x+n);

	int q, m; cin >>q;
	while(q--) {
		cin >>m;
		cout <<upper_bound(x, x+n, m)-x <<endl; 
	}

	return 0;
}
