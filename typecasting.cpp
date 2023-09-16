#include<iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){

    // string s="1023 ";
    // int i=stoi(s);
    // cout<< i+100 << endl;

    // float f=10.78;
    // int i=f;
    // cout<<i<<endl;
    // cout<< int(f)+90<<endl;
    // cout<< f+ 90<<endl;
    // cout<< 12/11 <<endl;
    int x=10;
    std::string s1="This number is: ";
    std::string s2=std::to_string(x);

    cout<< s1 + s2 <<endl;

    return 0;

}