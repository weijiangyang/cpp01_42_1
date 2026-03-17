#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

/*
 * 构造函数：
 * 由于 _weapon 是引用类型，它必须在进入构造函数大括号之前完成初始化。
 * 初始化列表 : _weapon(weapon), _name(name) 直接将外部传入的引用绑定到成员变量上。
 */
HumanA::HumanA(std::string name, Weapon& weapon)
    :  _weapon(weapon), _name(name)
{
    // 这里不需要写 this->_weapon = weapon; 因为引用一旦绑定就不能更改赋值
}

// 析构函数：打印信息以便观察 HumanA 对象的销毁时机
HumanA::~HumanA()
{
    std::cout << this->_name << " (HumanA) is being destroyed." << std::endl;
}

// 攻击函数：
// 因为 _weapon 是引用，所以可以像使用普通对象一样直接通过 '.' 或通过指针样式的 '->' 调用 getType()
void HumanA::attack() const
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}