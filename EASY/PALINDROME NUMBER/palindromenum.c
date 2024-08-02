#include <stdio.h>
#include <stdbool.h>
bool ispalindrome(int x){
    int a=x, r=0, d;
    if(x<0){
        return false;
    }
    while(x!=0){
        d = x%10;
        r = r*10 + d;
        x = x/10;
    }
    return (a==r);
}
void main(){
    int x=121,y=-121,z=10;
    printf("%s\n", ispalindrome(x));
    printf("%s\n", ispalindrome(y));
    printf("%s\n", ispalindrome(z));
}