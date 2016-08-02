#include "bits/stdc++.h"

#define DEBUG
#ifdef DEBUG
#define D(x) std::cout <<#x <<" := " <<x << std::endl
#else
#define D(x)
#endif

using namespace std;

typedef long long ll;

const int N = int(2e5+5);

int main(int argc, char const *argv[]) {
	int n; cin >>n;
	int m[N], c[N], a;
	for (size_t i = 0; i <= n; i++) {
		m[i] = i;
		c[i] = i-1;
	}
	for (size_t i = 1; i <= n; i++) {
		cin >>a;
		m[a] = min(m[a], int(i) );
	}
	for (size_t i = 1; i <= n; i++) {
		/* code */
		cout <<c[i] <<' ';
	}
	return 0;
}
