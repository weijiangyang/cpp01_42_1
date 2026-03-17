#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

// 构造函数：初始化列表
// 正确：将 _weapon 初始化为 NULL，因为 HumanB 出生时可能没有武器
HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
}

// 析构函数
// ⚠️ 潜在危险：如果 HumanB 死的时候手里没武器（_weapon 为 NULL）
// 调用 this->_weapon->getType() 会导致段错误 (Segmentation Fault)
HumanB::~HumanB()
{
    if (this->_weapon)
        std::cout << this->_name << " dropped " << this->_weapon->getType() << std::endl;
}

// 修改器：装备或更换武器
void HumanB::setWeapon(Weapon* weapon)
{
    this->_weapon = weapon;
}

// 攻击函数
// ⚠️ 潜在危险：如果 main 函数里先调用了 attack() 后调用 setWeapon()
// 程序会直接崩溃。必须进行判空检查。
void HumanB::attack() const
{
    if (this->_weapon)
    {
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    }
    else
    {
        std::cout << this->_name << " has no weapon and can't attack!" << std::endl;
    }
}