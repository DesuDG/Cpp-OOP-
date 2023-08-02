#include<iostream>
using namespace std;
class Students{ //class
public:
string name;
int age;
};


int main()
{
    Students st1; //Object
    Students st2;
    st1.name="Abebe";
    st1.age=18;

    st2.name="Aster";
    st2.age=17;

    cout<< st1.name<< " "<< st1.age<<endl;
    cout<< st2.name<< " "<< st2.age<<endl;
    
    return 0;
}

