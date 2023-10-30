#include <iostream>

int Reverse(int target)
{
    return static_cast<int>(!static_cast<bool>(target));
}

void Solution()
{
    int data[9][10]
    {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };

    for (int row = 0; row < 9; ++row)
    {
        for (int column = 0; column < 10; ++column)
        {
            data[row][column] = Reverse(data[row][column]);
        }
    }

    for (int row = 0; row < 9; ++row)
    {
        for (int column = 0; column < 10; ++column)
        {
            std::cout << data[row][column];
        }
        std::cout << std::endl;
    }
}


int main()
{
    Solution();
}
