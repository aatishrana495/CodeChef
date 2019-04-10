#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	int min;
	for(int i=0;i<t;i++){
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		sort(a,a+n);
		min=a[1]-a[0];
		for(int j=1;j<n-1;j++){
			if(min>a[j+1]-a[j]){
				min=a[j+1]-a[j];
			}
		}
		cout<<min<<endl;	
	}
}
