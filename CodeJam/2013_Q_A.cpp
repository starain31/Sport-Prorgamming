#include "iostream"

#define DEBUG
#ifdef DEBUG
#define D(x) cout <<#x <<" := " <<x <<endl;
#else
#define D(x)
#endif

using namespace std;

const int N = 4;
char board[N + 5][N + 5];

bool won(char player) {

    for (size_t i = 0; i < N; i++) {
        size_t j;
        for (j = 0; j < N; j++) {
            if ( board[i][j] != 'T' and board[i][j] != player ) {
                break;
            }
        }
        if( N == j) {
            return true;
        }
    }

    for (size_t i = 0; i < N; i++) {
        size_t j;
        for (j = 0; j < N; j++) {
            if ( board[j][i] != 'T' and board[j][i] != player ) {
                break;
            }
        }
        if( N == j) {
            return true;
        }
    }

    size_t i, j;
    for (i = 0; i < N; i++) {
        if ( board[i][i] != 'T' and board[i][i] != player ) {
            break;
        }
    }
    if(i == N) {
        return true;
    }

    for(i = 0, j = 3; i < N; ++i, --j) {
        if( board[i][j] != 'T' and board[i][j] != player) {
            return false;
        }
    }
    return true;
}

bool completed(/* arguments */) {
    /* code */
    int count = N;
    for (size_t i = 0; i < count; i++) {
        for (size_t j = 0; j < count; j++) {
            if (board[i][j] == '.') {
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[]) {
    int number_of_test_cases; cin >>number_of_test_cases; cin.ignore();
    for (size_t Case = 1; Case <= number_of_test_cases; Case++) {
        /* code */
        for (size_t i = 0; i < N; i++) {
            /* code */
            fgets(board[i], 9, stdin);
        }
        cin.ignore();

        cout <<"Case #" <<Case <<": ";
        if ( won('X') ) {
            cout <<"X won" <<endl;
        } else if ( won('O') ) {
            cout <<"O won" <<endl;
        } else {
            if ( completed() ) {
                cout <<"Draw" <<endl;
            } else {
                cout <<"Game has not completed" <<endl;
            }
        }
        fflush(stdout);
    }
    return 0;
}
