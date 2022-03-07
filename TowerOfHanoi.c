#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

//Pause
void pausa() {
	printf("\n\nPressione qualquer tecla para continuar...\n");
	getch();
}

//CleanScreen
void limpatela() {
	system("CLS");
}

//Solve funciton
void hanoi(int n, char a, char b, char c) {
	if (n == 1) {
		printf("Mova o disco %d de %c para %c\n\n", n, a, b);
	} else {
		hanoi(n - 1, a, c, b);
		printf("Mova o disco %d de %c para %c\n\n", n, a, b);
		hanoi(n-1, c, b, a);
	}
}

int main(void) {
	setlocale(LC_ALL, "");
	int numDisc;
	int op = 10;
	do{
		printf("Digite a quantidade de dicos que deseja na torre: ");
		scanf("%d", &numDisc);
		fflush(stdin);
		printf("\n\n");
		hanoi(numDisc, 'A', 'B', 'C');	
		printf("\n\nDigite 0 para sair ou 1 para fazer outra torre\n");
		scanf("%d", &op);
		fflush(stdin);
		limpatela();
	} while (op != 0);
	printf("Operação encerrada pelo usuário.");
	pausa();
	
	return 0;
}
