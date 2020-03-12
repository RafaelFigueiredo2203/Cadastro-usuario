#include <stdio.h>
#include <iostream>
int main( int argc, char** argv )
{

	setlocale(LC_ALL, "Portuguese");
	int opcao;
	char nome[50];
	char tel[40];
	printf ("\n Bem-Vindo \n\n");
	printf ("1)Cadastro.");
	printf ("\n2)Ajuda.");
	printf ("\n3)Sair.");
	
	printf ("\n\nDigite a opção desejada :");
	scanf ("%d",&opcao);
	if(opcao){
	
	
	 if(opcao == 2){
		printf ("\nAjuda:");
		printf ("\nDigite o o número referente a opção desejada , exemplo:");
		printf ("\nNúmero 1:Realizar cadastro \nNúmero 2: Ajuda \nNúmero 3: Sair.");
	
	printf ("\n\nDigite a opção desejada :");
	scanf ("%d",&opcao);
}
	if(opcao == 1){
	printf( "Digite seu nome:" );
	scanf (" %[^\n]s",nome);
	printf ("\nDigite o telefone:");
	scanf (" %[^\n]s",tel);
}
	else if (opcao == 3){
	
		printf ("\nEscolheu sair, até a próxima!");
		
	}
}
printf ("\n\nCadastro realizado com sucesso, muito obrigado!!");
	return 0;
}
