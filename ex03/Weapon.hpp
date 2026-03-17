#ifndef WEAPON_H        // Header Guard：防止头文件被多次包含
# define WEAPON_H 

#include <string>       // 引入 string 库，用于存储武器类型

class Weapon
{
    private:
        // 私有属性：武器的类型（例如 "crude spiked club"）
        // 封装在 private 中，防止外部直接修改
        std::string type;
    
    public:
        // 构造函数：在创建武器对象时，必须初始化武器类型
        Weapon(std::string weaponType);

        // 析构函数：由于没有动态内存分配（new），通常只需打印调试信息或保持为空
        ~Weapon();

        // 访问器 (Getter)：返回武器类型的常量引用或字符串
        // 使用 const 修饰，保证该函数不会修改 Weapon 对象的状态
        std::string getType() const;

        // 修改器 (Setter)：允许在武器创建后更改其类型
        // 这在后续练习中非常重要，因为我们要观察人类手中的武器是否同步更新
        void setType(std::string typeName);
};

#endif

