#include<stdio.h>

			int main(){
				int numerosecreto;
				numerosecreto = 2;
				printf("-------------------");
				printf("VAMOS JOGAR UM JOGO");
				printf("-------------------");
				// 0 vale falso
				// 1 vale verdadeiro
				int chute;
				for(int i = 1; i <= 3; i++){
					printf("Qual seu chute %d. ?", i);
					scanf("%d", &chute);
					printf("Seu %d.\n", i, chute);
					int acertou = chute == numerosecreto;
					if(acertou){
						printf("Voce acertou?\n");
						break;
					} else {
						printf("Acertou: %d\n");
						int maior = chute < numerosecreto;
						if(maior){
							printf("Seu numero foi maior que o numeros secreto\n");
							
							
							
						}else{
							printf("Seu numero foi menorque o numero secreto");
						}
					}
				}
				int u;
				scanf("%d", &u);
			}
