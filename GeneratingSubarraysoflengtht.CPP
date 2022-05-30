#include<iostream>

using namespace std ;

int main() {
	int n ;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int t ;
	cout<<"Tell me the length of the subarrays u want to generate" << endl;
	cin>> t ;


	for(int i=0;i<n;i++){
		{if(i+t<=n){
			for(int k =i;k<i+t;k++){
				cout<< a[k] << " " ;
			}
      }
			cout<<endl;
         
		}
	}
	
}
 