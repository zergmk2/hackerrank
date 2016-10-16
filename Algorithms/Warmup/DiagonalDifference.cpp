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

int sumPrimaryDiagonal(vector<vector<int>> matrix, int size)
{
    int sum = 0;
    for (int i = 0, j = 0; i < size; i++, j++)
    {
        sum += matrix[i][j];
    }
    cout << sum << endl;
    return sum;
}

int sumSecondDiagonal(vector<vector<int>> matrix, int size)
{
    int sum = 0;
    for (int i = 0, j = size-1; i < size; i++, j--)
    {
        sum += matrix[i][j];
    }
    cout << sum << endl;
    return sum;
}

int DiagonalDifference(vector<vector<int>> matrix, int size)
{
    int sum0, sum1;
    sum0 = sumPrimaryDiagonal(matrix, size);
    sum1 = sumSecondDiagonal(matrix, size);
    return abs(sum0 - sum1);
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    cout << DiagonalDifference(a, n);
    return 0;
}

