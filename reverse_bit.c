#include <stdio.h>

void main()
{

int bin,rev[30],i=0;
printf("Enter the Binary number \n");
scanf("%d",&bin);
while(bin!=0)
{
	rev[i]=bin%2;	
	bin=bin/2;
	i++;

}
printf("Reversed bin \n");
for(int j=i-1;j>=0;j--)
{
	printf("%d",rev[j]);
	
}
printf("\n");


}
