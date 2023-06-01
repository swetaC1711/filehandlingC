#include<stdio.h>
int main(){
    FILE *fptr;
    //char c='a';
    fptr=fopen("cust.txt","w");
    fprintf(fptr,"hello world");
    fclose(fptr);
}

//======================to take input from user(dynamic)============================
    
/* 
#include<stdio.h>
int main(){
    FILE *fptr;
    char c='a';
    fptr=fopen("cust.txt","w");
    if(fptr==NULL){
        printf("file not found");
    }
    while(c!='@'){
        scanf("%c",&c);
        fputc(c,fptr);
    }
    fclose(fptr);
    return 0;
}*/

