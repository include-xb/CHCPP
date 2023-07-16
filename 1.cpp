#include <iostream>

using namespace std;

int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int i = max(45, 74);
    cout << i << endl;
    return 0;
}
