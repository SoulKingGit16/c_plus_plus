#include <iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class disdata
{
    public:
            T1 a;
            T2 b;
            T3 c;
            disdata(T1 x ,T2 y ,T3 z)
            {
                a=x;
                b=y;
                c=z;
            }
            void display(){
                cout<<a<<endl;
                cout<<b<<endl;
                cout<<c<<endl;
            }

};

int main()
{
    disdata<>soulking(70,70.10,70);
    soulking.display();
    return 0;
}


