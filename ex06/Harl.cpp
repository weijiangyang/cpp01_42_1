#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "harl is created." << std::endl;
}

Harl::~Harl()
{
	std::cout << "harl is destroyed." << std::endl;
}

void Harl::debug(void) const
{
	std::cout << "DEBUG: I love having extra bacon for my burger!" << std::endl;
}

void Harl::info(void) const
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money!" << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "WARNING: I think I deserve extra bacon for free!" << std::endl;
}

void Harl::error(void) const
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level) const
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    // 1. 寻找匹配的等级索引
    while (i < 4)
    {
        if (level == levels[i])
            break; // 找到后立即跳出循环，i 即为对应编号
        i++;
    }

    // 2. 根据索引进行过滤
    switch (i)
    {
        case 0: // 如果是 DEBUG
            std::cout << "[ DEBUG ]" << std::endl;
            this->debug();
            // 这里故意不写 break，程序会继续执行下一行 (INFO)
        case 1: // 如果是 INFO
            std::cout << "[ INFO ]" << std::endl;
            this->info();
        case 2: // 如果是 WARNING
            std::cout << "[ WARNING ]" << std::endl;
            this->warning();
        case 3: // 如果是 ERROR
            std::cout << "[ ERROR ]" << std::endl;
            this->error();
            break; // ERROR 是最高级，执行完后彻底退出 switch
        default:
            // 处理非法输入或未定义等级
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}