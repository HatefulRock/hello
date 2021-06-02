#include <stdio.h>


int mylen(char s[]){
	int res=0;
	while(s[res]){ 
	    res++;
	}
	return res;
}

int compare(char s[],char h[]) {
    if(mylen(s)==mylen(h)){
        return 0;
    }
    else if(mylen(s)<mylen(h)) {
        return -1;
    }
    else {
        return 1;
    }
}



int main() {
    char s[]="abcd";
    char h[]="abc";
    char k[]="lop";
    printf("result=%d\n",compare(h,s));
    printf("result=%d\n",compare(s,k));
    printf("result=%d\n",compare(h,k));
}