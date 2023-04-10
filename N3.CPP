#include<iostream.h>
#include<conio.h>
class A
{
public:
void a()
{
cout<<"patel";
}
};
class B:public A
{
public:
void b()
{
cout<<"nihar";
}
};
void main()
{
clrscr();
B ob;
ob.a();
ob.b();
getch();
}




