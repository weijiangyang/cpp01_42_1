#include "Weapon.hpp"

class HumanA
{
    private:
        // 核心考点：引用成员变量
        // 1. 引用必须在构造函数的【初始化列表】中绑定。
        // 2. 一旦绑定，HumanA 就永远拿着这把武器（不可更改指向）。
        // 3. 这意味着 HumanA 必须始终拥有一把武器。
        Weapon&     _weapon;

        // 存储名字
        std::string _name;
    
    public:
        // 构造函数：接收名字和武器引用
        // 因为 _weapon 是引用，所以这个参数也必须是引用
        HumanA(std::string name, Weapon& weapon);

        // 析构函数
        ~HumanA();

        // 攻击函数：使用 const 修饰，表示攻击动作不会修改 HumanA 本身的状态
        void attack() const;
};