#include "Zombie.hpp"

int main()
{
    // 声明一个指向 Zombie 的指针，用于接收数组的首地址
    Zombie *z;
    
    // 调用 zombieHorde 在堆上分配 10 个 Zombie 的空间
    // 此时堆内存中会有 10 个连续的对象
    z = zombieHorde(10, "zombie");

    int i = 0;
    // 遍历数组并调用成员函数
    while (i < 10)
    {
        // 使用下标访问数组元素并执行 announce
        z[i].announce();
        i++;
    }

    /* * 【关键点】释放内存
     * 因为 zombieHorde 内部使用了 'new[]'，所以这里必须使用 'delete []'。
     * 1. 它会调用这 10 个 Zombie 对象的析构函数（打印 "is destroyed!"）。
     * 2. 然后回收整块堆内存。
     */
    delete [] z;

    return (0);
}
