#include<iostream>
using namespace std;
class num{
    int x; 

    public:

    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};
int main()
{
    num n1;
    n1.set(9);
    cout<<n1.get();
    return 0;
}