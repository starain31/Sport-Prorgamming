#include "bits/stdc++.h"

#define DEBUG
#ifdef DEBUG
#define D(x) std::cout <<#x <<" := " <<x << std::endl
#else
#define D(x)
#endif

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[]) {
	char mirror[200];
	memset(mirror, -1, sizeof(mirror) );
	mirror['A'] = 'A';
	mirror['H'] = 'H';
	mirror['I'] = 'I';
	mirror['M'] = 'M';
	mirror['O'] = 'O';
	mirror['T'] = 'T';
	mirror['U'] = 'U';
	mirror['V'] = 'V';
	mirror['W'] = 'W';
	mirror['X'] = 'X';
	mirror['Y'] = 'Y';
	mirror['b'] = 'd';
	mirror['d'] = 'b';
	mirror['o'] = 'o';
	mirror['p'] = 'q';
	mirror['q'] = 'p';
	mirror['v'] = 'v';
	mirror['w'] = 'w';
	mirror['x'] = 'x';

	string s; cin >>s;
	for(size_t i = 0, j = s.length()-1; i < j; i++, j--) {
		if(mirror[ s[i] ] != s[j]) {
			cout <<"NIE";
			return 0;
		}
	}
	if(s.length()%2 == 1){
		if(s[ s.length()/2 ] == mirror[ s[s.length()/2] ] ) {
			cout <<"TAK";
		} else {
			cout <<"NIE";
		}
	} else {
		cout <<"TAK";
	}

	return 0;
}
