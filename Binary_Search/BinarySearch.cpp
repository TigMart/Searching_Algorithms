// BinarySearch.cpp : 

#include <iostream>

int BinarySearch(int* arr, int num, int right, int left);

int main()
{
    const int count = 5;
    int arr[count] = { 1,2,3,4,5 };
    int num;
    //int size = sizeof(arr) / sizeof(int);
   // std::cout << size;
    std::cout << "Which number do you search: ";
    std::cin >> num;
    std::cout << BinarySearch(arr, num, count-1, 0);
    return 0;
}

int BinarySearch(int* arr, int num, int right, int left)
{
    if (right >= left)
    {
        int mid = (right + left) / 2;
        if (arr[mid] == num) { return mid; }
        if (arr[mid] >= num) { return BinarySearch(arr, num, mid - 1, left); }
        else { return BinarySearch(arr, num, right, mid + 1); }
    }
    else {
        return -1;
    }
}
