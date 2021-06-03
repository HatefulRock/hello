#include <stdio.h>
/*
int main(char *s) {
    int res=0;
    while (*(s+res)!="\0"){
        res++;
    }
    return res;
}
*/

int main2(char *s) {
    int res=0;
    while (*(s++)){
        res++;
    }
    return res;
}

int main3(){
    char *s="abc";
    printf("%d\n",main2(s));
}
