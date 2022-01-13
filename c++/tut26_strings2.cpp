// various functions of string
#include <iostream>
#include<string>
using namespace std;

int main(){
    // for multiple printing single letter
    
    string str( 5 ,'d');
    cout<<str<<endl;

    // for input of entire line

    string str1;
    getline(cin, str1);
    cout<<str1;

    //appending/adding strings

    string s1="fam", s2="ily";
    s1.append(s2);
    cout <<s1<<endl;
    //cout<<s1+s2;(direct methode)


    // printing particular element of string


    string s3="name";
    cout<<s3[2]<<endl;

    // clear function

    string abc="ajskdgwte";
    abc.clear();
    cout<<abc<<endl;


    // compare & empty function

    string s4="abc";
    string s5="xyz";
    cout<<s4.compare(s5)<<endl;

    if(abc.empty()){
        cout<<"string is empty"<<endl;
    }

    // erase and find function
    string s6="famakkily";
    cout<<s6.find("akk")<<endl;
    s6.erase(3,3);
    cout<<s6<<endl;


    //insert & length/size function

    string s7="heart";
    s7.insert(5,"broken");
    cout<<s7<<endl;
    cout<<s7.size()<<" "<<s7.length()<<endl;

    // substring function

    string s8="project";
    string s= s8.substr(0,3);   //(element position, length)
    cout<<s<<endl;

    // string to integer function

    string s9="874";
    int x= stoi(s9);
    cout<<x+2<<endl;

    // integer to string
    int y= 857;
    cout<< to_string(y) + "2"<<endl;

return 0;
}