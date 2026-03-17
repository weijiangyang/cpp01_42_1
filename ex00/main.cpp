#include <iostream>
#include <string>
#include <sstream> // 必须包含此头文件以使用 stringstream
#include "Zombie.hpp"

int main()
{
    int i = 0;
    
    // 循环 10 次，生成 10 个不同的名字并传入 randomChump
    while (i < 10)
    {
        // 声明一个字符串用于存储最终的名字（如 "Zombie0"）
        std::string name;

        // 使用 stringstream 处理流式输入，方便将整数 i 转换为字符串
        std::stringstream ss;
        
        // 将整数 i 放入流中
        ss << i; 
        
        // 拼接字符串："Zombie" + 转换后的数字字符串
        // ss.str() 会返回 stringstream 内部存储的 string 对象
        name = "Zombie" + ss.str();
        
        /*
         * 调用 randomChump 函数：
         * 1. 它是项目要求的一部分，通常在栈上创建 Zombie 对象。
         * 2. 注意：由于 name 和 ss 是在 while 循环内部定义的，
         * 它们在每次循环结束（遇到 '}'）时都会被销毁并重新构造。
         */
        randomChump(name);

        i++; // 计数器递增
    }
    
    return (0); // 程序正常结束
}