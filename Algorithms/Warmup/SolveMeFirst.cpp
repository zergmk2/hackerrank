/*
 * Copyright (c) 2016
 *
 * Author: Lu Cao <zergmk2@gmail.com>
 */

/*
 *Input Format
 *
 *Code that reads input from stdin is provided for you in the editor. There are  lines of input, and each line contains a single integer.
 *
 *Output Format
 *
 *Code that prints the sum calculated and returned by solveMeFirst is provided for you in the editor.
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int solveMeFirst(int a, int b) {
 // Hint: Type return a+b; below
    return a+b;
}
int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
