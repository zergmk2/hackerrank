/*
 * Copyright (c) 2016
 *
 * Author: Lu Cao <zergmk2@gmail.com>
 */

// Sample Input
//
// 5 6 7
// 3 6 10
// Sample Output
//
// 1 1

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <tuple>

using namespace std;
static int SCORENUMBER = 3;
inline int round(int score)
{
    if (score < 1)
    {
        return 1;
    }
    else if (score > 100)
    {
        return 100;
    }
    else
    {
        return score;
    }
}

inline void compareScore(int* AliceScore, int a, int* BobScore, int b)
{
    if ( a > b)
    {
        (*AliceScore)++;
    }
    else if ( a < b)
    {
        (*BobScore)++;
    }
}

tuple<int, int> ComparetheTriplets(vector<int> Alice, vector<int> Bob)
{
    int AliceScore = 0;
    int BobScore = 0;
    for (int i = 0; i < SCORENUMBER; i++)
        compareScore(&AliceScore, Alice[i], &BobScore, Bob[i]);
    return make_tuple(AliceScore, BobScore);
}


int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    vector<int> Alice;
    Alice.push_back(round(a0));
    Alice.push_back(round(a1));
    Alice.push_back(round(a2));
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector<int> Bob;
    Bob.push_back(round(b0));
    Bob.push_back(round(b1));
    Bob.push_back(round(b2));
    int AliceScore, BobScore;
    tie(AliceScore, BobScore) = ComparetheTriplets(Alice, Bob);
    cout << AliceScore <<  ' ' << BobScore;
    return 0;
}

