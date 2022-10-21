#include<iostream>
#include<vector>//important thing to add.....
using namespace std;

// int main()
// {
//     vector<int>vec1;
                        // DECLEAR AN INT TYPE VECTOR WHICH'S NAME IS vec1;


//     return 0;
// }

void display(vector<int> &v)//TAKING A REFFERENCE IN V OF INT VECTOR DATA TYPE  
{
    for (int i = 0; i < v.size(); i++)//................WE CAN USE .SIZE OPERATOR TO GET THE SIZE
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    vector<int>vec1;// zero lenth integer vector
    
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);// PUSH_BACK MODIFIER ADDS THE ELEMENTS AT THE END 
    }
    // vec1.pop_back();  // POP_BACK DELETE THE LAST ELEMENT 
     display(vec1); 


     vector<int> :: iterator iter = vec1.begin();//METHOD OF USING ITERATOR ...& MY ITERATOR NAME IS 'ITER"
     //vec1.insert(iter,566);//THIS WILL INSERT '566' AT THE FRIST OF THE ELEMENTS....
     //vec1.insert(iter+1,566);//THIS WILL INSERT '566' AT THE 2ND OF THE ELEMENTS....
     //vec1.insert(iter+2,566);//THIS WILL INSERT '566' AT THE 3RD OF THE ELEMENTS....
     vec1.insert(iter,50,566);//THIS WILL INSERT 50_ '566' AT THE FRIST OF THE ELEMENTS....


     display(vec1);
    return 0;
}

