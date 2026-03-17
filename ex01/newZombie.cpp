#include "Zombie.hpp"

// 函数返回一个指向 Zombie 对象的指针
Zombie *newZombie(std::string name)
{
    // 使用关键字 'new' 在【堆内存 (Heap)】上创建一个 Zombie 对象
    // 这会调用你写的有参构造函数 Zombie(std::string name)
    Zombie *z = new Zombie(name);

    // 返回这个对象的地址
    // 注意：虽然指针变量 z 本身是在栈上的局部变量，
    // 但它指向的内存块在堆上，不会因为函数结束而消失。
    return (z);
}