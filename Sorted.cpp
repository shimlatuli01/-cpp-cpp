#include<bits/stdc++.h>
using namespace std;
int main (){
    int x;
    cin>>x;
    while(x--){
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(long long int i=0; i<n; i++){
        cin>>v[i];
    }
    bool sorted=true;
    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            sorted=false;
            break;
        }
    }
    if(sorted){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}