#include<stdio.h>
int idade;
int valor_um;
char nome;

int main(){
	
	do {
	printf("Digite seu nome \n");
	scanf("%s", &nome);
	
	printf("Digite sua idade \n");
	scanf("%d", &idade);
	

	
if( idade >= 18){
		printf("Maior idade \n");	
		}
	
else if (idade > 0) {
            printf("Menor de idade\n");
        }
}
	while(idade != 0 );
	

	return 0;

}
