//by Alexandre-cy
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
	int player,robo;
	printf("\033[33m---------JoKenPo---------\n");
	printf("[\033[36m1\033[33m]Pedra\n[\033[36m2\033[33m]Papel\n[\033[36m3\033[33m]Tesoura\n");
	printf("\033[33m---------JoKenPo---------\n");
	printf("\033[0mDigite a opção desejada: ");
	scanf("%d",&player);
    printf("\033[33m---------JoKenPo---------\n");
    switch(player){
    	case 1:
    	printf("Jogador escolheu pedra\n");
    	break;
    	case 2:
    	printf("Jogador escolheu papel\n");
    	break;
    	case 3:
    	printf("Jogador escolheu tesoura\n");        break;
    	default: printf("Digito invalido\n");
    }
    srand(time(robo));
    robo = rand()%3 +1;
    switch(robo){
    	case 1:
    	printf("Robo escolheu pedra\n");
    	break;
    	case 2:
    	printf("Robo escolheu papel\n");
    	break;
    	case 3:
    	printf("Robo escolheu tesoura\n");        break;
    }
	printf("\033[33m---------JoKenPo---------\n");
    if(player==1 && robo==3 || player==2 && robo==1 || player==3 && robo==2){
    	printf("\033[32mJogador Venceu!\n");
    	}
   else if(player==1 && robo==1 || player==2 && robo==2 || player==3 && robo==3){
   	printf("Empate!\n");
   }
   else{
   	
   	printf("\033[31mRobo venceu\033[0m\n");
   }
	
}