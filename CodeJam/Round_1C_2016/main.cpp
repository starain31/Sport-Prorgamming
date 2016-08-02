#include "codejam.h"

int main(int argc, char const *argv[]) {
	int test_cases; cin >>test_cases; cin.ignore();
	for (size_t Case = 1; Case <= test_cases; Case++) {
		cout <<"Case #" <<Case <<":";
		if( read_input() ) {
			cout <<solve() <<endl;
		}
	}
	return 0;
}
