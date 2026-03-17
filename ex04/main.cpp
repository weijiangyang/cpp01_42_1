#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    // 1. 参数检查：必须提供 文件名、被替换词(s1)、替换词(s2)
    if (argc != 4)
    {
        std::cout << "Usage: ./program filename s1 s2" << std::endl;
        return (1);
    }
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // 2. 边缘情况处理：s1 为空会导致死循环或逻辑错误
    if (s1.empty())
    {
        std::cout << "Error: s1 cannot be empty" << std::endl;
        return (1);
    }

    // 3. 打开输入文件 (.c_str() 是为了兼容 C++98 的 std::ifstream)
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cout << "Error: cannot open file" << std::endl;
        return 1;
    }

    // 4. 创建输出文件 (.replace 后缀)
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cout << "Error: cannot create output file" << std::endl;
        return 1;
    }

    std::string line;
    // 5. 逐行读取文件内容
    while(std::getline(infile, line))
    {
        size_t pos = 0;

        // 6. 字符串替换逻辑
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            // 这里你使用了 erase + insert，这是可行的
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            // 移动 pos 避免重复替换 s2 内部包含 s1 的情况（导致死循环）
            pos += s2.length();
        }
        
        // ⚠️ BUG 警告：这里你写了两遍写入操作
        // outfile << line;        <-- 第一遍（没有换行）
        // outfile << line << std::endl; <-- 第二遍（有换行）
        // 结果会导致输出文件里每一行都变成了“重复内容重复内容”
        outfile << line;
        if (!infile.eof()) // 如果不是文件最后一行，手动加换行
            outfile << std::endl;
    }
    return(0);
}