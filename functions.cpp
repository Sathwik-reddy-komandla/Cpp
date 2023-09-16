#include<iostream>

int f1(int,int);
int f2(int,int);


int main(){
    std::cout<< f1(8,6) <<std::endl;
    std::cout<< f2(10,5) <<std::endl;

    return 0;
}


int f1(int x,int y){
    return x+y;
}


int f2(int x,int y){
    return x-y;
}