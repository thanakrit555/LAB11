#include<iostream>
using namespace std;

unsigned long long int fibonacci(int );

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

unsigned long long int fibonacci(int n ){
if( n==0){
return 0;
}else if (n==1){
return 1;
}else return  fibonacci(n-1) +fibonacci(n-2);
}
