#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    private:
        // 私有成员函数：代表 Harl 的不同抱怨等级
        // 按照项目要求，这些函数不应该在类外被直接调用
        void debug(void) const;
        void info(void) const;
        void warning(void) const;
        void error(void) const;
    
    public:
        Harl();
        ~Harl();

        /**
         * 核心功能函数：
         * 根据传入的 level 字符串（如 "DEBUG"），
         * 自动选择并调用上面对应的私有函数。
         */
        void complain(std::string level) const;
};

#endif