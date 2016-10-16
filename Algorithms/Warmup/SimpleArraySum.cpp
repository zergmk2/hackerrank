/*
 * Copyright (c) 2016
 *
 * Author: Lu Cao <zergmk2@gmail.com>
 */

// Input Format
//
// The first line contains an integer, , denoting the size of the array.
// The second line contains  space-separated integers representing the array's elements.
//
// Output Format
//
// Print the sum of the array's elements as a single integer.
//
// Sample Input
//
// 6
// 1 2 3 4 10 11
// Sample Output
//
// 31

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int SimpleArraySum(vector<int> arr)
{
    int sum = 0;
    for(auto i : arr)
        sum += i;
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    cout << SimpleArraySum(arr);
    return 0;
}

