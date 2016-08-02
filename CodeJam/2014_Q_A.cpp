#include "iostream"

//#define DEBUG
#ifdef DEBUG
#define D(x) cout <<#x <<" := " <<x <<endl;
#else
#define D(x)
#endif

using namespace std;

int main(int argc, char const *argv[]) {
    int tcs; cin >>tcs;
    for (size_t css = 1; css <= tcs; css++) {
        /* code */
        int row; cin >>row; row--;
        int a, fir[9], sec[9];
        for (size_t i = 0; i < 4; i++) {
            for (size_t j = 0; j < 4; j++) {
                cin >>a;
                if (i == row) {
                    D(i);
                    fir[j] = a;
                }
            }
        }

        cin >>row; row--;
        for (size_t i = 0; i < 4; i++) {
            for (size_t j = 0; j < 4; j++) {
                cin >>a;
                if (i == row) {
                    D(i);
                    sec[j] = a;
                }
            }
        }

        int cnt{0}, abra_ka_dabra;
        for (size_t i = 0; i < 4; i++) {
            for (size_t j = 0; j < 4; j++) {
                if( fir[i] == sec[j] ) {
                    abra_ka_dabra = sec[j];
                    cnt++;
                }
            }
        }

        cout <<"Case #" <<css <<": ";
        if (cnt == 0) {
            cout <<"Volunteer cheated!" <<endl;
        } else if (cnt == 1) {
            cout <<abra_ka_dabra <<endl;
        } else {
            cout <<"Bad magician!" <<endl;
        }

    }

    return 0;
}
