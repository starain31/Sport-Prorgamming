#include "bits/stdc++.h"

#define DEBUG
#ifdef DEBUG
#define D(x) std::cout <<#x <<" := " <<x << std::endl
#else
#define D(x)
#endif

using namespace std;

typedef long long ll;

const int N = int(1e6+5);
int s[N];
bool comp(int i, int j) {
	if(s[i] == j or s[j] == i) {
		cout <<"ggggggg\n";
		return i >  j;
	} else {
		cout <<"hmmmmmmmm\n";
		return false;
	}
}

int main(int argc, char const *argv[]) {
	int n, m; cin >>n >>m;
	int p[N];
	for (size_t i = 1; i <= n; i++) {
		cin >>p[i];
	}
	memset(s, -1, sizeof(s) );
	int a, b;
	for(int i = 0; i < m; i++) {
		cin >>a >>b;
		s[a] = b;
	}
	for (size_t i = 1; i <= n; i++) {
		cout <<i <<' ' <<s[i]<<endl;
		/* code */
	}
	sort(p+1, p+n+1, comp);
	for (size_t i = 1; i <= n; i++) {
		cout <<p[i] <<' ';
	}

	return 0;
}
