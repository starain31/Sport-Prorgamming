#include "iostream"
#include "sstream"

using namespace std;

int main(int argc, char const *argv[]) {
	int n; cin >>n;
	long long int x, d; cin >>x;
	char c;
	int k = 0;
	std::string s;
	getline(cin, s);
	for (size_t i = 0; i < n; i++) {
		getline(cin, s);
		std::stringstream in(s);
		in >>c >>d;
		if (c == '+') {
			x += d;
		} else if (x < d) {
			k++;
		} else {
			x -= d;
		}
	}
	cout <<x <<' ' <<k <<endl;
	return 0;
}
