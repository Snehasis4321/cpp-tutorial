#include <iostream>
using namespace std;

class Area{
    public:
    double side,height,width;

    double squareArea(){
        return side*side;
    }
    double rectArea(){
        return height*width;
    }
};

int main()
{
    Area a;
    a.side=10;
    a.height=20;
    a.width=30;
    cout<<"Area of Square : "<<a.squareArea()<<endl;
    cout<<"Area of Rectangle : "<<a.rectArea()<<endl;
    return 0;
}