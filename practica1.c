#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	int MAX=0;
	srand ( time (0));
	printf("¿Cuantos numeros quieres generar?\n");
	scanf ("%d", &MAX);

	int i;
	int v[MAX];
	clock_t begin = clock();
	for (i = 0; i <MAX;i++){
		v[i] = rand ();
	}
	
	for (i = 0; i<MAX; i++) {
		printf ("%d: %d\n", i, v[i]);
	}	
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("tiempo en generar los nuemros aleatorios: %f \n",time_spent);
	system("pause");
	//BubbleSort 
 
	int intercambio;
		clock_t begin2 = clock();
	do {
		intercambio = 0;
		for ( i = 0; i < MAX-1; i++){
			if (v[i] > v[i+1]) { //si v[i] es menor que el adyacente, cambia
				int aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
				intercambio = 1; 
			}	
		}
	}while (intercambio); // 
	clock_t end2 = clock();
	double time_spent2 = (double)(end2 - begin2) / CLOCKS_PER_SEC;
printf ("---------vetor ordenado\n");
	for (i = 0; i < MAX; i ++){
		printf ("%d\n", v[i]);
	}

	printf("tiempo en oedenar los numeros : %f \n",time_spent2);
	system("pause");
	return 0;
}
