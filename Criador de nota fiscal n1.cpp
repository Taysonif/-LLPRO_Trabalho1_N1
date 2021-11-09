#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil" );
	
	char produto1[20], produto2[20], produto3[20], produto4[20], produto5[20], produto6[20], produto7[20], produto8[20];
	int codigo1 ,codigo2 ,codigo3 ,codigo4 ,codigo5 ,codigo6 ,codigo7 ,codigo8;
	int quant1, quant2, quant3, quant4, quant5, quant6, quant7, quant8;
	float preuni1, preuni2, preuni3, preuni4, preuni5, preuni6, preuni7, preuni8;
	float preto1, preto2, preto3, preto4, preto5, preto6, preto7, preto8;
	float total;
	
	printf("Criador de Nota Fiscal");
	
	printf("\n\nDigite o código do produto: ");
	scanf("%d", &codigo1);
	fflush(stdin);
	printf("Digite o nome do produto: ");
	gets(produto1);
	printf("Digite o valor do produto: ");
	scanf("%f", &preuni1);
	fflush(stdin);
	printf("Digite a quantidade do produto: ");
	scanf("%d", &quant1);
	fflush(stdin);
	
	system("cls");
	
	printf("\n\nDigite o código do produto: ");
	scanf("%d", &codigo2);
	fflush(stdin);
	printf("Digite o nome do produto: ");
	gets(produto2);
	printf("Digite o valor do produto: ");
	scanf("%f", &preuni2);
	fflush(stdin);
	printf("Digite a quantidade do produto: ");
	scanf("%d", &quant2);
	fflush(stdin);
		
	system("cls");
	
	printf("\n\nDigite o código do produto: ");
	scanf("%d", &codigo3);
	fflush(stdin);
	printf("Digite o nome do produto: ");
	gets(produto3);
	printf("Digite o valor do produto: ");
	scanf("%f", &preuni3);
	fflush(stdin);	
	printf("Digite a quantidade do produto: ");
	scanf("%d", &quant3);
	fflush(stdin);
	
	system("cls");
	
	printf("\n\nDigite o código do produto: ");
	scanf("%d", &codigo4);
	fflush(stdin);
	printf("Digite o nome do produto: ");
	gets(produto4);
	printf("Digite o valor do produto: ");
	scanf("%f", &preuni4);
	fflush(stdin);	
	printf("Digite a quantidade do produto: ");
	scanf("%d", &quant4);
	fflush(stdin);
	system("cls");
	
	printf("\n\nDigite o código do produto: ");
	scanf("%d", &codigo5);
	fflush(stdin);
	printf("Digite o nome do produto: ");
	gets(produto5);
	printf("Digite o valor do produto: ");
	scanf("%f", &preuni5);
	fflush(stdin);
	printf("Digite a quantidade do produto: ");
	scanf("%d", &quant5);
	fflush(stdin);
		
	system("cls");
	
	printf("\n\nDigite o código do produto: ");
	scanf("%d", &codigo6);
	fflush(stdin);
	printf("Digite o nome do produto: ");
	gets(produto6);
	printf("Digite o valor do produto: ");
	scanf("%f", &preuni6);
	fflush(stdin);
	printf("Digite a quantidade do produto: ");
	scanf("%d", &quant6);
	fflush(stdin);
		
	system("cls");
	
	printf("\n\nDigite o código do produto: ");
	scanf("%d", &codigo7);
	fflush(stdin);
	printf("Digite o nome do produto: ");
	gets(produto7);
	printf("Digite o valor do produto: ");
	scanf("%f", &preuni7);
	fflush(stdin);
	printf("Digite a quantidade do produto: ");
	scanf("%d", &quant7);
	fflush(stdin);

	system("cls");
	
	printf("\n\nDigite o código do produto: ");
	scanf("%d", &codigo8);
	fflush(stdin);
	printf("Digite o nome do produto: ");
	gets(produto8);
	printf("Digite o valor do produto: ");
	scanf("%f", &preuni8);
	fflush(stdin);	
	printf("Digite a quantidade do produto: ");
	scanf("%d", &quant8);
	fflush(stdin);
		
	system("cls");
	
	preto1 = preuni1 * quant1;
	preto2 = preuni2 * quant2;
	preto3 = preuni3 * quant3;
	preto4 = preuni4 * quant4;
	preto5 = preuni5 * quant5;
	preto6 = preuni6 * quant6;
	preto7 = preuni7 * quant7;
	preto8 = preuni8 * quant8;
	
	total = preto1 + preto2 + preto3 + preto4 + preto5 + preto6 + preto7 + preto8;
	
	printf("|%-20s |%-18s |%-15s |%-15s |%-15s\n", "Código", "Quantidade","Discriminação", "Preço Unitário", "Preço Total");
	printf("|%-20d |%-18d |%-15s |R$ %12.2f |R$ %12.2f\n|", codigo1, quant1, produto1, preuni1, preto1);
	printf("%-20d |%-18d |%-15s |R$ %12.2f |R$ %12.2f\n|", codigo2, quant2, produto2, preuni2, preto2);
	printf("%-20d |%-18d |%-15s |R$ %12.2f |R$ %12.2f\n|", codigo3, quant3, produto3, preuni3, preto3);
	printf("%-20d |%-18d |%-15s |R$ %12.2f |R$ %12.2f\n|", codigo4, quant4, produto4, preuni4, preto4);
	printf("%-20d |%-18d |%-15s |R$ %12.2f |R$ %12.2f\n|", codigo5, quant5, produto5, preuni5, preto5);
        printf("%-20d |%-18d |%-15s |R$ %12.2f |R$ %12.2f\n|", codigo6, quant6, produto6, preuni6, preto6);
	printf("%-20d |%-18d |%-15s |R$ %12.2f |R$ %12.2f\n|", codigo7, quant7, produto7, preuni7, preto7);
	printf("%-20d |%-18d |%-15s |R$ %12.2f |R$ %12.2f\n|", codigo8, quant8, produto8, preuni8, preto8);
	printf("%-20s |%-18s |%-15s %-15s |R$ %-12.2f\n", " ", " "," ", "Total",total );
	
	system("pause");
	return 0;
}
