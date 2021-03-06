//
//  main.cpp
//  最长公共子序列LCS
//
//  Created by 陈泰文 on 2018/9/22.
//  Copyright © 2018年 twchen. All rights reserved.
//
//  子序列可以不连续，子串必须连续

#include <iostream>
#include <string>
#define MAX_length 101
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int dp[MAX_length][MAX_length]={0};
    int len1=str1.length(),len2=str2.length();
    for(int i=1;i<=len1;i++)
        for(int j=1;j<=len2;j++)
        {
            if(str1[i-1]==str2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    cout<<dp[len1][len2]<<endl;
    return 0;
}
