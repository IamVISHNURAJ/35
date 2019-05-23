#include<stdio.h>
#include<string.h>
void main()
{
char a[1000];
 int c=0,j;
gets(a);
for(j = 0; a[j] != '\0'; j++)
{
if(a[j]=='0' || a[j]=='1'|| a[j]=='2'|| a[j]=='3'|| a[j]=='4'||a[j]=='5'|| a[j]=='6'|| a[j]=='7'|| a[j]=='8'|| a[j]=='9')
 c++;
}
printf("%d", c);
}