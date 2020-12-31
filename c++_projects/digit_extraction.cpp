#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
    int num,temp=0;
    std::cout<<"please input a positive integer number for digit extraction \t";

    std::cin >>num;
    while(num!=0) //digit extraction loop
    {
        temp=num%10;
        num/=10;}
    std::cout<<"the result of the extracted digits are "<<"\t"<<temp;
    return 0;
}
