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
	double a, b; cin >>a >>b;
	int n; cin >>n;
	double m = DBL_MAX;
	double t, x, y, v;

	while(n--) {
		cin >>x >>y >>v;
		t = sqrt( (x-a)*(x-a) + (y-b)*(y-b) )/v;
		m = min(m, t);
	}
	printf("%.6lf", m);

	return 0;
}
