#include <iostream>
#include <vector> // header file to use vector

int main()
{
    std::vector<int> myVEctor = {1, 2, 3, 4, 5};
    // Using simple for-loop
    // for(int i = 0; i < 5; i++){
    // std::cout << myVEctor[i] << " " ;
    // }

    // Using foreach loop
    for (int i : myVEctor)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}