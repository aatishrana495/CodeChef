#include<iostream>
using namespace std;
void sort();
int search();
int main(){
	int t;
	cin>>t;
	int k[t+1],n[t+1],o[t+1];	
	long long int a[t][n+1];
	for(int i=1;i<=t;i++){
		cin>>n[i];
		for(int j=1;j<n+1;j++){
			cin>>a[i][j];
		}
		sort();
		cin>>k[i];
		o[i]=search();
	}
	for(int i=1;i<t+1;i++){
		cout<<o[i]<<endl;
	}
}

void sort(){
	
}
