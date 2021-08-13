// TheSequentialSearch.cpp : 

#include <iostream>
#include <algorithm>
#include <cmath>

template <size_t s>
bool TheSequentialSearch(int(&arr)[s], int item);

int main()
{
    int n;
    std::cout << "Enter a number which you want to search: ";
    std::cin >> n;
    int arr[] = { 1,3,4,5,6,7,8,9 };
    std::cout << std::boolalpha << TheSequentialSearch(arr, n);
    return 0;
}

template <size_t s>
bool TheSequentialSearch(int(&arr)[s], int item)
{
    int pos = 0;
    bool found = false;
    bool stop = false;
    while (pos < s && !found && !stop)
    {
        if (arr[pos] == item) found = true;
        else if (arr[pos] > item) stop = true;
        else pos += 1;
    }
    return found;
}
