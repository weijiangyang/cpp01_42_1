#include "Harl.hpp"

int main(int argc, char **argv)
{
    // 1. 实例化 Harl 对象
    Harl harl;

    // 2. 参数检查：程序必须接收且只能接收一个等级参数
    if (argc != 2)
    {
        // 如果参数个数不对，打印用法提示并退出
        std::cout << "Usage: ./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (1);
    }

    // 3. 调用 complain 函数
    // 此时内部的 switch 会根据 argv[1] 决定从哪个等级开始“向下渗透”打印
    harl.complain(argv[1]);

    return (0);
}