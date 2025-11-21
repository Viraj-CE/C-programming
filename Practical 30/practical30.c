#include<stdio.h>
void sort(int arr[],int num){
    int t;
    for(int i=0;i<num;i++) {
        for(int j=0;j<num;j++){
            if(arr[j]>arr[i]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(int i=0;i<num;i++){
        printf("Price :%d\n",arr[i]);
    }
}
void main () {
    int num;
    printf("Enter The Number of Items :");
    scanf("%d",&num);
    int price[num];
    for(int i=0;i<num;i++){
        printf("Enter Price :");
        scanf("%d",&price[i]);
    }
    printf("-----Sorted Prices-----\n");
    sort(price,num);
}