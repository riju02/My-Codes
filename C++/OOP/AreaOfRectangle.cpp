#include<iostream>

using namespace std;

class AreaOfRectangle{
    private: int a,l,b;
    public: 
    void getdata(){
        cout<<"Enter The Length- ";
        cin>>l;
        cout<<"Enter The Base- ";
        cin>>b;
    }
    void Calculate(){
        a=l*b;
    }
    void Display(){
        cout<<"The Area is- "<<a;
    }
};
int main(){
    AreaOfRectangle x;
    x.getdata();
    x.Calculate();
    x.Display();
}