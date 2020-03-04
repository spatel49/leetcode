//https://www.hackerrank.com/challenges/apple-and-orange/problem
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int applecounter = 0;
    int orangecounter = 0;
    for (unsigned int i = 0; i < apples.size(); i++){
        apples[i] = apples[i] + a;
    }
    for (unsigned int j = 0; j < oranges.size(); j++){
        oranges[j] = oranges[j] + b;
    }
    for (unsigned int i = 0; i < apples.size(); i++){
        if (apples[i]>=s && apples[i]<=t){
            applecounter++;
        }
    }
    for (unsigned int j = 0; j < oranges.size(); j++){
        if (oranges[j]>=s && oranges[j]<=t){
            orangecounter++;
        }
    }
    cout << applecounter << "\n";
    cout << orangecounter;


}
