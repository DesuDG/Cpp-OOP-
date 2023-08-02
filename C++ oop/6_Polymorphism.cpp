#include <iostream>
using namespace std;
//  function overloading
class claculate{
public:
    Add(int x, int y){
        int sum=x+y;
        cout<<sum<<endl;
    }

    void Add(int x, int y, int z){
        int sum=x+y+z;
        cout<<sum<<endl;
    }
};


int main()
{
claculate c;
c.Add(3,4);
c.Add(3,4,5);
    
    return 0;
}
