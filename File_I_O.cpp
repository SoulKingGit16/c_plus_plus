#include <iostream>
#include <fstream>

using namespace std;

int main()

{

    // connecting our file with hout stream
    ofstream out("this.txt");

    // creating a name string variable and filling it with string entered by the user
    string name;

    cout << "Enter your name: ";
    cin >> name;

    // writing a string to the file

    out << name + " is my name"; // also we can do this

    // disconnecting our file
    out.close();

    // connecting our file with hin stream
    ifstream in("this.txt");

    // creating a content string variable and filling it with string present there in the text file
    string content;
    in >> content;
    
    cout << "The content of the file is: " << content;

    // disconnecting our file
    in.close();

    return 0;
}
