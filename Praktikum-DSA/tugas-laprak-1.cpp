#include <iostream>

struct TwoNumber {
    int a;
    int b;
};

int show_difference(TwoNumber target) {
    return abs(target.a - target.b);
}

int main()
{
    TwoNumber myNumbers;
    myNumbers.a = 9;
    myNumbers.b = 10;

    std::cout << "selisih: " << show_difference(myNumbers) << std::endl;
}