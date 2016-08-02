#include "bits/stdc++.h"

#define DEBUG
#ifdef DEBUG
#define D(x) std::cout <<#x <<" := " <<x << std::endl
#else
#define D(x)
#endif

using namespace std;

typedef long long ll;

int dfs(ll u, ll v) {
	if(u == v) {
		return c[ h(u) ][ h(v) ];
	}
	if( u < v){
		return c[ h(u) ][ h(v/2) ] + dfs(u, v/2);
	}
	if( v < u){
		return c[ h(u/2) ][ h(v) ] + dfs(u/2, v);
	}
}

int main(int argc, char const *argv[]) {
	return 0;
}
