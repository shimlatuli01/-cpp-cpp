#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    bool duplicate=false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]==v[j]){
                duplicate=true;
            break;
            }
        }
        if(duplicate){
            break;
        }
    }
    if(duplicate){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
