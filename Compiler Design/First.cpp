#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TOKEN_SIZE 100

const char keywords[32][10] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};

const char operators[11][3] = {"+", "-", "*", "/", "=", "==", "!=", "<", ">", "<=", ">="};

const char parentheses[] = {'(', ')', '{', '}'};

const char punctuation[] = {',', ';'};

/*
int isDigit(char ch) 
{
    return (ch >= '0' && ch <= '9'); 
}

int isAlpha(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}
int isAlnum(char ch) {
    return (isAlpha(ch) || (ch >= '0' && ch <= '9'));
}
*/

int isKeyword(char token[]) 

{
    for (int i = 0; i < 32; i++) 
    {
        if (strcmp(token, keywords[i]) == 0) return 1;
    }
    return 0;
}

int isOperator(char token[]) 
{
    for (int i = 0; i < 11; i++) 
    {
        if (strcmp(token, operators[i]) == 0) 
            return 1;
    }
    return 0;
}

int isParenthesis(char token) 
{
    for (int i = 0; i < 4; i++) 
    {
        if (token == parentheses[i]) 
            return 1;
    }
    return 0;
}

int isPunctuation(char token) 
{
    for (int i = 0; i < 2; i++) 
    {
        if (token == punctuation[i]) 
            return 1;
    }
    return 0;
}

int isConstant(char token[])  
{
    int i = 0, dotCount = 0;
    if (token[0] == '-' || token[0] == '+') 
        i++;
    for (; token[i] != '\0'; i++) 
    {
        if (token[i] == '.') dotCount++; 
        else if (!isdigit(token[i])) 
            return 0; 
        if (dotCount > 1) 
            return 0; 
    }
    return 1;
} 



int isIdentifier(const char token[]) 
{
    
    if (!isalpha(token[0]) && token[0] != '_') 
        return 0;
    for (int i = 1; token[i] != '\0'; i++) 
    {
        if (!isalnum(token[i]) && token[i] != '_') 
            return 0;
    }
    return 1;
}

void classifyTokens(char input[]) 
{
    char* token = strtok(input, " "); 
    while (token != NULL) {
        if (isKeyword(token)) 
        {
            printf("%s :keyword token\n", token);
        } 
        else if (isOperator(token)) 
        {
            printf("%s :operator token\n", token);
        } 
        else if (strlen(token) == 1 && isParenthesis(token[0])) 
        {
            printf("%s :parenthesis token\n", token);
        } 
        else if (strlen(token) == 1 && isPunctuation(token[0])) 
        {
            printf("%s :punctuation token\n", token);
        } 
        else if (isConstant(token)) 
        {
            if (token[0] == '-') {
                printf("%s :negative constant token\n", token);
            } else {
                printf("%s :positive constant token\n", token);
            }
        }    
        else if (isIdentifier(token)) 
        {
            printf("%s :identifer token\n", token);
        } 
        else 
        {
            printf("%s :invalid token\n", token);
        }
        token = strtok(NULL, " "); 
    }
}

int main() 
{
    char input[256];
    printf("wrtite down your string: ");
    scanf("%255[^\n]", input);
    classifyTokens(input);
    return 0;
}