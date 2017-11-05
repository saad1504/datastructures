//Program to find the distinct element substring
#include <iostream>
#include <string>
using namespace std;
void counter(string str,int k)
{
	int len=str.size(),i,j,res=0;
	for(i=0;i<len;i++)
	{
		int cnt[26]={0};
		int dist_count=0;
		for(j=i;j<len;j++)
		{
			if(cnt[str[j]-'a']==0)
				dist_count++;
			cnt[str[j]-'a']++;
			if(dist_count==k)
				res++;
		}

	}
	cout << res << "\n";
}
int main()
{
	int k;
	string str;
	cin >> str >>k;
	counter(str,k);
	return 0;
}