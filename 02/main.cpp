﻿// Задача 2. Копирование умных массивов
//

#include <iostream>

#include "SmartArray.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    SmartArray sArr1(5);
    sArr1.smartArrayPushBack(1);
    sArr1.smartArrayPushBack(11);
    sArr1.smartArrayPushBack(111);
    sArr1.smartArrayPushBack(1111);
    sArr1.smartArrayPushBack(11111);

    sArr1.smartArrayPrint();

    std::cout << "***********************************" << std::endl;

    SmartArray sArr2(5);
    sArr2.smartArrayPushBack(22222);
    sArr2.smartArrayPushBack(2222);
    sArr2.smartArrayPushBack(222);
    sArr2.smartArrayPushBack(22);
    sArr2.smartArrayPushBack(2);

    sArr2.smartArrayPrint();

    std::cout << "**************В 3 массиве должны быть 1*********************" << std::endl;
    SmartArray sArr3(sArr1);
    sArr3.smartArrayPrint();

    std::cout << "**************В 4 массиве должны быть 2*********************" << std::endl;
    SmartArray sArr4 = sArr2;
    sArr4.smartArrayPrint();

    std::cout << "**************В 4 массиве должны быть 1*********************" << std::endl;

    sArr4 = sArr3;
    sArr4.smartArrayPrint();

    std::cout << "**************Сам в себя*********************" << std::endl;
    sArr4 = sArr4;

    std::cout << "***********************************" << std::endl;

    std::cout << "\n\nHello World!\n";
}