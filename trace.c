#include<stdio.h>
main(){
	int n;		//jumlah bilangan
	int i,j;
	int temp;
	
	printf("");
	scanf("%d",&n);
	int baris[n][n];
	
	printf("");
	for (j=0; j<n; j++){
		for (i=0; i<n; i++){
			scanf("%d", &baris[i][j]);
		}
	}
	
	int D;
		for (i=0; i<n; i++){
			D = D + baris[i][i];
		}
	
	printf("%d", D);

	return 0;
}

