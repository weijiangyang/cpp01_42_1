#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "harl is created." << std::endl;
}

Harl::~Harl()
{
    std::cout << "harl is destroyed." << std::endl;
}

// --- 私有抱怨等级实现 ---

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

// --- 核心调度逻辑 ---

void Harl::complain(std::string level) const
{
    // 1. 定义对应的字符串数组
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    // 2. 定义函数指针数组，直接指向私有成员函数
    // 注意：这里的类型必须与头文件中的声明（包括 const）完全匹配
    void (Harl::*funcs[4])(void) const = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error
    };

    int i = 0;
    // 3. 遍历并匹配 level 字符串
    while (i < 4)
    {
        if (level == levels[i])
        {
            // 4. 关键：通过成员函数指针调用。'*' 是解引用指针，'()' 是执行函数
            (this->*funcs[i])();
            return ;
        }
        i++;        
    }
    
    // 如果没有匹配的等级，输出错误信息
    std::cout << "Unknown level: [" << level << "]" << std::endl;
}
