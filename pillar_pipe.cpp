#include <bits/stdc++.h>
using namespace std;
int n,ans;
int ar[1000];



/*
O(3^N)
https://www.geeksforgeeks.org/samsung-r-d-noida-question-september-2018/
recursion
*/



void pillar_pipe(int index,int first,int second){
    if(index>n){
        if(first==second){
            cout<<first<<" ";
            ans=max(ans,first);
        }

        return;
    }
    pillar_pipe(index+1,first+ar[index],second);
    pillar_pipe(index+1,first,second+ar[index]);
    pillar_pipe(index+1,first,second);
}
int main(){

    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>ar[i];
    }
    pillar_pipe(1,0,0);

    cout<<endl;
    cout<<ans<<endl;

    return 0;
}