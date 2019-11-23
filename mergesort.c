#include<stdio.h>
int * merge(int *arr1,int * arr2,int len1,int len2,int * result){

    int i=0,j=0,index=0;
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            result[index]=arr1[i];
            i++;
        }
        else{
            result[index]=arr2[j];
            j++;
        }
        index++;
    }
    while(i<len1){
        result[index]=arr1[i];
        i++;
        index++;
    }
    while(j<len2){
        result[index]=arr2[j];
        j++;
        index++;
    }
    return result;
}
int * mergesort(int * arr, int len,int *res){
    
    if(len>2){
        int result1[len/2];
        int result2[len-len/2];
        mergesort(arr,len/2,result1);
        mergesort(&arr[len/2],len-len/2,result2);
        merge(result1,result2,len/2,len-len/2,res);
    }else if (len==2){
        res[0]=arr[0]>arr[1]?arr[1]:arr[0];
        res[1]=arr[0]>arr[1]?arr[0]:arr[1];
    }
    else{
        res[0]=arr[0];
    }
}


void main(){
	int array[10]={10,20,3,4,8,99,65,34,86,38};
	int i,j,key;
    int result[10];
    mergesort(array,10,result);
	printf("\n sorted array\n");
	for(i=0;i<10;i++)
    	printf("%d  ",result[i]);
}