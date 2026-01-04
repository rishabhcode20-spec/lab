#include<stdio.h>
#include<string.h>
typedef struct profile{
    char names[100];
    int marks;
}profile;
int main(){
    int n;
    printf("Enter the number of students in class:");
    scanf("%d",&n);
    profile s[n];
    for(int i=0;i<n;i++){
    printf("Enter the names:");
    scanf("%s",s[i].names);

    printf("Enter the marks:");
    scanf("%d",&s[i].marks);
    }

    char p[100];
    printf("Enter your student names:");
    
    scanf("%s",p);
    int flag=0;
    for(int i=0;i<n;i++){
        if(strcmp(p,s[i].names)==0){
            printf("%d",s[i].marks);
            flag=1;
        }
    }
    if(!flag){printf("Invalid Student Name");}

    return 0;
}