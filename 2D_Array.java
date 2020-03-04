//https://www.hackerrank.com/challenges/2d-array
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the hourglassSum function below.
    static int hourglassSum(int[][] arr) {
        int maxval = -100;
        int sum = 0;
        if (arr.length < 3){
            return 0;
        }
        for (int i = 1; i <= arr.length-2; i++){
            for (int j = 1; j <= arr.length-2; j++){
                sum = arr[i][j] + arr[i+1][j] + arr[i+1][j-1] + arr[i+1][j+1];
                sum += arr[i-1][j] + arr[i-1][j-1] + arr[i-1][j+1];
                if (sum > maxval){
                maxval = sum;
                }
            }
        }
        return maxval;
    }
