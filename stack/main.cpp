#include <iostream>
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

 9
88
3
44
34
43
1
7
1
5
*/
int utos[100000]={};
int it=0;
int aa;

void stackkkk(int a,int i){
    //cout<<"utos: "<<a<<endl;
    int b=0;
    if (a==0){
        //cout<<"entro2"<<endl;
        if (it==aa-1)return;
        cin>>b;
        cout<<b<<"\n";
        it++;
        stackkkk(utos[i+1]-1,i+1);
    }else{
        //cout<<"entro3"<<endl;
        if (it==aa-1)return;
        cin>>b;
        it++;
        stackkkk(a-1,i);
        cout<<b<<"\n";
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int b;
    cin>>aa;
    for (int i = 0; i < aa; ++i) {
        cin>>b;
        utos[i]=b;
    }
    cin>>b;
    cout<<b<<"\n";
    stackkkk(utos[0]-1,0);
    /*
    for (int i = 0; i < aa-1; ++i) {
        utos[i]--;
        //cout<<"utos "<<utos[i]<<endl;
        while (utos[i] > 0) {
            if (j == aa-1)break;
            //cout<<"utos "<<utos[i]<<" i "<<i<<" a "<<a<<endl;
            cin >> b;
            stack.push(b);
            j++;
            utos[i]--;
        }
        if(j==aa-1)break;
        cin>>b;
        cout<<b<<endl;
        j++;
    }
    while (!stack.empty()){
        cout<<stack.top()<<endl;
        stack.pop();
    }
    */
}



