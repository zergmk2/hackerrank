/*
 * Copyright (c) 2016
 *
 * Author: Lu Cao <zergmk2@gmail.com>
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long AVeryBigSum(vector<long long> arr)
{
    long long sum = 0;
    for(auto i : arr)
        sum += i;
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    cout << AVeryBigSum(arr);
    return 0;
}
