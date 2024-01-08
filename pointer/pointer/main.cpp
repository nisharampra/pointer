//
//  main.cpp
//  pointer
//
//  Created by Nisha Ramprasath on 4/11/23.
//

#include<iostream>
using namespace std;
    
class Rectangle
{
    private:
    int length;
    int breadth;
        
    public:
    Rectangle(int length,int breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }
        
    int area()
    {
        return length*breadth;
    }
    
};
    
int main()
{
    Rectangle r1(10,5);
    cout<<r1.area()<<endl;
    Rectangle r2(30,5);
    cout<<r2.area()<<endl;
        
}
