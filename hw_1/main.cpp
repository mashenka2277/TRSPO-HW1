#include <iostream>

// Функція для обчислення суми двох чисел
int addNumbers(int a, int b) 
{
    return a + b;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;

    int num1 = 5;
    int num2 = 10;
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << addNumbers(num1, num2) << "." << std::endl;

    return 0;
}