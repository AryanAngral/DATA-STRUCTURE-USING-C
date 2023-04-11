//ARYAN ANGRAL
//2022A1R080

// INCLUDE HEADER FILE

#include<stdio.h>

int main() {
    int flag;
    int g;
    int size;
    printf(" enter the size of the array ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf(" enetr the array at position %d :",i);
        scanf("%d",&arr[i]);
    }
    int choice;
    printf(" enter 1 to search a element in an array\n2 to print the array\n3 to exit :");
    scanf("%d",&choice);
    if(choice==1){
        int pos;
        printf(" enetr the element which you want to search in array :");
        scanf("%d",&pos);
        for (int i = 0; i < size; i++)
        {
            if(arr[i]==pos){
                g=i;
                flag=1;
            }
        }
        if(flag==1){
            printf("element found at position %d",g);
        }
        else{
            printf("element not found !!!!!");
        }
        
        
    }
    else if(choice==2){
        for (int i=0;i<size;i++)
        {
            printf("%d",arr[i]);
        }
    }
    else{
        printf("thnx");
    }
    printf("\n BY ARYAN ANGRAL \n 2022A1R080");
    return 0;
}
