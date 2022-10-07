#include <iostream>
using namespace std;

class destructor_cpp
{
public:
    destructor_cpp()
    {
        cout << "our constructor is called!" << endl;
        cout << "welcome to destructor_cpp class." << endl;
    }

    ~destructor_cpp()
    {
        cout << "our destructor is called!" << endl;
    }
};

int main()
{

    destructor_cpp ofking;
    {   
        cout<<"we are in the main function!"<<endl;
        cout<<"creating the object 'ofking' ok"<<endl;

        cout << "adding more objects" << endl;

        destructor_cpp ofbikram;
        destructor_cpp ofsangita;

        cout << "exiting the block" << endl;
    }
    cout << "back to main" << endl;
    return 0;
}

