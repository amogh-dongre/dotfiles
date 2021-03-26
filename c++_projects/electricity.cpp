#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int u;
    double amt;
    std::cout<<"Enter the number of units consumed";
    std::cin>>u;
    if (u<30) {
        amt=u*3.50;
    }
    else if (u<50){
        amt=29*3.50+(u-29)*4.25;
    }
    else if(u<100) {
        amt=29*3.50+20*4.25+(u-49)*5.25;
    }
    else  {
        amt=29*3.50+20*4.25+50*5.25+(u-99)*5.85;
    }
    cout<<setprecision(3)<<"\n Bill amount ="<<amt;
    return 0;
}
