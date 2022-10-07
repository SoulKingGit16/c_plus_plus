#include <iostream>
using namespace std;
int main()
{   //new keyword;
   int *a = new int(90);
   cout<<*a<<endl;

    //delete keyword

    int *array=new int[2];

    delete array;  
     

    array[0]=10;    
    array[1]=20;
    // delete[] array;

    cout<<array[0]<<endl;   
    cout<<array[1]<<endl;  

     
    delete[] array;  
    
    cout<<array[0]<<endl;   
    cout<<array[1]<<endl; 
    return 0;
}

