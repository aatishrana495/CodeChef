#include<iostream>
using namespace std;

int main(){
	long long int t,n,temp;
	cin>>t;
	cin>>n;
	long long int a[n+1];
	a[0]=0;
	for(int i=1;i<n+1;i++){
		cin>>a[i];
	}
	for(int i=1;i<n+1;i++){
		for(int j=i;j<n;j++){
			if(a[j+1]>a[j]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;	
			}
		}
	}
	cout<<a[2]-a[1]<<endl;	
}
