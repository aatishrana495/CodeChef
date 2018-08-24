#include<iostream>
using namespace std;
int noOfZeroes(long long int b);
int main(){
	long long int n;
	cin>>n;
	long long int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=noOfZeroes(a[i]);
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<endl;
	}
}

int noOfZeroes(long long int b){
	long long int counter=0;
	if(b<5){
		return counter;
	}
	do{
		counter+=b/5;
		b=b/5;
	}while(b!=0);
	return counter;
}
