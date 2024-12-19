//program count the number of vowels and consonants in the given string as well as to scramble the characters of a string randomly.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h> 

int main()
{
    char s[100];
    int i=0, v=0, c=0;
    printf("enter a sentence\n");
    gets(s);
    while (s[i]!='\0')
    {
        char ch= s[i];
        if (ch>= 'a' && ch<= 'z' || ch>='A' && ch<= 'Z')
        {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        i++;
    }
    printf("number of vowels=%d\n", v );
    printf("number of consonants=%d\n", c);

    srand(time(NULL));

    int l = strlen(s);
    for (int i = 0; i < l; i++) {
        int ri = rand() % l;
        char temp = s[i];
        s[i] = s[ri];
        s[ri] = temp;
    }

    printf("Scrambled string: %s\n", s);

    return 0;
}