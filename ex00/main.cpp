#include "Zombie.hpp"
#include <sstream>

int main()
{
    int i = 0;
    
    // --- 第一部分：演示栈内存（Stack）的自动管理 ---
    // 这里循环调用 randomChump，该函数通常在内部创建一个局部对象。
    // 当 randomChump 函数执行结束时，局部 Zombie 对象会自动析构。
    while (i < 10)
    {
        std::string name;
        std::stringstream ss;
        ss << i;
        name = "Zombie" + ss.str();
        
        // 调用 randomChump：创建即销毁（随函数作用域结束）
        randomChump(name);

        i++;
    }

    // --- 第二部分：演示堆内存（Heap）的手动管理 ---
    i = 0;
    // 分配一个指针数组，用于存放 10 个指向 Zombie 对象的指针
    Zombie **zombieOnHeap = new Zombie*[10];

    while (i < 10)
    {
        std::string name;
        std::stringstream ss;
        ss << i;
        name = "Zombie" + ss.str();
        
        // 使用 newZombie 在堆上分配内存
        // 这里的对象在手动执行 delete 之前会一直存在
        zombieOnHeap[i] = newZombie(name);
        
        // 调用成员函数
        zombieOnHeap[i]->announce();
        i++;
    }

    // --- 第三部分：清理堆内存 ---
    i = 0;
    while (i < 10)
    {
        // 逐个释放堆上的 Zombie 对象，触发它们的析构函数
        delete zombieOnHeap[i];
        i++;
    }
    
    // 释放最开始分配的指针数组内存
    delete [] zombieOnHeap;

    return (0);
}