#include<stdio.h>


void main(){
	int array[10]={10,20,3,4,8,99,65,34,86,38};
	int i,j,key;

	printf("\n unsorted array :  \n");
	for(i=0;i<10;i++)
		printf("%d  ",array[i]);

	for(j=2;j<10;j++){
		key=array[j];
		i=j-1;
		while(i>=0 && array[i]>key){
			array[i+1]=array[i];
			i=i-1;
		}
		array[i+1]=key;
	}

	printf("\n sorted array\n");
	for(i=0;i<10;i++)
		printf("%d  ",array[i]);
}
