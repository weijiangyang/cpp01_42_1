#include "Weapon.hpp"
#include <iostream>

// 构造函数：初始化武器类型
// 注意：虽然 this->type = weaponType 可行，但 C++ 更推荐使用初始化列表 : type(weaponType)
Weapon::Weapon(std::string weaponType)
{
    this->type = weaponType;
}

// 析构函数：在武器对象销毁时被调用
// 在这里打印信息可以帮助你观察 HumanA 和 HumanB 对象的生命周期
Weapon::~Weapon()
{
    // 注意：这里建议在 "is" 前面加个空格，输出会更美观
    std::cout << this->getType() << " is destroyed." << std::endl;
}

// 访问器 (Getter)：返回当前武器的类型字符串
// const 关键字确保了调用此函数不会修改武器的任何属性
std::string Weapon::getType() const
{
    return this->type;
}

// 修改器 (Setter)：允许在程序运行中更改武器的类型
// 这是练习的核心：当武器类型改变时，持有该武器引用的 HumanA 会立即同步看到新类型
void Weapon::setType(std::string typeName)
{
    this->type = typeName;
}