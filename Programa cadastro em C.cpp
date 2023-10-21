#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i, ii;

//Struct para armazenar os dados do indivíduo.
typedef struct{
	int idade; 	
	int conta;
	char nome[100];
	float saldo;
}banco;

//função para apresentar o menu de escolhas
void menu(){
	
	printf("Digite:");
	printf("\n\n C para fazer um cadastro.");
	printf("\n L para listar todos os cadastros.");
	printf("\n B1 para mostrar os clientes com idade menor ou igual a informada.");
	printf("\n B2 para mostrar os clientes com idade maior a informada.");
	printf("\n B3 para buscar um cadastro por nome.");
	printf("\n B4 para buscar um cadastro pelo numero da conta.");
	printf("\n B5 para apresentar o valor total dos saldos na agencia.");
	printf("\n S para encerrar o programa.\n");
	printf("\nSua escolha: ");
	
}

//função do cadastro
void cadastro(banco b[]){
	
		printf("\nDigite:");
		printf("\nO primeiro nome: ");
		scanf("%s", b[i].nome);			
		printf("A idade: ");
		scanf("%i", &b[i].idade);
		printf("O numero da conta(4 digitos): ");
		scanf("%i", &b[i].conta);
		printf("O saldo da conta: ");
		scanf("%f", &b[i].saldo);
		printf("Cadastro bem sucedido!\n\n");
		system("pause");
		system("cls");
	i++;
	ii++;			
}

//função para mostrar todos os cadastros
void listar(banco b[]){
	
	int iii = 1;
	
	if(ii != 0){
		for(i = 0; i < ii; i++){
			printf("\nCadrastro numero: %i", iii);
			printf("\n   Nome: %s\n", b[i].nome);
			printf("   Idade: %i\n", b[i].idade);
			printf("   Numero da conta: %i\n", b[i].conta);
			printf("   Saldo: %.2f\n", b[i].saldo);
		iii = iii + 1;
		}
		printf("\nFim dos cadastros!\n\n");
	}
	if(ii == 0){
	printf("\nNao ha cadastros!\n\n");		
	}

	system("pause");
	system("cls");
}

//Fução da idade menor
void menor_idade(banco b[]){
	
	int controle, iii = 0, idade1;
	printf("Digite a idade que deseja comparar: ");
	scanf("%i", &idade1);
		
	for(i = 0; i < ii; i++){
		if(idade1 >= b[i].idade){				
			printf( "\nCadastro numero %i\n Nome: %s\n Idade: %i\n Numero da conta: %i\n Saldo: %.2f\n", iii + 1, b[i].nome, b[i].idade, b[i].conta, b[i].saldo);
			controle++;
		
		}
	iii = iii + 1;
	}	
	if(controle == 0){
		printf("\nNenhum cadastro foi encontrado.\n\n");
	}
		
	system("pause");
	system("cls");	
}

//Função da idade maior
void maior_idade(banco b[]){
	
	int controle, iii = 0, idade1;
	printf("Digite a idade que deseja encontrar: ");
	scanf("%i", &idade1);
		
	for(i = 0; i < ii; i++){
		if(idade1 < b[i].idade){				
			printf( "\nCadastros encontrados:\nCadastro de numero %i\n Nome: %s\n Idade: %i\n Numero da conta: %i\n Saldo: %.2f\n", iii + 1, b[i].nome, b[i].idade, b[i].conta, b[i].saldo);
			controle++;
		
		}
	iii = iii + 1;
	}	
	if(controle == 0){
		printf("\nNenhum cadastro foi encontrado.\n\n");
	}
		
	system("pause");
	system("cls");	
}

//Buscar cadastro por nome
void buscar_nome(banco b[]){
	
	int controle, iii = 0;
	char nome[50];
	
	printf("Digite o nome do cadastrado que deseja: ");
	scanf("%s", nome);
		
	for(i = 0; i < ii; i++){
		if(strcmp(nome, b[i].nome) == 0){				
			printf( "\nCadastro numero %i\n Nome: %s\n Idade: %i\n Numero da conta: %i\n Saldo: %.2f\n", iii + 1, b[i].nome, b[i].idade, b[i].conta, b[i].saldo);
			controle++;
		
		}
	iii = iii + 1;
	}	
	if(controle == 0){
		printf("\nNenhum cadastro foi encontrado com esse nome.\n\n");
	}
		
	system("pause");
	system("cls");
}

//Função da procura pelo número da conta
void numero_conta(banco b[]){
		
	int iii = 0, controle = 0;
	int contas;
		printf("Digite o numero da conta que deseja encontrar: ");
		scanf("%i", &contas);
			
	for(i = 0; i < ii; i++){
		if(contas == b[i].conta){				
			printf( "\nCadastros encontrados:\nCadastro de numero %i\n Nome: %s\n Idade: %i\n Numero da conta: %i\n Saldo: %.2f\n\n", iii + 1, b[i].nome, b[i].idade, b[i].conta, b[i].saldo);
			controle++;
		
		}
	iii = iii + 1;
	}	
	if(controle == 0){
		printf("\nNenhum cadastro foi encontrado.\n\n");
	}	
		
	system("pause");
	system("cls");	
}	

//Função da soma dos saldos da agência
void soma_agencia(banco b[]){
		
	float soma = 0.0;
		
	for(i = 0; i < ii; i++){
		
		soma = b[i].saldo + soma;
		
		}
	printf("\nA soma de todos os saldos da agencia corresponde a: R$ %.2f\n\n", soma);
	
	system("pause");
	system("cls");
}

//sair do sistema por ele mesmo
void sair_programa(){
	
	printf("\nPresione qualquer tecla!\n");
	
		exit(0);
}

//Essa é a função principal, a int main
int main(){
	
	banco b[100];
	char escolha[2];

	while(1){
	
		menu();
		scanf("%s", escolha);
		
		if(strcmp(escolha, "C") == 0){
			
			cadastro(b);
			
		}
		if(strcmp(escolha, "L") == 0){
			
			listar(b);
					
		}
		if(strcmp(escolha, "B1") == 0){

			menor_idade(b);
		
		}
		if(strcmp(escolha, "B2") == 0){

			maior_idade(b);
		
		}
		if(strcmp(escolha, "B3") == 0){

			buscar_nome(b);
		
		}
		if(strcmp(escolha, "B4") == 0){

			numero_conta(b);
		
		}
		if(strcmp(escolha, "B5") == 0){

			soma_agencia(b);
		
		}
		if(strcmp(escolha, "S") == 0){
			
			sair_programa();
			
		}
	}

	return 0;
}

