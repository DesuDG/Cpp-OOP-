 
#include <iostream>
using namespace std;

class Rectangle{
    public:
    int l;     
    int w; 
    Rectangle(){ // Default constructor
        l=5;
        w=6;
    }
    Rectangle(int a, int b){ // Parametrized constructor
    l=a;
    w=b;    
    }
    Rectangle(Rectangle& r){  // Copy constructor
        l=r.l;
        w=r.w;
    }
   
};

int main()
{
    Rectangle r1;
    cout <<r1.l <<" " << r1.w <<endl;
    
    Rectangle r2(7,8);
    cout <<r2.l <<" " << r2.w << endl;
    Rectangle r3=r2;
    cout <<r3.l <<" " << r3.w << endl;
    return 0;
}
