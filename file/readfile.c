#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("song.txt","r");
    char ch;
    ch=fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    fclose(fptr);
}