#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

const int N = int(1e5+5);

int main(){
	int n1, n2, n3; cin >>n1 >>n2 >>n3;
	std::vector<int> s1(n1), s2(n2), s3(n3);
	int h1(0), h2(0), h3(0);
	cout <<n1 <<'\n';
	for (size_t i = n1-1; 0 <= i; --i) {
		cout <<"hmmm";
				// cin >>s1[i];
		// h1 += s1[i];
	}
	/*
	for (size_t i = n2-1; 0 <= i; --i) {
		cin >>s2[i];
		h2 += s2[i];
	}
	for (size_t i = n3-1; 0 <= i; --i) {
		cin >>s3[i];
		h3 += s3[i];
	}
	*/

	cout <<h1 <<' ' <<h2 <<' ' <<h3 <<'\n';

	return 0;
}
