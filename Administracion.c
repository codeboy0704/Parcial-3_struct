#include <stdio.h>
#include <stdlib.h>

#define num_administrativos 10

struct admin{
	char nom_admin[15];
	char ape_admin[15];
	char dir_admin[50];
	char tel_admin[15];
	char telm_admin[15];
	int ant_admin;
	float pago_admin;
	char dNI_admin[15];
};

void administrativos(){
	int n;
	static struct admin lista[num_administrativos] = 	{"Hector", "Solis Gonzalez", "Jardines de manstranto", "---", "6220-5466", 3, 1250.50, "8-992-390", 
									 					 "Ian", "Flores ", "Vista Alegre", "---", "----.----", 1, 1250.50, ".-....-...",};
	/*printf("Inserte los datos\n");
	scanf("%s",lista[3].nom_admin);
	scanf("%s",lista[3].ape_admin);
	scanf("%s",lista[3].dir_admin);
	scanf("%s",lista[3].tel_admin);
	scanf("%s",lista[3].telm_admin);
	scanf("%d",&lista[3].ant_admin);
	scanf("%f",&lista[3].pago_admin);
	scanf("%s",lista[3].dNI_admin);*/
	
	/*printf("Inserte el numero de la lista\n");
	scanf("%d",n);*/
	
	printf("\n%.2f",lista[0].pago_admin);
}

int main(){
	administrativos();
	return 0;
}