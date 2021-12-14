#include <iostream>
using namespace std;

void intercambio(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int particion(int arr[], int primero, int ultimo){
	int pivote = arr[ultimo]; 
	int i = (primero - 1);
	
	for(int j = primero; j <= ultimo - 1; j++){
		
		if(arr[j] < pivote){
			i++;
			intercambio(&arr[i], &arr[j]);
		}
	}
	intercambio(&arr[i + 1], &arr[ultimo]);
	return (i + 1);
}

void quickSort(int arr[], int primero, int ultimo){
	if(primero < ultimo){
		int ip = particion (arr, primero, ultimo);
		quickSort(arr,primero, ip - 1);
		quickSort(arr, ip + 1, ultimo);
		
	}
}
int main (){
	int arr[] ={10, 100, 5, 99, 36, 12, 55};
	int tamanio = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0 , tamanio-1);
	cout << "Arreglo ordenado:" << endl;
	for(int i= 0; i < tamanio; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
