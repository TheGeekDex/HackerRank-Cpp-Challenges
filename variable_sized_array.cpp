#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int n,q;
	cin>>n>>q;
	vector<int> array[n];
	for (int i=0;i<n;i++){
	    int k;
	    cin>>k;
	    for (int j=0; j<k; j++){
	        int x;
	        cin>>x;
	        array[i].push_back(x);
	        };
	    };
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        cout<<array[a][b]<<endl;
        };
}