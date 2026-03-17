#include <iostream>
#include "Zombie.hpp"

// 默认构造函数：当执行 new Zombie[N] 时，编译器会调用这个
// 注意：你注释掉了初始化，建议给一个默认值，防止打印空字符串
Zombie::Zombie(void)
{
    this->name = "Unnamed"; 
}

// 有参构造函数：使用了【初始化列表】 (Initialization List)
// : name(name) 比在 {} 里赋值效率更高，因为它直接初始化成员，而不是先默认构造再赋值
Zombie::Zombie(std::string name) : name(name)
{
}

// 析构函数：42 项目的灵魂，用来验证内存是否被 delete
Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed!" << std::endl;
}

// 修改器 (Setter)
void Zombie::setName(std::string name)
{
    this->name = name;
}

// 访问器 (Getter)
std::string Zombie::getName(void) const
{
    return this->name;
}

// 核心行为：展示僵尸活着（在堆或栈上）
void Zombie::announce() const
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

// 成员函数版的 randomChump
// 注意：通常 42 要求 randomChump 是一个【全局函数】来演示“栈分配”
void Zombie::randomChump()
{
    this->announce();
}