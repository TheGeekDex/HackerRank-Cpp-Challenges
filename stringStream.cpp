#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parseInts(string str){
   vector<int> data;
   int x;
   char y;
   stringstream s(str);
   while(s>>x){
       data.push_back(x);
       s>>y;
       }
   return data;
}


int main(int argc, char *argv[])
{
	string str;
	cin>>str;
	vector<int> integers = parseInts(str);
	for (int i=0 ;i < integers.size(); i++){
	    cout<<integers[i]<<"\n";
	}
}