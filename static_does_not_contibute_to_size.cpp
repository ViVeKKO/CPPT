#include <iostream>
class test
{
    static int i;
    int j;
    int k;
};
int test::i=10000;
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout<<sizeof(test);
    
    return 0;
}
