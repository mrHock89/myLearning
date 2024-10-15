#include <iostream>
#include<vector>

int main()
{
    std::vector<int> a = {1, 2, 3, 4, 5}; 
    std::cout << *a.begin() << std::endl;
    std::cout << *a.end() << std::endl;
    return 0;
}