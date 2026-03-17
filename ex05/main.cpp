#include "Harl.hpp"

int main(int argc, char **argv)
{
    // 1. 实例化 Harl 对象
    Harl harl;

    // 2. 参数检查：程序需要一个等级参数（如 ./harl DEBUG）
    if (argc != 2)
    {
        std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (1);
    }

    // 3. 将命令行接收到的字符串（argv[1]）传给 complain
    // 内部会通过你写的函数指针数组找到对应的私有成员函数
    harl.complain(argv[1]);

    return (0);
}