//write a progrom to swap two numbers.
//Downloaded From www.turboc8.com coded by Yogendra Singh.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
cout<<"                         www.turboc8.com"<<endl;
int swap(int a,int b);
int a=4,b=7;
cout<<"Original values "<<endl<<"a= "<<a<<endl<<"b= "<<b;
swap(a,b);
getch();

}
int swap(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
cout<<"\nAfter swapping "<<endl<<"a= "<<a<<endl<<"b= "<<b;
return 0;
}
