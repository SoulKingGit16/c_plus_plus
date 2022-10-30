#include <iostream>
using namespace std;

class COPY_CONS
{
private:
    int a;

public:
    COPY_CONS() {} // default constructor
    COPY_CONS(int num)
    {
        a = num;
    }
    COPY_CONS(COPY_CONS &obj)//copy
    {
        cout<<"copy constructor called!"<<endl;
        a = obj.a;
    }
    show() { cout << a << endl; };
};

int main()
{
    COPY_CONS a1, a2(10),z1;
    a2.show();
    COPY_CONS z(a2);//a2's value --->z; AND INVOKE OUR COPY CONSTRUCTOR
    z.show();

    z1=z;     //Z's value --->z1; AND INVOKE COMPILER'S DEFAULT COPY CONSTRUCTOR
    z1.show();

    COPY_CONS z3=z;//Z's value --->z3; AND INVOKE OUR COPY CONSTRUCTOR
    z3.show();

}
