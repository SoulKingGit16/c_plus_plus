#include <iostream>
using namespace std;

template<class T1>

class king{
    public:
    T1 data;
    king(T1 a)
    {data=a;}
   void print();
}; 

template<class T1>
void king<T1> :: print(){cout<<"the val of data is "<<data<<endl;} // METHOD FOR USEING SCOPE RESOLUTION OPERATOR
                                                                  //IN TEMPLATE CLASSES



template<class T1>
function(T1 a){
    cout<<"the val of a is "<<a<<endl;
}
//////////////////////////////////////////////EXACT MATCH TAKES THE HIGHEST PRIORITY
function(int a){
    cout<<"the val of non-template a is "<<a<<endl;
}




int main(){
king<float>soul(20);
cout<<soul.data<<endl;//also can be donee 
soul.print();
king<char>Queen('c');
cout<<Queen.data<<endl;
Queen.print();
function(80);
int a=function(80);

return 0;

}













