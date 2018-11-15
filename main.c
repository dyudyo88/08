#include <stdio.h>

void print_image(int image[][5])
{
	int i,j;
	int*ptr=&image[0][0];

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",*ptr);
			ptr = ptr + 1;  
		}
		printf("\n");
	}
	
}





void brighten_image(int image[][5])
{
	int i,j;
	int*ptr=&image[0][0];

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			*ptr=*ptr+10;
			ptr=ptr+1;
		}
		printf("\n");	
	}
	
	
}



int main(void)
{
	int image[5][5]={
		{10,20,30,40,50},
		{10,20,30,40,50},
		{10,20,30,40,50},
		{10,20,30,40,50},
		{10,20,30,40,50}
	};
	
	print_image(image);
	brighten_image(image);
	print_image(image);
	return 0;
}
