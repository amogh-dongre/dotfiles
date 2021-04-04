#include <iostream>
int main() {
    int i,n,f=1;
    std::cout<<"Enter the number \n";
               std::cin >>n ;
               if(n>=0){
                   for (i = 1; i <=n; i++) {
                       f*=i;
                 std::cout<<"\n Factorial of "<<n<<" is = "<<f;
                   }
                }
          else {
              std::cout<<"Invalid number";
          }                 
    return 0;
}

