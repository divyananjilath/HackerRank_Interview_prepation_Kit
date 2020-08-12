#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[1000000],n,l,i;
    scanf("%d %d",&n,&l);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=l;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<l;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
