#include "codejam.h"
#include "iostream"
#include "string"
#include "vector"

using namespace std;

typedef unsigned long long ll;

int N{16}, J{50};

ll convart(int x, int base) {
	if( x == 0 ) {
		return 0;
	}
	return convart(x/2, base) * base + x%2;
}

ll findFactor(ll num) {
	for(ll factor = 2; factor*factor <= num; factor++) {
		if( num%factor == 0 ) {
			return factor;
		}
	}
	return -1;
}


void solve() {
	ll jamCoin = (1 << N-1) + 1;
	ll inBase, factor;
	std::vector<ll> factors;
	for(int j = 0; j < J; jamCoin += 2) {
		factors.clear();
		for(int base = 2; base <= 10; ++base) {
			inBase = convart(jamCoin, base);
			factor = findFactor(inBase);
			if( base == 10) {
				D(inBase);
				D(factor);
			}
			if(factor == -1) {
				break;
			}
			factors.push_back(factor);
		}
		if(factors.size() == 9) {
			cout <<convart(jamCoin, 10);
			for(ll factor : factors) {
				cout <<' ' <<factor;
			}
			cout <<endl;
			j++;
		}
	}
	return ;
}
