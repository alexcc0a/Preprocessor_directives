//
//  main.cpp
//  Preprocessor directives
//
//  Created by Александр Нестеров on 8/5/24.
//

#include <iostream>

#define MODE 1
#ifndef MODE
#error "MODE is not defined. Please define MODE."
#endif

#if MODE == 1
int add(int a, int b) {
    return a + b;
}
#endif

int main() {
#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    
    int x, y;
    std::cout << "Введите число 1: " << std::endl;
    std::cin >> x;
    std::cout << "Введите число 2: " << std::endl;
    std::cin >> y;
    std::cout << "Результат сложения: " << add(x, y) << std::endl;
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
    return 0;
}

