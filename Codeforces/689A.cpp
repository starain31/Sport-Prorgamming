#include "bits/stdc++.h"

// #define DEBUG
#ifdef DEBUG
#define D(x) std::cout <<#x <<" := " <<x << std::endl
#else
#define D(x)
#endif

using namespace std;

typedef long long ll;

bool key[10] = {false};

int main(int argc, char const *argv[]) {
	int n; cin >>n;  cin.ignore(200, '\n');
	D(n);
	char k;
	for (size_t i = 0; i < n; i++) {
		cin >>k;
		key[k-'0'] = true;
	}
	if( (key[0] and key[1]) or (key[0] and key[3]) or (key[0] and key[2]) or (key[7] and key[3]) or (key[9] and key[1]) ) {
		cout <<"YES";
	} else {
		cout <<"NO";
	}
	return 0;
}
