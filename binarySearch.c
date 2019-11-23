/* binary search on c array*/
#include<stdio.h>
void printarr(int *arr,int len){
    //prints an array arr with length len
    for(int i=0;i<len;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
int binSearch(int * arr,int len,int val){
    //searches for an element - val in sorted array - arr . 
    //return 1 if found, else 0;
    //printarr(arr,len);
    int mid=len/2;
    if(len==1){
            if(arr[0]==val)
                return 1;
            else
                return 0;
    }
    else if( val<arr[mid]){
        return binSearch(arr,mid,val);
    }
    else if(val>arr[mid]){
        int * arr2=&arr[mid];
        return binSearch(arr2,len-mid,val);
    }
    else if(val==arr[mid]){
        return 1;
    }
    else{
        return 0;
    }
}
void main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",binSearch(arr,10,15));
}