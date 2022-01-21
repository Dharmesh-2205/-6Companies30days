#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}


string encode(string src)
{      
  int count=1;
  string res = "";
  for (int i=0;i<src.length();i++){
      if (src[i]==src[i+1]){
          count++;
          continue;
      }
      else{
          res += src[i]+to_string(count);
          count = 1;
      }
 }
 return res;
}     
 
