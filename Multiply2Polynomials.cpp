#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
// Multiply two polynomials.
// Divide Conqeur
int *multiply(vi &a, vi &b, int m, int n){
    int *prod = new int[m+n-1];

    for(int i = 0; i < m+n-1; i++)
        prod[i] = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                prod[i+j] += a[i]*b[j];
            }
        }
        return prod;
}

void print(vector<int> polynomial, int n){
    
    for(int i = 0; i < n; i++){
    cout<<polynomial[i];
    if(i!=0)
    cout<<"x^"<<i;
    if(i!=n-1)
    cout<<" + ";
  }
}


int main(){
    vector<int> a = {5, 0, 10, 6};
    vector<int> a = {1,2,4};
    int n = a.size();
    int m = b.size();
    int *prod = multiply(a, b, n, m);
    print(prod, m+n-1);
    return 0;
}