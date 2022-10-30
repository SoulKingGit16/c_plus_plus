#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst) // CREATING A FUNCTION FOR PRINT CAUSE OF AVOID WRITTING COUT MULTIPLE TIMES.......
{
    list<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
        
    }
    cout<<endl;
}

int main()
{
    list<int> list1; // LIST OF 0 LENTH.............(THE LIST HAVE NO ELEMENTS THEREFORE NO VALUE )...........

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(1);
    list1.push_back(6);
    list1.push_back(8);
    display(list1);


    
    // list1.pop_front();//REMOVE ELEMENT FROM FRONT
    // list1.pop_back();//REMOVE ELEMENT FROM BACK
    // list1.remove(1);//REMOVE ELEMENT THE ELEMENT
    // display(list1);

    // //SORTING THE LIST
    // list1.sort();
    // display(list1);



    // list<int>::iterator iter;
    // iter = list1.begin(); // NOW THE ITER WILL POINT THE LIST1'S FRIST ELEMENT.....
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";



    list<int> list2(3); // EMPTY LIST SIZE 3.............(THE LIST HAVE ELEMENTS BUT NO VALUE)..........

    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 10; // THIS WILL SET THE FRIST ELEMENT VALUE
    iter++;
    *iter = 20;
    iter++;
    *iter = 30;
    iter++;
    display(list2);

   
    list1.sort();
    list2.sort();
    

    list1.merge(list2);
    cout<<"list 1 after merge ";
    display(list1);

    list1.reverse();//reverse a list
    display(list1);

    return 0;
}
