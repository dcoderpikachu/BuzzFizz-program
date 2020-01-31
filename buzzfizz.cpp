#include<iostream.h>
#include<conio.h>
/* A program which prints the numbers from 1 to 100. But, multiples of 3 should be replaced with "Fizz",
multiples of 5 should be replaced with "Buzz" and multiples of both 3 and 5 should be replaced with "FizzBuzz"*/
void main()
{
int no, i;
clrscr();
cout<<"Enter Range of numbers: ";
cin>>"%d",&no;
for(i=1; i<=no; i++)
{
if((i % (3*5)) == 0)
{
cout<<"FizzBuzz\n";
}
else if ((i % 5) == 0)
{
cout<<"Buzz\n";
}
else if ((i % 3) == 0)
{
cout<<"Fizz\n";
}
else
{
cout<<"%d\n",i;
}
}
getch();
}
