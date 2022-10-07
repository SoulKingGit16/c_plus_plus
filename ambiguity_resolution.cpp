#include<iostream>
using namespace std;

class A
{   public:
    fun(){
        cout<<"I'm in class A"<<endl;
    }

};

class B 
{   public:
    fun(){
        cout<<"I'm in class B"<<endl;
    }
 
};

class C : public A , public B
{
    public:
    void fun(){
        A :: fun();
    }
};

int main()
{
C soulking;
soulking.fun();
// C soulking;
    soulking.A::fun();
    soulking.B::fun();






    // return 0;
    // ***********************************************************************************************************
    //  WHY ITS RUNNING WITHOUL RETURN EVEN IF IS THIS A INT DEC..

}





