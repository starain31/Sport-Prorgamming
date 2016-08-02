#include "iostream"
#include "algorithm"

using namespace std;

typedef long long ll;

const size_t LIMIT = 1000+5;
int n, p[255];

bool init(/* arguments */) {
	/* code */
	return 0;
}

bool read_input(/* arguments */) {
	cin >>n;
	for (size_t i = 0; i < n; i++) {
		cin >>p[i];
	}
	return true;
}

string solve(/* arguments */) {
	/* code */
	int max_p, j;
	do {
		max_p = 0;
		for (size_t i = 0; i < n; i++) {
			if(max_p < p[i]) {
				j = i;
				max_p = p[j];
			}
		}
		if(max_p != 0) {
			p[j]--;
			cout <<' ' <<char(j+'A');
		}
	} while(max_p != 0);
	return "";
}
