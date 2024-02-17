//Q1. Print all the odd numbers from 1 to 100
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=100; i+=2){
        cout<<i<<endl;
    }
    return 0;
}

//Q2. Print all the numbers from 1 to 100 that are divisible by 3
#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<=100; i+=3){
        cout<<i<<endl;
    }
    return 0;
} 

//Q3. Print the table of n, where n is a integer which user will input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value : ";
    cin>>n;
    for(int i=0; i<=(n*10); i+=n){
        cout<<i<<endl;
    }
    return 0;
}

//Q4. Display this AP - 4,7,10,13,16... upto n terms
#include<iostream>
using namespace std;
int main(){
    int n;
    int a=4,d=3;
    cout<<"enter the number of terms : ";
    cin>>n;
    for(int i=a; i<=a+(n-1)*d; i+=d){
        cout<<i<<endl;
    }
    return 0;
}

//Q5. Display this GP-3,12,48... upto n terms
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of terms : ";
    cin>>n;
    int a=3,r=4;
    for (int i=1; i<=n; i++){
        cout<<a<<endl;
        a=a*r;
    }
    return 0;
}

//Q6. Write a program to prnt the ASCII values and their equivalent characters of 26 alphabets using while loop
#include<iostream>
using namespace std;
int main(){
    cout<<"Small letters"<<endl;
    for (int i=97; i<=122; i++){
        cout<<(char)i<<" "<<i<<endl;
    }
    cout<<"Capital letters"<<endl;
    for (int i=65; i<=90; i++){
        cout<<(char)i<<" "<<i<<endl;
    }
    return 0;
}