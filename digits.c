#include<stdio.h>
#include<conio.h>
enum number {a=-1, c,d,e};
void main(){
    int n = 9063;
    int x;
    int temp = n;
    int d = 0;

    while(temp > 9){
        temp = temp/10;
    }
    int last = n%10;
    printf("\n\n%d", temp);
    printf("\nlast = %d", last);
    printf("\ne = %d", e);
}
