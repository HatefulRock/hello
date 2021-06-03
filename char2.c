#include <stdio.h>
#include <stdlib.h>




int mylen(char s[]){
	int res=0;
	while(s[res]){ 
	    res++;
	}
	return res;
}

int ex1(char s[]){
    int *p=malloc(mylen(s)*(sizeof(char)+1));
}

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

int ex3(char*s){
    int counter=0;
    char *p;
    p="e";
    while(*s){
        if (*s==*p){
            counter++;
        }
        s++;
    }
    return counter;
}

int main() {
    char *s;
    s="elephant";
    printf("%d\n",ex3(s));
}