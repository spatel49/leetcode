//https://www.hackerrank.com/challenges/compare-the-triplets
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> finalvec;
    int Bob = 0;
    int Alice = 0;
    for (unsigned int i = 0; i< a.size(); i++){
        if (a[i]>b[i]){
            Alice++;
        }
        if (a[i]<b[i]){
            Bob++;
        }
    }
    finalvec.push_back(Alice);
    finalvec.push_back(Bob);
    return finalvec;
}
