#include<iostream>
using namespace std;

int main(){
	long long int n,k,counter=0;
	cin>>n;
	cin>>k;
	long long int a[n];
	for(int i=0;i<n;i++){
		cin>>a[n];
		if(a[i]%k==0){
			counter++;
		}
	}
	cout<<counter<<endl;
}
