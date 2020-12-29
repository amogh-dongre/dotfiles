#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
    int n,a=0,i,b=1,c;
    std::cout<<"Enter the number";
               std::cin >> n;
               std::cout<<" the fibonnaci series is: "<<a<<" "<<b;
            for (i = 3; i <=n; i++) {
                c=a+b;
                std::cout<<" "<<c<<" ";
                a=b;
                b=c;
            }
    return 0;
}
