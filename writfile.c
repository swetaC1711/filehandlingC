#include<stdio.h>
int main(){
    FILE *fptr;
    //char c='a';
    fptr=fopen("cust.txt","w");
    fprintf(fptr,"hello world");
    fclose(fptr);
}
