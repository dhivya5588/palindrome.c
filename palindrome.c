#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c,rem=0;
scanf("%d",&n);
c=n;
while(n!=0)
{
rem=n%10;
i=i*10+rem;
n=n/10;
}
if(c==i)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
getch();
}
