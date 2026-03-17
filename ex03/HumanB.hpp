#include "Weapon.hpp"

class HumanB
{
    private:
        // 核心考点：指针成员变量
        // 1. 指针可以初始化为 NULL (0)，表示 HumanB 开始时可以没有武器。
        // 2. 指针可以重新赋值，表示 HumanB 中途可以更换武器。
        // 3. 在使用前必须检查是否为 NULL，否则会发生段错误 (Segmentation Fault)。
        Weapon* _weapon;

        // 存储名字
        std::string _name;
    
    public:
        // 构造函数：只需接收名字
        // 与 HumanA 不同，HumanB 不需要（也不能）在构造时强制绑定引用
        HumanB(std::string name);

        // 析构函数
        ~HumanB();

        // 修改器 (Setter)：允许在对象创建后的任何时刻装备或更换武器
        // 接收的是指针，这与外部 new 的对象或取地址的对象相匹配
        void setWeapon(Weapon* weapon);

        // 攻击函数：内部逻辑需要判断 _weapon 是否存在
        void attack() const;
};