#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // precompute
    int hash[256]={0};
    // int hash[26]={0};// hash [26 ] we knoew that there is only 26alpahabests in small or caps if there are more than that we include hash [256]
    for(int i=0;i<s.size();i++)
    {
         hash[s[i]]++; 
            //    hash[s[i]-'a']++;


    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        // fetch data
        // cout<<hash[c-'a'];
        // // 
        cout<<hash[c];

    }
    return 0;
    
}