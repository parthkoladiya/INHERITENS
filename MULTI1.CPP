#include<iostream.h>
#include<conio.h>

class AS
{
  int nu1;
    private:
      void Setdata1()
      {
	cout<<"Enter your nu1 data";
	cin>>nu1;
      }
      void Getdata1()
      {
	cout<<nu1;
      }
    public:
      void Printdata1()
      {
	Setdata1();
	Getdata1();
      }
};
class BS : public AS
{
  int nu2;
    private:
      void Setdata2()
      {
	cout<<"Enter your nu2 data";
	cin>>nu2;
      }
      void Getdata2()
      {
       cout<<"nu2 is == >"<<nu2;
      }
      public:
	void Printdata2()
	{
	  Setdata2();
	  Getdata2();
	}
};
class CS : public BS
{
  int nu3;
     private:
	void Setdata3()
	{
	  cout<<"Enter your nu3 data";
	  cin>>nu3;
	}
	void Getdata3()
	{
	 cout<<"nu3 is == >" <<nu3;
	}
     public:
	void Printdata3()
	{
	   Setdata3();
	   Getdata3();


	}
};
 void main()
 {
   CS obj;
   clrscr();
   obj.Printdata1();

   getch();
 }