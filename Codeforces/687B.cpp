#include "iostream"

using namespace std;

const int N = int(1e6)+5;

int main(int argc, char const *argv[]) {
	std::string n; cin >>n;
	char p[N];
	for(size_t i = 0, j = n.length()*2 - 1; i < n.length(); ++i, --j) {
		p[i] = p[j] = n[i];
	}
	p[n.length()*2] = '\0';
	cout <<p;
	return 0;
}
