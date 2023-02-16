#include<stdio.h>

main(){
	
	int M , N;
	
	printf("Enter value : ");
	scanf("%d",&M);
	
	printf("Enter value : ");
	scanf("%d",&N);
	
	int matrix[M][N];
	int i , j ;
	
	for(i=0 ; i<M ; i++){
		
		for(j=0 ; j<N ; j++){
			
			printf("Enter value [%d][%d] : ",i,j);
			scanf("%d",&matrix[i][j]);
		
		}
	}
	
	printf("\n");
	
	for(i=0 ; i<M ; i++){
	
		printf("\n");
		
		for(j=0 ; j<N ; j++){
			
			printf("%d ",matrix[i][j]);
		
		}
	
	}printf("\n");
}
