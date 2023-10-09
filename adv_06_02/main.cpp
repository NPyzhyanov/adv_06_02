#include <iostream>
#include <string>
#include <set>

int main()
{
    std::cout << "[IN]:" << std::endl;
    
    std::cout << "(size)" << std::endl;
    std::string user_input_size = "";
    std::cin >> user_input_size;
    int input_size = std::stoi(user_input_size);
    if (input_size < 1)
    {
        std::cout << "Wrong size!\n";
        return 1;
    }
    
    std::set<int> data;
    std::cout << "(elements)" << std::endl;
    for (int i = 0; i < input_size; i++)
    {
        std::string user_input = "";
        std::cin >> user_input;
        data.insert(std::stoi(user_input));
    }
    
    std::cout << "[OUT]:" << std::endl;
    auto it = data.end();
    while (it != data.begin())
    {
        it--;
        std::cout << *it << std::endl;
    }
    
    return 0;
}
