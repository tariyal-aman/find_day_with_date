#include<iostream>
using namespace::std;
int leap(int y)
{
if(y==0)
return 28;
if(y%100==0)
{
  if(y%400==0)
   return 29;
 else
return 28;
}
else if(y%4==0)
return 29;
else
return 28;
}
int mon(int i,int k){
if(i==2)
return leap(k);
else if(i%2==1)
   {if(i<=7)
     return 31;
   else
    return 30;
   }
else
{
    if(i<=6)
      return 30;
	else 
	return 31;

}

}


int main()
{

int a,b,c,z=7;
puts("ENTER DAY (dd)");
cin>>a;
puts("ENTER MONTH (mm)");
cin>>b;
puts("ENTER YEAR (yyyy)");
cin>>c;
int i,j=1,k=0,m=0;
for(i=1;;++i)
{
if(i==a&&j==b&&k==c)
break;
if(i==mon(j,k))
{
++j;
i=0;
}
if(j==13)
{
++k;
j=1;
m=0;
}

++z;
if(z==8)
z=1;
++m;
}

if(z==1)
printf("monday\n");
else if(z==2)
printf("tuesday\n");
else if(z==3)
printf("wednesday\n");
else if(z==4)
printf("thursday\n");
else if(z==5)
printf("friday\n");
else if(z==6)
printf("saturday\n");
else if(z==7)
printf("sunday\n");
system("pause");
}

