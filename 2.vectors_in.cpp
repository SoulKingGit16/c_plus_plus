#include<iostream>
#include<vector>//important thing to add.....
using namespace std;

template<class T>
void display(vector<T> &v){
    cout<<"displaing the vector ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    vector<int> vec1; //zero length integer vector

    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 
    // display(vec1);
    vec2.push_back(65);//OR vec2.push_back('A');
    display(vec2);
    display(vec3);
    display(vec4);//THIS WILL PRINT 3.. 6TIMES
    cout<<vec4.size()<<endl;//THIS WILL RETURN OR SHOW US THE SIZE OF VEC4 WHICH IS 6 RIGHT NOW 
    return 0;
}

 