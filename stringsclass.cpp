#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main () {

    //two ways to declare a string 
    string s1("Hi");

    string s2="Hi again";

    // a copy constructor

    string s3(s2);

    string s4(s3);

    char a[]={'a','b','c','d','\0'};

    string s5(a);

    cout<< s1 <<endl;
    cout<< s2 <<endl;
    cout<< s3 <<endl;
    cout<< s4 <<endl;
    cout<< s5 <<endl;

    //to check whether a string is empty,we use stringname.empty() function which returns a boolean value

    if(s1.empty()){
        cout<<"S1 is empty"<<endl;
    }
    else{
        cout<<"S1 is not empty"<<endl;
    }
    //if we want to add something to the string then we can use append 
    //the format is stringname.append("string to be appended")

    s2.append(s1);
    cout<< s2 <<endl;
    //appending can also be done by increment assignment operator

    s3+= s2;
    cout<<s3 <<endl;
    //so as an alternate for strlen ,I will use stringname.length() to get over the disparity of pointer as an input in case of the former

    cout<< s3.length()<<endl;
    // a way to empty the string is by stringname.clear() function

    s3.clear();
    cout<<s3.length()<<endl;

    //find a word in the string 
    cout<< s1.find("Hi") <<endl;
    int idx = s1.find("Hi");
    //the erase function has the format of stringname.erase(index at which u want to start erasing,length u want to erase)

    s1.erase(idx,1);
    cout<<s1<<endl;


}
