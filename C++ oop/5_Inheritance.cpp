// Inheritance
    // single
    // multipe
    // multi-level
    // hierarchical 
    //  hybrid
#include <iostream>
using namespace std;

class parent1{
    public:
    parent1(){
        cout<< "parent1 class"<< endl;
    }
};

class parent2{
    public:
    parent2(){
        cout<< "parent2 class"<< endl;
    }
};

class child: public parent1, public parent2{
    public:
    child(){
        cout<<"Child classs"<<endl;
    }
};

class grandchild:public child{
    public:
    grandchild(){
        cout<<"Grand child class";
    }

};

int main()
{
   grandchild gc; 
    return 0;
}
