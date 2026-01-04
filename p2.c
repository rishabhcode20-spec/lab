#include<stdio.h>
int LinearSearch(int *arr,int k,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==k){return k;}
    }
    return -1;
}
int main(){
    int arr[100];
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("THE NUMBERS ARE NOT DISTINCT");
                return 0;
            if(arr[i]==0){
                printf("THE NUMBER SHOULD GREATER THAN ZERO");
                return 0;
            }
            }
        }
    }
    int k;
    printf("Enter the value of K:");
    scanf("%d",&k);

    printf("%d",LinearSearch(arr,k,n));
    return 0;
}