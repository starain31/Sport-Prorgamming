#include "iostream"

using namespace std;

typedef long long  ll;
const int N = int(1e5)+5;

int main(int argc, char const *argv[]) {
	int n, d; cin >>n >>d;

	int b = 0, r = 0;
	string p;
	while (d--) {
		cin >>p;
		size_t i;
		for (i = 0; i < n; i++) {
			if(p[i] == '0') {
				b++;
				break;
			}
		}
		r = max(r, b);
		if(i == n) {
			b = 0;
		}
	}
	cout <<r;

	return 0;
}
