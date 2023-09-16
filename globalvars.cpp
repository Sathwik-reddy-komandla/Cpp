#include<iostream>
    int a=100;


int myf(){
    std::cout<<"From myf"<<std::endl;
    std::cout<<a<<std::endl;

    return 0;
}

int main(){
    std::cout<<"From Main"<<std::endl;
    std::cout<<a<<std::endl;
    a+=10;
    myf();

    return 0;
}

