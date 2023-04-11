//ARYAN ANGRAL 
//2022A1R080

// INCLUDE HEADER FILE
#include<stdio.h>
int main(){
    int size;
    printf(" Enter the size of array :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the value in array at position %d :",i);
        scanf("%d",&arr[i]);
    }
    int choice;
    printf(" enter 1 to delete a element in an array\n2 to print the array\n3 to exit :");
    scanf("%d",&choice);
    if(choice==1){
        int pos;
        printf(" enetr the position at which you want to delete data :");
        scanf("%d",&pos);
        if(pos>size||pos<0){
            printf("INVALID !!!!!!!!!");
        }
        else{
        for(int i=pos;i<size-1;i++){

            arr[i] = arr[i+1];
        } 
        size--;       
            printf("Resultant array is\n");
        for(int i=0;i<size;i++){
            printf("%d\n", arr[i]);
            
            }
    }}
        else if(choice==2){
        for (int i=0;i<size;i++)
        {
            printf("%d",arr[i]);
        }
    }
        else{
        printf("thnx");
    }
    printf("BY ARYAN ANGRAL \n 2022A1R080");
    return 0;

}