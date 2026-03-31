// https://www.acmicpc.net/problem/2804
#include <stdio.h>
#include <string.h>

int main(){
    int row=-1, col=-1, rsize, csize, chk=0;
    char a[100]={0}, b[100]={0};
    scanf("%s %s",a,b);

    if(strlen(a) > 30 || strlen(b) > 30) return -1;

    rsize = strlen(b);
    csize = strlen(a);

    for(int i=0;i<csize;i++){ 
        for(int j=0;j<rsize;j++){ 
            if(a[i]==b[j]) 
            {
                row=i; 
                col=j;
                i=csize;
                break;
            }
        }
        if(chk==1) break;
    }
    
    if(row==-1||col==-1) return -1;

    for(int i=0;i<rsize;i++){
        for(int j=0;j<csize;j++){
            if(j==row) printf("%c",b[i]);
            else if(i==col) printf("%c", a[j]);
            else printf(".");
        }
        printf("\n");
    }

    return 0;
}