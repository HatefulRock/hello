#include <stdio.h>

int ex2(char s[]) {
    int res=0;
    char *w;
    while(s[res]) {
        *w=s[res];
        res++;
        w++;
    }
    *(w+1)='\0';
}

int copie() {
    
}

