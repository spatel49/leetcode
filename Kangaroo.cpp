//https://www.hackerrank.com/challenges/kangaroo/problem
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) {
    string final = "";
    bool meets = false;
    int n = 10000;
    int distance1 = x1;
    int distance2 = x2;
    while (n!=1){
        if (distance1 == distance2){
            meets = true;
            break;
        }
        distance1 +=v1;
        distance2 += v2;
        n--;
    }
    if (meets){
        final = "YES";
    } else {
        final = "NO";
    }
    return final;

}
