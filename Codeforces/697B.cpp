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
	char s[100+5];
	memset(s, '0', sizeof s);

	int b;
	scanf("%[^e]e%d", s, &b);
	s[ strlen(s) ]  = '0';
	s[ 104 ] = '\0';

	for(int i = 1; i <= b; i++) {
		s[i] = s[i+1];
	}
	s[b + 1] = '.';
	int i = 101;
	while(s[i] == '0') {
		i--;
	}
	if(s[i] == '.') {
		i--;
	}
	s[i+1] = '\0';
	cout <<s <<endl;

	return 0;
}
