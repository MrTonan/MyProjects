#include <iostream>

int main()
{
    typedef unsigned short ushort;
    typedef unsigned int uint;

    uint money = 0;
    uint income = 0;
    ushort period = 0;
    ushort percent = 0;

    setlocale(LC_ALL, "Russian");

    std::cout << "�����: ";
    std::cin >> money;
    std::cout << "�����: ";
    std::cin >> income;
    std::cout << "������� �������: ";
    std::cin >> percent;
    std::cout << "�� ����� ������ ? [������]: ";
    std::cin >> period;

    for (ushort i = 1; i <= period; i++)
    {
        money += income;
        money = money + (money / 1200 * percent);
        if (i % 12 == 0)
        {
            std::cout << "� ���� ����: " << money << " | ����� �� ��������� �����: " << money / 1200 * percent << std::endl;
        }
        else
        {
            std::cout << money << std::endl;
        }
    }
}