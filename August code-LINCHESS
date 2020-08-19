#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t,i,n,k,j,rem,max=0,result=-1;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    result=-1,max=0;
	    cin>>n>>k;
	    long int a[n];
	    for(j=0;j<n;j++)
	    {
	        cin>>a[j];
	        if(k%a[j]==0)
	        {
	            if(max<a[j])
	            {
	                max=a[j];
	                result=max;
	            }
	        }
	    }
	    cout<<result<<endl;
	}
	return 0;
}
