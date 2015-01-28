//
//  main.cpp
//  BinarySearch
//
//  Created by Vinod Gupta on 1/28/15.
//  Copyright (c) 2015 Vinod Gupta. All rights reserved.
//

#include <iostream>

int binarySearch(int ar[], int low, int high, int search)
{
    if (low > high)
        return -1;
    
    int mid = (low + high) / 2;
    if (ar[mid] < search)
    {
        return binarySearch(ar, mid+1, high, search);
    }
    else if (ar[mid] > search)
    {
        return binarySearch(ar, low, mid, search);
    }
    else
    {
        return mid;
    }
}

int main(int argc, char* argv[])
{
    int ar[] = { 5, 2, 55, 23, 56, 867, 34, 546, 34, 646, 24 };
    int high = sizeof ar / sizeof(int) - 1;
    std::cout << "Searching 56 in array:" << binarySearch(ar, 0, high,56)<<"\n";
    
    return 0;
}

