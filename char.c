#include <stdio.h>

int main(char *s) {
    int res=0;
    while (*(s+res)!="\0"){
        res++;
    }
    return res;
}

int main2(char *s) {
    int res=0;
    while (*(s++)){
        res++;
    }
    return res;
}