#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
    // --- 测试块 1: HumanA (使用引用 Weapon&) ---
    {
        Weapon club = Weapon("crude spiked club");
        
        // Bob 在构造时就必须绑定这把 club。
        // 因为是引用，Bob 的 _weapon 实际上就是 club 本身的一个别名。
        HumanA bob("Bob", club);
        bob.attack(); // 输出: Bob attacks with their crude spiked club

        // 关键点：修改原始对象 club 的类型
        club.setType("some other type of club");
        
        // 因为 Bob 持有的是引用，他会立即感知到同一块内存中数据的变化。
        bob.attack(); // 输出: Bob attacks with their some other type of club
    }
    
    // --- 测试块 2: HumanB (使用指针 Weapon*) ---
    {
        Weapon club = Weapon("crude spiked club");
        
        // Jim 出生时没有武器（构造函数不接收武器）。
        HumanB jim("Jim");
        
        // 必须通过取地址符 & 将 club 的地址交给 Jim 的指针。
        jim.setWeapon(&club);
        jim.attack(); // 输出: Jim attacks with their crude spiked club

        // 同样修改原始对象
        club.setType("some other type of club");
        
        // 因为 Jim 持有的指针指向该内存地址，同样能看到更新。
        jim.attack(); // 输出: Jim attacks with their some other type of club
    }

    return (0);
}