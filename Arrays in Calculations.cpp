#include <iostream>
using namespace std;
int main()
{
    int ham[5] = {1,2,3,4,5};
    int sum = 0;
    for(int x = 0;x<5;x++){
        sum += ham[x];
        cout << sum << endl;
    }
}
