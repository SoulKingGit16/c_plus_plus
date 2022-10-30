#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]={70,75,5,10,100,7};
    sort(arr,arr+5);////////////////THIS WILL SORT THE FRIST 5 ELEMENTS & PRINT THE ELEMENTS IN SCENDING ORDER BY DEAFULT OFCOURSE
     for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;

    }

cout<<"another line"<<endl;
sort(arr,arr+6,greater<int>());//"greater<int>()"THIS IS A FUNCTION OBJECT WHICH PRINT THE ELEMENTS IN DESCENDING ORDER
for(int i=0;i<6;i++)
{
    cout<<arr[i]<<endl;
}
    return 0;
}


