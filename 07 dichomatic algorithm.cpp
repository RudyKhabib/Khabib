#include <iostream>
#include<Windows.h>

int main()
{
    int answer = 0;
    int max_number = 100, min_number=0;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "�������� ����� �� 1 �� 100\n";
    while (answer != 3)
    {
        std::cout << "������ "<< (max_number + min_number) / 2 << "? (1 ��, 2 ���, 3 �����)"<< std::endl;
        std::cin >> answer;
        if (answer == 1)
        {
            min_number = (max_number + min_number) / 2;
        }
        else if (answer == 2) {
            max_number = (max_number + min_number) / 2;
        }
    }
    std::cout << "���� ����� " << (max_number + min_number) / 2 << std::endl;
}