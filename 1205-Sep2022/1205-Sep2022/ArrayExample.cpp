#include <iostream>
void SwapCopies(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void Swap(int* px, int* py) {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

void ArrayAccessByPointer() {
    int arr[] = { 10, 20, 30, 40, 40 };

    std::cout << "arr[1]=" << arr[1] << "\n";

    int* pi;
    pi = &arr[0];

    std::cout << "value at pi+1= " << *(pi + 1) << std::endl;
}

void InitializeArray(int* p, int n) {
    while (n-- > 0) {
        *p = 0;
        ++p;
    }
}

void BasicArrayExample() {

    char arr[5];
    int intArr[10];

    int numbers[5] = { 5, 10, 15, 20, 25 };
    int a1 = numbers[0];
    int a4 = numbers[3];
    int total = a1 + a4;

    if (numbers[0] == 0) {
        std::cout << "equal to zero\n";
    }
    else if (numbers[0] < 0) {
        std::cout << " less than zero\n";
    }
    else {
        std::cout << "greater than zero\n";
    }

    while (numbers[0] > 0) {
        numbers[0]--;
    }

    do {
        numbers[1]--;
    } while (numbers[1] > 0);

    for (int i = 0; i < 10; ++i) {
        std::cout << "i=" << i << std::endl;
    }

    int labArr[101];
    for (int i = 0; i < 101; ++i ) {
        if (i == 0) {
            labArr[0] = 1;
        }
        else {
            labArr[i] = i * 10;
        }

        std::cout << labArr[i] << std::endl;
    }

    

}



bool IsEven(int num) {
    int remainder = num % 2;

    if (remainder == 0) {
        return true;
    }
    else {
        return false;
    }

}

void Basicconditionals() {

    int num1 = 23;
    int num2 = 36;

    bool isNum1Even = IsEven(num1);
    bool isNum2Even = IsEven(num2);

    std::cout << " isNum1Even: " << isNum1Even << " isNum2Even: " << isNum2Even << std::endl;

}