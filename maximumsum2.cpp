#include<iostream>
#include<climits>
#include<algorithm>

using namespace std ;


int main() {

	int n ;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	 int left=-1;
	 int right=-1 ;
	  int csum[n] ;
	   csum[0]= a[0] ;

	 for(int i =1 ;i<n ;i++){
		 csum[i] = csum[i-1] + a[i] ;
		 
	 }

	 cout<< "The array of csum has elements" ;
	 for(int x:csum){
		 cout <<" "<< x << "," ;
	 }
   
    int max_sum = INT_MIN ;
	 for(int i = 0 ; i<n; i++){
		 for(int j=i;j<n ;j++){
             if(i>=1){
			 if(csum[j] - csum[i-1] > max_sum){
                 
				 max_sum= csum[j] - csum[i-1] ;
                 
				 left = i ;
				 right = j ;
			 }
		 }
         else if(csum[j]  > max_sum){
              max_sum= csum[j];
                 
				 left = i ;
				 right = j ;

         }

         
         }
	 }
  cout<< max_sum <<endl;
  cout<< "," << left << "," << right <<endl;
	
  
}