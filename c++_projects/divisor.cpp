#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
    int num,i,count=0;
    std::cout<<"Enter the number";
               std::cin >>num;
               for (i = 1; i <=num; i++) {
                   if (num%i==0) {
                       count+=1;
                       std::cout<<"the number of divisors and the are \n"<<"\t"<<count<<i;
                                }
                                         }
    return 0;
}
