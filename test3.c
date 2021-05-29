#include<stdio.h>
int main(void)
{
char data[] = "01234567890123456789";
char* ptr = &data[9];
char c = ptr[-1]; // 7
printf("%c", c);
return 0;
}

