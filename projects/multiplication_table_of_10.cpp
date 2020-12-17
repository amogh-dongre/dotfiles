#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
    int n,i=1;
    std::cin >> n;
    do
    {
        cout<<n;
        n*=i;
        i++;
    }while (i<=10);
    return 0;
}
