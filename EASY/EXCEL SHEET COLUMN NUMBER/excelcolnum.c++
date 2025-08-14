#include<iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

class Solution{
public:
    int titleToNumber(string columnTitle){
        int result = 0;
        for(int i = 0; i < columnTitle.length(); i++){
            result = result * 26 + (columnTitle[i] - 'A' + 1);
        }
        return result;
    }
};