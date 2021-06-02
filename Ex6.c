#include <stdio.h>
#include "Ex5.c"

int somme(int t[], int h[], int n) {
    int s[n];
    for(int i=0;i<n;i++) {
        s[i]=t[i]+h[i];
    }
print_tableau(s,n-1);
}



int main() {
    int t[6]={1,2,3,4,5,6};
    int h[6]={1,2,3,4,5,6};
    somme(t,h,6);

}
