#include<stdio.h>
#include<stdlib.h>
using namespace std;

int tamanhos[30][2];

int valor(string tam){
	if (tam == "XS") return 0;
	else if (tam == "S") return 1;
	else if (tam == "M") return 2;
	else if (tam == "L") return 3;
	else if (tam == "XL") return 4;
	else if (tam == "XXL") return 5;
}
	
int main(){
    int qtd_casos;
    int N, M;
	string tm1, tm2;
	
	
	scanf("%d", qtd_casos);
	
	for(int i=0; i < qtd_casos; i++){
         
		scanf("%d %d", N, M);
        for(int j=0; j < M; j++){
			scanf("%s %s", tm1, tm2);
			tam[j][0] = valor(tm1);
			tam[j][1] = valor(tm2);
			
        }
		
		
    }
    return 0;
}
