#include "codejam.h"

int main(int argc, char const *argv[]) {
	int test_cases, dumy; cin >>test_cases;// >>dumy >>dumy;
	for (size_t Case = 1; Case <= test_cases; Case++) {
		cout <<"Case #" <<Case <<":\n";
		solve();
	}
	return 0;
}
