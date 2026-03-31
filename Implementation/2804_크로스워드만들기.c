#include <stdio.h>
#include <string.h>

int main(){
    int row=-1, col=-1, rsize, csize, chk=0;
    char a[30], b[30];
    scanf("%s %s",a,b);

    // printf("sizeof(a)=%d, strlen(a)=%d",sizeof(a), strlen(a));

    rsize = strlen(b);
    csize = strlen(a);
   
    
    for(int i=0;i<rsize;i++){
        for(int j=0;j<csize;j++){
            if(a[i]==b[j]) 
            {
                col=j; 
                row=i;
                //printf("col = %d, row = %d",col, row);
                chk=1;
                break;
            }
            else continue;
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