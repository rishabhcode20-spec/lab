#include<stdio.h>

int search(char s[],char c){
  
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c){
            return 1;
            break;
        }
    }
    return 0;
}
int main(){
    char st[100];
    char c;
   
    printf("Enter c:");
    scanf("%c",&c); 

    printf("enter a string:");
    scanf("%s",st);
    
 
    if(search(st,c)){printf("YES");}
    else {printf("NO");}
    return 0;
}