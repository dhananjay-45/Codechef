#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t,i,pc,pr;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>pc>>pr;
	    long int ans_c,ans_r;
	    ans_c=pc/9;
	    ans_r=pr/9;
	    if(pc<9)
	    {
	        ans_c=1;
	    }
	    if(pr<9)
	    {
	        ans_r=1;
	    }
	    if(9*ans_c<pc)
	    {
	        ans_c++;
	    }
	    if(9*ans_r<pr)
	    {
	        ans_r++;
	    }
	    if(ans_r<=ans_c)
	    {
	        cout<<"1"<<" "<<ans_r<<endl;
	    }
	    else
	    {
	        cout<<"0"<<" "<<ans_c<<endl;
	    }
	}
	return 0;
}
