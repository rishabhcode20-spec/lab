#include<stdio.h>
int binarySearch(int *arr,int k,int n){
    

    int lp=0,rp=n-1;
    int m=lp+(rp-lp)/2;
    
    while(arr[m]!=k && lp<rp){
       if(arr[m]>k){
        rp=m-1;
       }
       else {lp=m+1;}
       m=(lp+rp)/2;

    }
    if(arr[m]==k){return m;}
    else return -1;
    
}
int main(){

    int arr[100], target;
    
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter a Target:");
    scanf("%d",&target);
    printf("Enter Array Elements:");
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

    printf("%d",binarySearch(arr,target,n));

    return 0;
}