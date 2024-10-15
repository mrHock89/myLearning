#include <iostream>
#include <climits> // this heade is used to calculate min and max method
using namespace std;
int main()
{
    int num[] = {5, 15, 22, 1, -15, -24};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        smallest = min(num[i], smallest);
        largest = max(num[i], largest);
    }
    cout << smallest << endl;
    cout << "index of smallest value is : " ;
    cout << largest << endl;
    return 0;
}
