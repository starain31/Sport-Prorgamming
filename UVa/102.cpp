#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <iostream>
#include <string.h>

using namespace std;

enum bottle{ B, C, G};

int bin[5][5];
int s[5];
char f[5], l[5] = "BCG";
bool u[5];
int a, t;

void pack(int b) 
{
	if(b == 3) {
		int c = t;
		for(int i = 0; i < 3; ++i) {
			c -= bin[i][ s[i] ];
		}
		if( c < a ) {
			for(int i =0; i < 3; ++i) {
				f[i] = l[ s[i] ];
			}
			a = c;
		}
		return;
	}
	for(int i = 0; i < 3; ++i) {
		if( !u[i] ) {
			s[b] = i;
			u[i] = true;
			pack(b+1);
			u[i] = false;
		}
	}
}



int main()
{
	while(true) {
		t = 0;
		for(int i = 0; i < 3; ++i) {
				if( scanf("%d%d%d", &bin[i][0], &bin[i][2], &bin[i][1]) == EOF) {
					return 0;
				}
				t += bin[i][0]+bin[i][1]+bin[i][2];
		}

		a = INT_MAX;
		memset(u, false, sizeof u);
		memset(f, 0, sizeof f);
		pack(0);
		cout <<f  <<' ' <<a <<endl;
	}
}




