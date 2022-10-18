// #include <iostream>                              ////////AAM ZINDAGI
// using namespace std;

// float favg(int a, int b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// }

// int main()
// {
//     float a;
//     a=favg(10,20);
//     printf("the avg is %.0f\n",a);
//     return 0;
// }

///////////////////////////////////////////////MENTOS ZINDAGI////////////////////////////


#include <iostream>
using namespace std;

template<class T1, class T2>

float favg(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

int main()
{
    float a=favg(10,20);
    float b=favg(20,20);
    
    printf("the avg is %.0f\n",a);
    cout<<"the avg is"<<b<<endl;
    return 0;
}

