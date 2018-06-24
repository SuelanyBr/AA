#include<stdio.h>
#include<stdlib.h>
#define MAX 99999
using namespace std;


int compare(const void *a, const void *b ) {
  return ( *(int*)b - *(int*)a );
}

int main ( ) {
    int arr[MAX], aux[MAX];
    int N, K;
	int sum;
 
    while (scanf( "%d %d", &N, &K) != EOF) {
        aux[0] = 0;
        arr[0] = 0;
		
        for (int i=1; i < N; i++){
            scanf("%d", &aux[i]);
			// Guarda a distância entre i e i-1 na fila.
            arr[i] = aux[i]-aux[i-1];
        }
		
		// Ordena em ordem decrescente.
        qsort (arr, N, sizeof(int), compare);
 
		// Soma as distâncias pedidas que estarão entre K e N.
        sum = 0;
        for (int i=K-1;i<N;i++)
            sum += arr[i];
        printf ("%d\n", sum );
    }
    return 0;
}