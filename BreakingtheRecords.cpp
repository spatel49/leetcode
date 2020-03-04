//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/submissions/code/136471908
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
int maxcounter=0;
int mincounter=0;
int currmax=0;
int currmin=0;
currmax=scores[0];
currmin=scores[0];
for (long unsigned int i=1; i<scores.size();i++){
    if (scores[i]>currmax){
        currmax=scores[i];
        maxcounter++;
    }
    if (scores[i]<currmin){
        currmin=scores[i];
        mincounter++;
    }
}
vector<int> final;
final.push_back(maxcounter);
final.push_back(mincounter);
return final;
}
