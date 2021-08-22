#include <iostream>

int main()
{
    int last = 1;
	for (int i = 1; i * i <= 100; i++) {
        int square = i * i;

        if (i == 1) {
            std::cout << "Door " << square << " is open" << std::endl;
            last = square;
            continue;
        }

        for (int j = last + 1; j < square; j++)
            std::cout << "Door " << j << " is closed" << std::endl;

        std::cout << "Door " << square << " is open" << std::endl;
        last = square;
        continue;
    }

    return(0);
}
