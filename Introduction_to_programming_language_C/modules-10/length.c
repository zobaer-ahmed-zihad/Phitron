#include<stdio.h>
#include<string.h>

int main(){
    char ch[20];
    fgets(ch, sizeof(ch),stdin);
    int count = 0;
    // for (int i = 0; i < sizeof(ch); i++)
    // {
    //     if(ch[i] == '\0'){
    //         break;
    //     }
    //     count++;
    // }
    int i = 0;
    while (ch[i] != '\0')
    {
        count++;
        i++;
    }
    int length = strlen(ch);
    printf("%d", length);

    printf("%d", count);

    return 0;
}