#include <iostream>
using namespace std;
void printarray(int thearray[], int sizeofarray);
int main()
{
    int ham[5] = {0,1,2,3,4};
    printarray(ham, 5);
}
void printarray(int thearray[], int sizeofarray){
    for(int x = 0; x < sizeofarray; x++){
    cout << thearray[x] << endl;}
}
