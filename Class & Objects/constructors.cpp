#include <iostream>
using namespace std;

class Wall{
    private:
    double length,height;
    public:
    /* default constructor it is initialize all its instance variables 
    and works on calling the class using object*/
    // Wall(){
    //     length=5;

    //     cout<<"Creating a Wall"<<endl;
    //     cout<<"Length of wall is : "<<length;
    // };
    /*parameterized constructor it used to initialize parameterized variables
    works on calling the class using object*/
    Wall(double len,double ht){
        length=len;
        height=ht;
        cout<<"Length : "<<length<<" Height : "<<height<<endl;
    }
};

int main()
{
    //Wall w1; //for defalut
    Wall w2(10,20); //for parameterized
    return 0;
}