#include "string"
#include "iostream"

using namespace std;

#ifndef DEBUG
#define DEBUG
#endif

#ifdef DEBUG
#define D(x) cout <<#x <<" := " <<x <<endl;
#else
#define D(x)
#endif

bool read_input();
string solve();
