#include<stdio.h>


void main(){
	int array[10]={10,20,3,4,8,99,65,34,86,38};
	int i,j,temp;

	printf("\n unsorted array :  \n");
	for(i=0;i<10;i++)
		printf("%d  ",array[i]);

	for(j=9;j>0;j--){
		for(i=0;i<j;i++){
			if(array[j]<array[i]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;}
			}
		}

	printf("\n sorted array\n");
	for(i=0;i<10;i++)
		printf("%d  ",array[i]);
}