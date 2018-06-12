#include <stdio.h>

int remaining(int n, int k) {
    int r = 0;
    for (int i = 2; i <= n; i++)
        r = (r + k) % i;
    return r;
}


int main(){
	int qnt;
    int A, B;
    
    scanf("%d", &qnt);
    
    
    for(int i = 0; i<qnt; i++){
		scanf("%d %d", &A, &B);
		printf("Case %d: %d\n", i+1, remaining(A,B)+1);
    }
    
    return 0;
}
