#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=0;
		for(int i=0;i<3;i++){
			int temp;
			cin>>temp;
			if(n<temp){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
