#include <iostream>
using namespace std;
int main(){
    long n,t,r,p=1;
    std::cout<<"Input a number";
               std::cin>>n;
               t=n;
               while(n>1){
                   r=n%2;
                   if(r==1){
                       p=0;
                       break;
                        }
                   n/=2;
               }
               if(p==1)
                   std::cout<<t<<" the given value is a power of 2";
                                 else {
                                     std::cout<<t<<" the given value is not a power of 2";
                                 }
        return 0;
}
