/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int area;
	int lado;
	/* Etapa 1 - Definir entradas */
	/* Etapa 2 - Datos de entrada */
	printf("Ingrese el lado del cuadrado\n");
	scanf("%i", &lado);
	/* Etapa 3 - Proceso(operacion)  */
	area = lado*lado;
	/* Etapa 4 - Mostrar el resultado  */
	printf("El area del cuadrado es:%icm2\n", area);
	/* Vamos a probar una condicional (If - else) */
	/* vamos a expresar si un area es < 100cm2 que diga  */
	/* "El area es muy grande" , de lo contrario "El area ess muy chica" */
	if (area>100) {
		printf("El area es muy grande \n");
	} else {
		printf("El area es muy chica \n");
	}
	return 0;
}

