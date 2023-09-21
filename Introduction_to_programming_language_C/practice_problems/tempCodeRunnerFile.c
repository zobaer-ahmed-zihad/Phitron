if( ch <= 65 && ch <= 90){
        char uppercase = ch + 32;
        printf("%c", uppercase);
    }else if(ch <= 97 && ch <= 122){
        char lowercase = ch - 32;
        printf("%c", lowercase);
    }