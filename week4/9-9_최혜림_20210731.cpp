#include<iostream>
using namespace std;
 
int main(void){
    long long n;
    cin >> n;
 
    int cnt = 1;      
    long long range =1; 
    long long tmp =1; 
 
    
    while(1){
        if(range >= n){
            break;
        }
        tmp = 6 * (cnt++);
        range += tmp;
    }
 
    cout << cnt;
    
    return 0;
}