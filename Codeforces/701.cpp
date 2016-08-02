#include "bits/stdc++.h"

#define DEBUG
#ifdef DEBUG
#define D(x) std::cout <<#x <<" := " <<x << std::endl
#else
#define D(x)
#endif

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main(int argc, char const *argv[]) {
	int n; cin >>n;
	vector< pii > c;
	int a;
	for(int i = 1; i <= n; i++) {
		cin >>a;
		c.push_back( pii(a, i) );
	}
	sort(c.begin() , c.end() );
	for(int i = 0; i < n/2; i++) {
		cout <<c[i].second <<' ' <<c[n-i-1].second <<endl;
	}
	return 0;
}
