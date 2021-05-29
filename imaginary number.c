#include<stdio.h>
#include<conio.h>
struct complex
{
    int real;
    int imag
};
struct complex add(complex,complex);
void main()
{
  struct complex c1,c2,temp;
  printf("Enter real part of first number");
  scanf("'%d",&c1.real);
  printf("Enter imaginary part of first number");
  scanf("'%d",&c1.real);
  printf("Enter real part of second number");
  scanf("'%d",&c1.real);
  printf("Enter complex part of second number");
  scanf("'%d",&c1.real);
  temp=add(struct complex c1,struct complex c2);
  printf("Addition = %d + %di",temp.real,temp.imag);
}
struct complex add(struct complex n1,struct complex n2)
{
    struct complex n;
    n.real=n1.real + n2.real;
    n.imag=n1.image + n2.image;
    return n;
};
