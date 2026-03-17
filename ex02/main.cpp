#include <iostream>
#include <string>

int main()
{
    // 1. 定义一个普通的字符串变量
    std::string str = "HI THIS IS BRAIN";

    // 2. 定义一个指向 string 的指针 (Pointer)
    // 使用 & 符号获取变量 str 的内存地址，并赋值给指针 strPTR
    std::string *strPTR = &str;

    // 3. 定义一个 string 的引用 (Reference)
    // strREF 成为变量 str 的一个“别名”，它在逻辑上与 str 是同一个东西
    std::string &strREF = str;

    // --- 打印内存地址 (Address) ---

    // 打印变量 str 在内存中的实际地址
    std::cout << "Memory address of str: " << &str << std::endl;

    // 打印指针变量 strPTR 所存储的内容（即它指向的地址，应与上面一致）
    std::cout << "Memory address held by stringPTR: " << strPTR << std::endl;

    // 打印引用 strREF 的地址（引用即原变量，所以地址也必须一致）
    std::cout << "Memory address held by stringREF: " << &strREF << std::endl;
    
    std::cout << std::endl;

    // --- 打印变量值 (Value) ---

    // 直接输出变量 str 的内容
    std::cout << "Value of str: " << str << std::endl;

    // 使用 '*' 符号对指针进行“解引用” (Dereference)，获取该地址存储的值
    std::cout << "Value pointed to by stringPTR: " << *strPTR << std::endl;

    // 像使用普通变量一样使用引用，直接获取其值
    std::cout << "Value pointed to by stringREF: "<< strREF << std::endl;

    return (0);
}