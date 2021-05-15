#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int N;
	cin>>N;
	if (0<=N && N<=1000){
	    int arr[N];
	    for (int i =0; i<N;i++){
    	    cin>>arr[i];
    	    if (!(1 <= arr[i]) || !(arr[i] <= 10000)){
    	        return 0;
	        }
    	    };
    	for (int i=0; i<N; i++){
    	   cout<<(arr[N-(i+1)]);
    	   cout<<" ";
    	   }	
	}
	return 0;
}
