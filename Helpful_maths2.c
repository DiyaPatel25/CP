//The C library function char *strtok(char *str, const char *delim) breaks string str into a series of tokens using the delimiter delim.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_TOKENS 100
#define MAX_LENGTH 50
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main()
{
    char s[100];
    gets(s);
    char delimiter[]="+";
    char *tokens[MAX_TOKENS];
    int num_tokens=0;
    char *token =strtok(s, delimiter); 

    
    while(token !=NULL && num_tokens<MAX_TOKENS)
    {
        tokens[num_tokens]=token;
        num_tokens++;
        token=strtok(NULL, "+");
    }
        qsort(tokens, num_tokens, sizeof(char *), compareStrings);

    // Reconstruct the string with delimiters
    char arranged_string[MAX_LENGTH] = "";
    for (int i = 0; i < num_tokens; i++) {
        strcat(arranged_string, tokens[i]);
        if (i < num_tokens - 1) {
            strcat(arranged_string, "+"); // Append space as delimiter
        }
        free(tokens[i]); // Free dynamically allocated memory
    }

    // Print the arranged string
    printf("%s\n", arranged_string);

       
        
        
       return 0;
    }

    

    
