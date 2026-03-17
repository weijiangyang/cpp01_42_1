#include "Zombie.hpp"

void randomChump(std::string name)
{
    // 声明一个指向 Zombie 对象的指针
    Zombie *z;

    // 调用之前定义的 newZombie 函数
    // 该函数在【堆】上创建对象并返回其地址
    z = newZombie(name);

    // 调用 Zombie 对象的成员函数 announce()
    // 因为 z 是指针，所以使用 '->' 符号来访问成员
    z->announce();

    // 【关键步骤】释放堆内存
    // 因为 newZombie 内部使用了 'new'，所以这里必须使用 'delete'
    // 这会触发 Zombie 的析构函数并回收内存
    delete z;

    // 函数结束，栈上的指针变量 z 消失
    // 由于执行了 delete，堆上的对象也已被销毁，没有内存泄漏
}