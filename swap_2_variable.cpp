#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a=5,b=10;
    cout<<a<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
    return 0;
}
