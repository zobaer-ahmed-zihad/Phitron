#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    char che = tolower(ch);

    //toupper() function convert lower case char to uppercase 
    //tolower() function convert upper case char to lowercase 


    switch(che){
        case 'a':
            cout<<"Vowel";
            break;
        case 'e':
            cout<<"Vowel";
            break;
        case 'i':
            cout<<"Vowel";
            break;
        case 'o':
            cout<<"Vowel";
            break;
        case 'u':
            cout<<"Vowel";
            break;
        default:
            cout<<"Consonant";
    }

    return 0;
}