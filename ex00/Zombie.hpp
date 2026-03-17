#ifndef ZOMBIE_HPP    // 如果没有定义 ZOMBIE_HPP
# define ZOMBIE_HPP   // 那么定义它

#include <string>     // 包含字符串库，因为成员变量用到了 std::string

class Zombie
{
    private:
        // 成员变量放在 private，符合封装原则 (Encapsulation)
        std::string name;
    
    public:
        // 构造函数：初始化僵尸
        Zombie(std::string name);
        
        // 析构函数：释放资源或打印销毁信息
        ~Zombie();
        
        // 成员函数：const 表示该函数不会修改对象的任何状态
        void announce() const;
};

// --- 非成员函数 (Non-member functions) ---

// 在堆上创建对象，需要调用者手动 delete
Zombie *newZombie(std::string name);

// 在栈上创建临时对象，函数结束时自动销毁
void    randomChump(std::string name);

#endif // 结束防重复包含保护