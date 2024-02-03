#include <bits/stdc++.h>
using namespace std;



/*
https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/sum-of-nodes-in-kth-level/problem
*/



int sum_of_nodes(int k,string tree){

    int cur=0;
    int sum=0;
    string s="0";

    for(int i=1;i<tree.size();++i){
        if(tree[i]=='('){
            if(cur==k){
                sum+=stoi(s);
            }
            s="0";
            ++cur;
        }
        else if(tree[i]==')'){
            --cur;
        }
        else{
            s+=tree[i];
        }
    }

    cout<<sum<<endl;

    return 0;
}
int main(){

    int k;
    string tree;
    cin>>k>>tree;
    sum_of_nodes(k,tree);

    return 0;
}