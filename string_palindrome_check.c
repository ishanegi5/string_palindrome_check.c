#include<stdio.h>
int main()
{   char str[100];
   printf("Enter a string to check if its palindrome: ");
  fgets(str,100,stdin);
int i,j,k,count2=0,count1=0;
for(i=1;str[i]!='\0';i++)
{
    count1++;
}
int a=count1/2;
for(j=0;j<a;j++)
{  
    if(str[j]==str[count1-(j+1)])
    {
         count2++;
    }
    
}
if(a==count2)
{
   printf("String is palindrome "); 
}
else
{
   printf("not palindrome");
}

    return 0;
}
