#include "Zombie.hpp"

// 函数返回一个指向 Zombie 对象的指针
Zombie *newZombie(std::string name)
{
    // 使用关键字 'new' 在【堆内存 (Heap)】上创建一个 Zombie 对象
    // 这会调用 Zombie 的构造函数，并将 name 传进去
    Zombie *z = new Zombie(name);

    // 返回指向该堆内存地址的指针
    // 注意：函数结束时，指针变量 z 本身（栈上）会消失，
    // 但它指向的堆内存（Zombie 对象）依然存在。
    return (z);
}