#include<iostream>
#include <bits/stdc++.h>
#include<list>
using namespace std;

int main(){
    int i,j;
    int n=0,m=0;
    cout<<"Enter Row Count"<<endl;
    cin>>n;
    cout<<"Enter Column Count"<<endl;
    cin>>m;


    cout<<"Enter Matrix element"<<endl;

    int mat[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    cout<<"Printing matrix in snake pattern"<<endl;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if((i+1)%2==0) cout<<mat[i][(m-1)-j]<<" ";
            else cout<<mat[i][j]<<" ";
        }

        cout<<endl;
    }
}
