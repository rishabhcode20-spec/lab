#include<stdio.h>
int uc=0;
int BinarySearch(int *arr,int k,int low, int high){
        uc++;
        
        int mid=(low+high)/2;
        if(arr[mid]==k){return mid;}
        if(low>=high) return -1;
        
        if(arr[mid]<k){
            return BinarySearch(arr,k, mid+1,high);
        }
        else { return BinarySearch(arr,k,low,mid-1);}
 
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
                return 0;}
            if(arr[i]==0){
                printf("THE NUMBER SHOULD BE GREATER THAN ZERO");
                return 0;
            }
            
        }
    }

    printf("%d\n",BinarySearch(arr,target,0,n-1));
    printf("The Number of times function get call:%d",uc);
    

   
    return 0;
}