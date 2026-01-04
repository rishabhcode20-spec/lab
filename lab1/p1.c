#include<stdio.h>
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
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("%d",i);
            flag=1;
        }
    }
    if(flag==0){printf("-1");}
   
    return 0;
}
