#ifndef ZOMBIE_HPP        // Header Guard：防止头文件被多次包含导致重定义错误
# define ZOMBIE_HPP 

#include <string>         // 引入 string 类，用于存储僵尸的名字

class Zombie
{
    private:
        std::string name; // 私有成员变量：外部无法直接访问或修改，体现了“封装”

    public:
        // --- 构造与析构 ---
        
        // 默认构造函数：不带参数。
        // 在调用 'new Zombie[N]' (zombieHorde) 时，系统必须调用它来初始化数组
        Zombie(void);

        // 有参构造函数：直接在创建时赋予名字
        Zombie(std::string name);

        // 析构函数：对象销毁时自动调用，通常在这里打印 "Zombie is destroyed" 
        // 以便配合 Valgrind 确认内存是否已释放
        ~Zombie();

        // --- Getter & Setter (访问器与修改器) ---
        
        // 设置名字：因为 name 是 private，所以在 zombieHorde 批量创建后需要此函数赋值
        void setName(std::string name);

        // 获取名字：const 表示该函数是“只读”的，不会修改对象状态
        std::string getName(void) const;

        // --- 行为函数 ---
        
        // 打印僵尸的标志性台词
        void announce(void) const;

        // 注意：在 42 项目要求中，randomChump 通常是全局函数而非成员函数
        // 如果作为成员函数，它的逻辑通常是创建一个临时的自己
        void randomChump(void);
};

// --- 全局函数声明 (不属于 Zombie 类，但在头文件中暴露给外部使用) ---

/*
 * zombieHorde (僵尸军团):
 * 1. 在堆上分配 N 个 Zombie 对象的连续内存 (new Zombie[N])
 * 2. 循环调用 setName 为每个僵尸命名
 * 3. 返回指向数组首地址的指针
 */
Zombie *zombieHorde(int N, std::string name);

#endif
