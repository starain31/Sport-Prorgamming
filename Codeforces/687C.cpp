#include "iostream"
#include "vector"
#include "queue"

using namespace std;

const int N = int(1e6)+5;
std::vector<int> G[N];
std::vector<int> s[2];
int color[N];
int n, m;

int main(int argc, char const *argv[]) {
	cin >>n >>m;

	int u, v;
	for (size_t i = 0; i < m; i++) {
		cin >>u >>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}



	for (size_t i = 0; i <= n; i++) {
		color[i] = -1;
	}

	for(int src = 1; src <= n; ++src) {
		if(G[src].size() != 0 and color[src] == -1) {
			queue<int> q;
			q.push(src);
			color[src] = 0;
			s[0].push_back(src);

			while ( !q.empty() ) {
				u = q.front();
				q.pop();

				for (size_t i = 0; i < G[u].size(); i++) {
					v = G[u][i];
					if(color[v] == -1) {
						color[v] = 1 - color[u];
						s[ color[v] ].push_back(v);
						q.push(v);
					}else if(color[u] == color[v]) {
						goto no;
					}
				}
			}

		}
	}

	yes:
	cout <<s[0].size() <<endl <<s[0][0];
	for (size_t i = 1; i < s[0].size(); i++) {
		cout <<' ' <<s[0][i];
	}
	cout <<endl <<s[1].size() <<endl <<s[1][0];
	for (size_t i = 1; i < s[1].size(); i++) {
		cout  <<' ' <<s[1][i];
	}
	return 0;
	no:
	std::cout <<-1 << std::endl;
	return 0;
}
