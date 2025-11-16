//write a c program to perform mulipication on two matrices
#include <stdio.h>
  int main()
  {
  	int a[10][10],b[10][10],c[10][10];
  	int r1,c1,r2,c2;
    	int i,j,k;
    	printf("enter rows and columns of frist matrix:");
		scanf("%d%d",&r1,&c1);
		    	printf("enter rows and columns of second matrix:");
				scanf("%d%d",&r2,&c2);
				if(c1!=r2){
					printf("matrix mulipication not possible\n:");
					return 0;
					}
					printf("enter elements of frist matrix\n");
					for (i=0;i<r1;i++){
						for (j=0;j<c1;j++){
							scanf("%d",&a[i][j]);
						}
					}
					printf("enter elements of second matrix:\n");
					for(i=0;i<r2;i++){
						scanf("%d",&b[i][j]);
					}
					}
					for(i=0;i<r1;i++){
						for(j=0;j<c2;j++){
							c[i][j]=0
						}
					}
					for (i=0;i<r1;i++){
									for (j=0;j<r1;j++){
										for(k=0;k<c1);k++)}
										c[i][k]*b[k][j];	
					}
				}
    }
    printf ("Resultant matrix:\n");
    for (i=0;i<r1;i++){
    	 for (j=0;j<c2;j++){
    	 	printf("%d\t",c[i][j]);
    	 }
    	 printf("\n")
    }
    retun 0;
}
    	 	
	}
 	
  }

