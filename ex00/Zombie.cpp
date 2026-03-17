#include <iostream>
#include "Zombie.hpp"

#include <iostream>
#include "Zombie.hpp"

// 构造函数：当对象被创建时（无论是 new 还是直接声明）调用
Zombie::Zombie(std::string name)
{
    // 使用 this 指针区分成员变量 name 和参数 name
    this->name = name;
}

// 析构函数：当对象生命周期结束时自动调用
// 1. 对于栈对象：函数执行完毕遇到 '}' 时调用
// 2. 对于堆对象：当你执行 'delete ptr' 时调用
Zombie::~Zombie()
{
    // 在这里打印信息，可以帮你确认内存是否真的被释放了
    std::cout << this->name << " is destroyed!" << std::endl;
}

// 成员函数：打印僵尸的自我介绍
// 'const' 表示该函数不会修改类中的任何成员变量
void Zombie::announce() const
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}