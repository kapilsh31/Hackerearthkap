Modiji does not like duplicates in his life. However, he has found a piece of paper where multiple integers are present. He observed and found out that all elements occurred thrice there except one element, which occurs just once.

He wishes to find that rogue integer. Help him find the element that occurs once.

Input Format

The first line contains a single integer, containing the number of testcases, T. Each test case contains 2 lines. The first line contains 1 integer, N. The next line contains N space separated integers.

Output Format

The output consists of just T lines. Each line consists of 1 integer, that is, the element that occurs once.

Constraints

1<=T<=5

1<=N<=10^5

1<=arr[i]<=10^6

SAMPLE INPUT 
1
7
1 2 2 1 2 1 4
SAMPLE OUTPUT 
4



SOLUTION


#include<iostream>
using namespace std;

int num(int a[], int n){
    int c, s;
    for(int i=0;i<n;i++){
        s=a[i]; c=0;
        for(int j=0; j<n; j++){
            
            if(a[j] == s){
                c=c+1;
            }
        }
        if(c == 1){
            return s; 
        }
    }
}

int main(){
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        cout<<num(a,n);
        cout<<endl;
    
    }
}
