#include <stdio.h>
#include <stdlib.h>

int strlen(char* a);
char* strcpy(char* a,char* b);
char* strcat(char* a,char* b);
int strcmp(char* a,char* b);
int main(){
	int menu;
	do{
		char stra[100],strb[100];
		printf("Escolha a opcao para operacao com strings:\n1: Quero saber o tamanho da string\n2: Quero copiar uma string para outra\n3: Quero cocatenar as strings\n4: Quero comparar as strings\n5: Fechar programa\n");
		scanf("%d",&menu);
		if(menu<1 and menu>5){
			printf("ERRO - Informe um numero valido");
		}
		switch(menu){
			case 1:
				printf("Digite a string: ");
				scanf("%s",stra);
				printf("Essa string tem o tamanho de %d caracteres\n",strlen(stra));
				break;
			case 2:
				printf("Digite as strings: ");
				scanf("%s%s",stra,strb);
				printf("A string %s foi copiada\n",strcpy(stra,strb));
				break;
			case 3:	
				printf("Digite as strings: ");
				scanf("%s%s",stra,strb);
				printf("String cocatenada: %s\n",strcat(stra,strb));
				break;
			case 4:
				printf("Digite as strings: ");
				scanf("%s%s",stra,strb);
				if(strcmp(stra,strb)==0){
					printf("As strings sao identicas\n");
				}
				else{
					printf("As strings nao sao identicas\n");
				}
		}
		printf("\n");
	}while(menu!=5);
	return 0;
}
int strlen(char* a){
	int x=0;
	while(a[x]){
		x++;
	}
	return x;
}

char* strcat(char* a,char* b){
	int x,y;
	char *c=(char*)malloc((strlen(a)+strlen(b))*sizeof(char));
	for(x=0;x<strlen(a);x++){
			c[x]=a[x];
	}
	for(y=0;y<strlen(b);y++){
		c[x+y]=b[y];
	}
	return c;
}
int strcmp(char* a,char* b){
	int x;
	if(strlen(a)!=strlen(b)){
		return 1;
	}
	for(x=0;x<strlen(a);x++){
		if(a[x]!=b[x]){
			return 1;
		}
	}
	return 0;
}
char* strcpy(char* a,char* b){
	int x;
	a=(char*)malloc(strlen(b)*sizeof(char));
	for(x=0;x<strlen(b);x++){
		a[x]=b[x];
	}
	return a;
}
