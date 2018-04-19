#include <iostream>
using namespace std;
#define MAX 10

int main(){
	//P = jogadores
	//S = quadrados na trilha
	//T1,T2,T3 = armadilhas
	//N = Jogadas
	//D1,D2 = Valor dos dados na jogada
    int P,S,T1,T2,T3,N,jogador,D1,D2,vencedor;
    int pos[MAX],proib[MAX];

    while(1){		
		cin >> P >> S;			
		
		if (P == 0 && S == 0) break;
		
        for (int i=0; i < P; i++){
			pos[i] = 0;
			proib[i] = 0;
		}
			
		cin >> T1 >> T2 >> T3;
		cin >> N;
		
        jogador = 0, vencedor = -1;

        for (int i=0; i< N; i++){
            while (proib[jogador]){
                proib[jogador] = 0;
                jogador = (jogador+1)%P;
			}
            
			cin >> D1 >> D2;
            pos[jogador] += D1+D2;

            if (pos[jogador] > S && vencedor < 0)
				vencedor=jogador+1;
				
			if (pos[jogador] == T1 || pos[jogador] == T2 || pos[jogador] == T3)
				proib[jogador] = 1;

            jogador = (jogador+1) % P;
        }
        cout << vencedor << endl;
    }
	
	return 0;
}