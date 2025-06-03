#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    Ship s(2, 3);
    Mine m(4, 3);

    std::cout << "Ship initial pos: (" << std::get<0>(s.getPos()) << ", " << std::get<1>(s.getPos()) << ")\n";
    s.move(1, 0);
    std::cout << "Ship moved to: (" << std::get<0>(s.getPos()) << ", " << std::get<1>(s.getPos()) << ")\n";

    Explosion e = m.explode();
    std::cout << "Mine exploded. New mine type: " << m.getType() << "\n";

    e.apply(s);
    std::cout << "Ship after explosion: (" << std::get<0>(s.getPos()) << ", " << std::get<1>(s.getPos()) << "), type: " << s.getType() << "\n";

    return 0;
}
