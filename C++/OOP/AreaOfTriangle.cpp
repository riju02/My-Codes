#include<iostream>

using namespace std;

class AreaOfTriangle
{
   private: int b,h,a;
   public :
   void getdata()
   {
    cout<<"Enter The Base Value- ";
    cin>>b;
    cout<<"Enter The Height Value-  ";
    cin>>h;
   }
   void CalculateArea()
   {
    a=(b*h)/2;
   }
   void Display()
   {
    cout<<"The Area Of The Triangle is- "<<a;
   }
};

int main(){
    AreaOfTriangle x;
    x.getdata();
    x.CalculateArea();
    x.Display();
}