#include <iostream>
#define MAX 100100
using namespace std;

int pai[MAX];

int find(int p) {
    if(pai[p] == p){
        return p;
    }else{
        pai[p] = find(pai[p]);
        return pai[p];
    }
}

int main() {
    int N, K;
    
    char c;
    int A, B;
    
    cin >> N >> K;

    for(int i = 0; i < N; ++i) {
        pai[i] = i;
    }

    for(int i = 0; i < K; ++i) {
        cin >> c >> A >>B;
        A = find(A-1);
        B = find(B-1);
        if(c == 'F') {
            pai[A] = B;
        } else {
            if(A==B){
                cout << "S" << endl;
            }else{
                cout << "N" << endl;
            }
        }
    }
    
    return 0;
}