#include <iostream>
using namespace std;
class Base
{
    int a;

public:
    void setA(int x)
    {
        a = x;
    }
    int getA()
    {
        return a;
    }
};

class D1 : virtual public Base
{
    int b;

public:
    void setB(int y)
    {
        b = y;
    }
    int getB()
    {
        return b;
    }
};

class D2:virtual public Base
{
    int c;

public:
    void setC(int z)
    {
        c= z;
    }
    int getC()
    {
        return c;
    }
};

class D3: public D1,public D2
{
    int res;

public:
    int calc(int x,int y,int z){
        setA(x);
        setB(y);
        setC(z);
        res=getA()+getB()+getC();
        return res;
    }
};
int main()
{
    D3 obj;
    int a,b,c;
    cout<<"Enter three integers: "<<endl;
    cin>>a>>b>>c;
    cout<<"The sum of the integers is "<<obj.calc(a,b,c);
    return 0;
}