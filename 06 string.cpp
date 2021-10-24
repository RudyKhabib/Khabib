#include <iostream>
#include <string>
#include<Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
    std::string str;
	std::cout<<"¬ведите строку\n";
    std::cin >> str;
    char* array=new char[str.length()];
    for (unsigned int i = 0; i < str.length(); i++)
    {
        array[i] = str[i];
    }
    for (unsigned int i = 0; i < str.length(); i++)
    {
        std::cout << array[i];

    }
    std::cout << std::endl;
}