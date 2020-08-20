#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,i,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    string s,p;
	    map <char, long int> frequency;
	    map<char, long int>::iterator itr;
	    cin>>s;
	    for(j=0;s[j]!='\0';j++)
	    {
		    frequency[s[j]]++;
	    }
	    cin>>p;
	    for(j=0;p[j]!='\0';j++)
	    {
		    frequency[p[j]]--;
	    }
	    int flag=0;
	    for(itr=frequency.begin();itr!=frequency.end();++itr)
	    {
		    if(int(itr->first)<int(p[0]))
		    {
			    while(itr->second>0)
			    {
				    cout<<itr->first;
				    itr->second--;
			    }
		    }
		    else
		    {
			    for(j=1;p[j]!='\0';j++)
			    {
				    if(int(p[j-1])!=int(p[j]))
				    {
					    break;		
				    }	
			    }
			    if(int(p[j-1])<int(p[j]))
			    {
				    flag=1;
			    }
			    break;			
		    }	
	   }
	   if(flag==1)
	    {
		    while(itr->second>0)
		    {
			    cout<<itr->first;
			    itr->second--;
		    }
		    ++itr;
		    cout<<p;	
	    }
	    else
	    {
		    cout<<p;	
	    }
	    while(itr!=frequency.end())
	    {
		    while(itr->second>0)
		    {
			    cout<<itr->first;
			    itr->second--;
		    }
		    ++itr;
	    }
	    cout<<endl;
	}
	return 0;
}
