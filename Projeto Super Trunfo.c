#include <stdio.h>

struct Carta {
	char estado[50];
	char codigo[5];
	char cidade[50];
	int populacao;
	float area;
	float pib;
	int pontos_turisticos;
};

int main() {
	struct Carta carta1, carta2;
	
	//cadastro da primeira carta
	printf("==== CADASTRO DA PRIMEIRA CARTA ====\n");
	printf("Estado: ");
	scanf(" %[^\n]", carta1.estado); //nao precisa do & pois é uma string
	printf("Codigo: ");
	scanf("%s", carta1.codigo);
	printf("Cidade: ");
	scanf(" %[^\n]", carta1.cidade);
	printf("Populacao: ");
	scanf("%d", &carta1.populacao);
	printf("Area: ");
	scanf("%f", &carta1.area);
	printf("PIB: ");
	scanf("%f", &carta1.pib);
	printf("Pontos turisticos: ");
	scanf("%d", &carta1.pontos_turisticos);
	
	//cadastro da segunda carta
	printf("==== CADASTRO DA SEGUNDA CARTA ====\n");
	printf("Estado: ");
	scanf(" %[^\n]", carta2.estado);
	printf("Codigo: ");
	scanf(" %s", carta2.codigo);
	printf("Cidade: ");
	scanf(" %[^\n]", carta2.cidade);
	printf("Populacao: ");
	scanf("%d", &carta2.populacao);
	printf("Area: ");
	scanf("%f", &carta2.area);
	printf("PIB: ");
	scanf("%f", &carta2.pib);
	printf("Pontos turisticos: ");
	scanf("%d", &carta2.pontos_turisticos);
	
	//exibindo as cartas
	printf("\n==== CARTA 1 ====\n");
	printf("Estado: %s\n", carta1.estado);
	printf("Codigo: %s\n", carta1.codigo);
	printf("Cidade: %s\n", carta1.cidade);
	printf("Populacao: %d\n", carta1.populacao);
	printf("Area: %f\n", carta1.area);
	printf("PIB: %f\n", carta1.pib);
	printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);
	
	printf("\n==== CARTA 2 ====\n");
	printf("Estado: %s\n", carta2.estado);
	printf("Codigo: %s\n", carta2.codigo);
	printf("Cidade: %s\n", carta2.cidade);
	printf("Populacao: %d\n", carta2.populacao);
	printf("Area: %f\n", carta2.area);
	printf("PIB: %f\n", carta2.pib);
	printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);
	
	return 0;
}
