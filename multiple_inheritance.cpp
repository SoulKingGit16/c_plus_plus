#include<iostream>
using namespace std;

class calculator{
    public:
    int a;
    int b;  
    void setdata(int e,int f){
      a=e;
      b=f;
    }
    
};
class scientificcalculator{
    public:
    void nd2setdata(int e,int f){
     int c;
     c=e;
    //  ************************************************************************************
    //  WHY NOT THAT WILL WORK........
     int d;
     d=f;
    }
    // void setdata(int m,int n){
    //   int m = m;
    //   int n = n;
    // }
    

};
class couter:public calculator,public scientificcalculator
{ 
    public:
    // void setdata(){
    //   calculator :: setdata();
    // }
       void getdata(){
        cout<<"a+b is "<<a+b<<endl;
        cout<<"c+d is "<<c+d<<endl;
    }
    
};
int main(){
 couter soulking;
//  soulking.scientificcalculator::setdata();
    soulking.setdata(100,200);
    soulking.nd2setdata(400,200);
        soulking.getdata();

return 0;
}
























