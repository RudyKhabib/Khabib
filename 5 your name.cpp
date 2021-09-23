#include <iostream>
#include <string>
#include<Windows.h>


int main()
{
   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string name="";
    std::cout << "Введите ваше имя"<<std::endl;
    std::cin >> name;
    std::cout << "Привет, " << name <<  std::endl;

}