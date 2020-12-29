#include <iostream>
using namespace std;
int main() {
    int num,temp=0,sum=0;
    std::cout<<"Kindly enter the value of the number to calculate its digit sum :)";
               cin>>num;
               int num_copy=num;
               while (num!=0) {
                   temp=num%10;
                   sum+=temp;
                   num/=10;
               }
               std::cout<<"the value of the sum of digit of input "<<num_copy<<"is: "<<sum<<":)";
    return 0;
}
