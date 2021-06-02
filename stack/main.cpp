#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 10
 4 2 1 2 7 1 1 1 1 1
 9
 5
 1
 7
 88
 1
 3
 44
 43
 34
*/

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int a,b,j=0;
    stack<int> stack;
    cin>>a;
    int utos[a];
    for (int i = 0; i < a; ++i) {
        cin>>b;
        utos[i]=b;
    }
    cin>>b;
    cout<<b<<endl;
    for (int i = 0; i < a-1; ++i) {
        utos[i]--;
        //cout<<"utos "<<utos[i]<<endl;
        while (utos[i] > 0) {
            if (j == a-1)break;
            //cout<<"utos "<<utos[i]<<" i "<<i<<" a "<<a<<endl;
            cin >> b;
            stack.push(b);
            j++;
            utos[i]--;
        }
        if(j==a-1)break;
        cin>>b;
        cout<<b<<endl;
        j++;
    }
    while (!stack.empty()){
        cout<<stack.top()<<endl;
        stack.pop();
    }
}



