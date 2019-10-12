#include<stdio.h>
#include<math.h>
int main()
{
int i,z,j,y,n;
printf("Enter the value of n");
scanf("%d",&n);
for (i=0;i<=n;i++){
	for(j=0;j<=i;j++){
	    printf("*");
	    }
    printf("\n");
    }
printf("done");
return(0);
}