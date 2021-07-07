#include <stdio.h>

int main()
{
    int n,minV,minH,min,len;
    scanf("%d", &n);
    len = (n*2) - 1;
    for(int i=1;i<=len;i++){
        for(int j=1;j<=len;j++){
            int min = i < j ? i : j;
            minV = i<=len-i?i-1:len-i;
            minH  = j<=len-j?j-1:len-j;
            min = minV<=minH?minV:minH;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
