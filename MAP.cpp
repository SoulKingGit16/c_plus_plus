#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string,int>marksMap;
    marksMap["soulking"]=100;
    marksMap["Tyson"]=50;


    //INSERT METHOD IN MAP
    marksMap.insert({{"sangita"s,500},{"queen",400}});


    map<string,int> :: iterator itr;

    for (itr=marksMap.begin();itr!=marksMap.end();itr++)
    {
        cout<<(*itr).first<<"-->"<<(*itr).second<<endl;
    }


// //(*itr).first    &   (*itr).second---------->(*itr)access the value or dereference it....and :".second" access the
//                                               //marksMap's second element which is '100 & 50' right now"           
//         |            
//         |            
//         |            
//         |            
//         |            
// //(*itr)access the value or
// //dereference it....and ".first" access the marksMap's frist element which is 'soulking' right now"


//FEW ANOTHER METHODS

cout<<"size is --> "<<marksMap.size()<<endl;

cout<<"maxsize is --> "<<marksMap.max_size()<<endl;

cout<<" IS THIS EMPTY ?--> "<<marksMap.empty()<<endl;//--------->THIS WILL RETURN 0 CAUSE THE MARKSMAP HAS ELEMENTS....
//...........................................//IF NOT THIS WILL RETURN US 1;

    return 0;
    


}


