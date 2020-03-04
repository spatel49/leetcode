//https://www.hackerrank.com/challenges/time-conversion
#include <bits/stdc++.h>
#include <string>

using namespace std;

//Complete the timeConversion function below.
string timeConversion(string s) {
     string final = "";
     if (s[8]=='A'){
         if (s[0]=='1' && s[1]=='2'){
            final = "00";
            for (int i = 2; i < 8; i++){
                final+=s[i];
            }
         } else {
             for (int i = 0; i < 8; i++){
                final+=s[i];
            }
         }
     }else {
        if (s[0]=='1' && s[1]=='2'){
            for (int i = 0; i < 8; i++){
             final += s[i];
            }
            return final;
        }
        if (s[0]=='0'){
            int time = s[1] - 48 + 12;
            final=std::to_string(time);
        } else {
            int time = s[1] -48 + 10 + 12;
            if (time == 24){
                final = "00";
            } else {
                final=std::to_string(time);
            }
        }
         for (int i = 2; i < 8; i++){
             final += s[i];
         }
     }
     return final;
}
