#include <iostream>
#include <vector> // header file to use vector

int main()
{
    std::vector<int> myVEctor = {2, 42, 30, 21, 5};

    // // size function
    // std::cout << myVEctor.size() << std::endl;
    // std::cout << myVEctor.at(3) << std::endl;

    // // Pusing element to the vector
    // myVEctor.push_back(34);
    // myVEctor.push_back(4);
    // myVEctor.push_back(44);

    // for (int i : myVEctor)
    // {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;
    // // Pop elements from the array
    // myVEctor.pop_back();
    // myVEctor.pop_back();
    // myVEctor.pop_back();
    // // After pop_back the element
    // for (int i : myVEctor)
    // {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    // std::cout << myVEctor.front() << std::endl;
    // std::cout << myVEctor.back() << std::endl;
    // std::cout << myVEctor.at(3) << std::endl;

    // std::cout << myVEctor.size() << std::endl;
    // std::cout << myVEctor.capacity() << std::endl;

    // Push and Pop
    std::cout << myVEctor.size() << std::endl;
    std::cout << myVEctor.capacity() << std::endl;

    myVEctor.push_back(31);
    std::cout << myVEctor.size() << std::endl;
    std::cout << myVEctor.capacity() << std::endl;

    myVEctor.push_back(33);
    myVEctor.push_back(34);
    myVEctor.push_back(39);
    myVEctor.push_back(36);
    myVEctor.push_back(37);
    std::cout << myVEctor.size() << std::endl;
    std::cout << myVEctor.capacity() << std::endl;
    myVEctor.pop_back();
    myVEctor.pop_back();
    myVEctor.pop_back();
    myVEctor.pop_back();
    myVEctor.pop_back();
    myVEctor.pop_back();
    std::cout << myVEctor.size() << std::endl;
    std::cout << myVEctor.capacity() << std::endl;

    return 0;
}