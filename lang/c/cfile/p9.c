#include <stdio.h>
int main(){
    int count, n;
    int x,y;
    
    // Input the values of x and n
    printf("Input the values of x and n:\n");
    scanf("%d%d", &x,&n);
    
    y=1.0;
    count=1;
    
    // Calculate x to the power n
    while(count<=n)
    {
        y=y*x;
        count++;
    }
    
    // Print the result
    printf("x=%d; n=%d; \nx to power n=%d", x, n,y);
    
    return 0;
}
