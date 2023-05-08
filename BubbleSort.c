#include <stdio.h>
#include <stdbool.h>

int bubblesort(int v[], int arraySize){
	bool estaOrdenado = true;
	
	while(estaOrdenado){
		estaOrdenado = false;
		for(int i = 0; i < arraySize - 1; i++){
			if(v[i] < v[i+1]){
				int temp;
				temp = v[i+1];
				v[i+1] = v[i];
				v[i] = temp;
				estaOrdenado = true;
			}
		}
		arraySize--;
		
	}
	
	return 0;
	
}

int main() {
	int n;
	scanf("%d", &n);
	int v[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	bubblesort(v, n);
	
	for(int i = 0; i < n; i++){
		printf("%d ", v[i]);
	}
}
