#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");
    int n,x,max;
int main()
{
    f>>n;
    while(f>>x)
    {
        if(x>=max)
            max=x;
        cout<<max<<" ";
    }
    f.close();
    return 0;
}
