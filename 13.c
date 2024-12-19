//program to read a file and count the number of characters, words, and lines in a file
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int c=0, w=0, l=0;
    char ch;
    FILE *f;
    int inWord;
    f = fopen("file.txt", "r");
    while ((ch = fgetc(f)) != EOF) {
        
        c++;

        if (ch == '\n'){
            l++;
        }

        if (isspace(ch)) {
            {
                w++;
                
            }
           
        
    }
    }
    
    fclose(f);
    
    printf("characters: %d\n", c);
    printf("words: %d\n", w);
    printf("lines: %d\n", l);

    return 0;
}