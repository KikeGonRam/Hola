#include <iostream>

int main() {
    const char* colors[] = {"\033[31m", "\033[32m", "\033[33m", "\033[34m", "\033[35m"};
    for (int i = 0; i < 10; ++i) {
        std::cout << colors[i % 5] << "¡Hola, Mundo con colores!" << std::endl;
    }
    std::cout << "\033[0m";
    return 0;
}
