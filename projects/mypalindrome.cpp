#include <iostream>
using namespace std;
int main() {
    int num,rev=0;
    std::cout<<"Enter the number to check whether its a palindrome or not";
    std::cin >> num;
   int num_copy=num;
   while (num!=0) {
       int temp=num%10;
       rev =(rev*10)+temp;
       num/=10;
    }
   if (num_copy==rev) {
       std::cout<<"the number you entered "<<num_copy<<" is a palindrome :)";
           
           }
    else
        
       std::cout<<"the number you entered "<<num_copy<<" is not a palindrome :(";
           
    return 0;
}

