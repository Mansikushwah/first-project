#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr;
    char ch;
    fptr = fopen("file.txt","r");
    int characters = 0, words = 0;
    do {
        ch = fgetc(fptr);
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
        characters++;
    } while (ch != EOF);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    fclose(fptr);
    return 0;
}