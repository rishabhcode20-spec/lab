#include<stdio.h>
#include<string.h>
int count(char arr[][300],char *s,int size){
    int c=0;
    for(int i=0;i<size;i++){
        if(strcmp(arr[i],s)==0){
            c++;
        }
    }
    return c;
}
int main(){
    int n;
    printf("Enter the total number of People:");
    scanf("%d",&n);
    char arr[n][300];
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    char s[100];
    printf("Enter the person name You Have to Find:");
    scanf("%s",s);
    
    printf("%d ",count(arr,s,n));
    
    return 0;
}