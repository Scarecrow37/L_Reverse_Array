#include <iostream>

int Reverse(int target, const int x, const int y)
{
    if (target == x)
    {
        target = y;
    }
    else if (target == y)
    {
        target = x;
    }
    return target;
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

    constexpr int column_size = sizeof(data[0]) / sizeof(int);
    constexpr int row_size = sizeof(data) / sizeof(data[0]);

    for (int row = 0; row < row_size; ++row)
    {
        for (int column = 0; column < column_size; ++column)
        {
            data[row][column] = Reverse(data[row][column], 0, 1);
        }
    }

    for (int row = 0; row < row_size; ++row)
    {
        for (int column = 0; column < column_size; ++column)
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
