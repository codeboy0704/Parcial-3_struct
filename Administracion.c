#include <stdio.h>
#include <stdlib.h>

struct admin
{
	char nom_admin[15];
	char ape_admin[15];
	char dir_admin[50];
	char tel_admin[15];
	char telm_admin[15];
	int ant_admin;
	float pago_admin;
	char dNI_admin[15];
};

void printSeparator()
{
	printf("--------------------------------------------------\n");
}

void ingresar_administradores(struct admin *lista, int cantidad)
{
	for (int i = 0; i < cantidad; i++)
	{
		printf("Ingrese el nombre del administrador %d: ", i + 1);
		fgets(lista[i].nom_admin, sizeof(lista[i].nom_admin), stdin);
		lista[i].nom_admin[strcspn(lista[i].nom_admin, "\n")] = '\0'; // Eliminar el salto de línea
		printSeparator();
		//////////////////////////
		printf("Ingrese el apellido del administrador %d: ", i + 1);
		fgets(lista[i].ape_admin, sizeof(lista[i].ape_admin), stdin);
		lista[i].ape_admin[strcspn(lista[i].ape_admin, "\n")] = '\0'; // Eliminar el salto de línea
		printSeparator();
		////////////////////////////
		printf("Ingrese la direccion del administrador %d: ", i + 1);
		fgets(lista[i].dir_admin, sizeof(lista[i].dir_admin), stdin);
		lista[i].dir_admin[strcspn(lista[i].dir_admin, "\n")] = '\0'; // Eliminar el salto de línea
		printSeparator();
		//////////////////////////
		printf("Ingrese el telefono del administrador %d: ", i + 1);
		fgets(lista[i].tel_admin, sizeof(lista[i].tel_admin), stdin);
		lista[i].tel_admin[strcspn(lista[i].tel_admin, "\n")] = '\0'; // Eliminar el salto de línea
		printSeparator();
		//////////////////////////
		printf("Ingrese el telefono movil del administrador %d: ", i + 1);
		fgets(lista[i].telm_admin, sizeof(lista[i].telm_admin), stdin);
		lista[i].telm_admin[strcspn(lista[i].telm_admin, "\n")] = '\0'; // Eliminar el salto de línea
		printSeparator();
		/////////////////////////
		printf("Ingrese la antiguedad del administrador %d: ", i + 1);
		scanf("%d", &lista[i].ant_admin);
		printSeparator();
		/////////////////////////
		printf("Ingrese el pago del administrador %d: ", i + 1);
		scanf("%f", &lista[i].pago_admin);
		printSeparator();
		/////////////////////////
		printf("Ingrese el DNI del administrador %d: ", i + 1);
		fgets(lista[i].dNI_admin, sizeof(lista[i].dNI_admin), stdin);
		lista[i].dNI_admin[strcspn(lista[i].dNI_admin, "\n")] = '\0'; // Eliminar el salto de línea
		printSeparator();
	}
}

void mostrar_administradores(const struct admin *lista, int cantidad)
{
	printf("Administrativos:\n");
	print("\n");
	for (int i = 0; i < cantidad; i++)
	{
		printf("Administrador %d:\n", i + 1);
		printf("Nombre: %s\n", lista[i].nom_admin);
		printf("Apellido: %s\n", lista[i].ape_admin);
		printf("Direccion: %s\n", lista[i].dir_admin);
		printf("Telefono: %s\n", lista[i].tel_admin);
		printf("Telefono movil: %s\n", lista[i].telm_admin);
		printf("Antiguedad: %d\n", lista[i].ant_admin);
		printf("Pago: %.2f\n", lista[i].pago_admin);
		printf("DNI: %s\n", lista[i].dNI_admin);
		printSeparator();
		printSeparator();
	}
}

void administrativos()
{
	// const int num_administrativos = 5;
	static struct admin lista[1];
	ingresar_administradores(lista, 1);
	mostrar_administradores(lista, 1);
}

int main()
{
	administrativos();
	return 0;
}