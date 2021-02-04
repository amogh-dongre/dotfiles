#include <iostream.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    clrsrc();
    int num,sq=0,cu=0;
    char ch;
    cout <<"kindly enter a number: ";
    cin>> ch>>num;
    if(ch=='s')
    cout<<"the square of the number is: "<<num*num<<":)";
    elseif(ch='c')
    cout<<"the cube of the number "<<num<<"is:"<<num*num*num;
    else 
    cout <<"sorry you have entered an incorrect value ):";
    grtch();
        return 0;
}
