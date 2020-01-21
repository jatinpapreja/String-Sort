#include<iostream>
#include<algorithm>
using namespace std;
bool mycompare(string s1,string s2)
{
  int i=0;
  while(s1[i]==s2[i])i++;
  if(i==0)
  {
    return s1<s2;
  }
  else
  {
    if(s1.length()>s2.length())
    {
      return s1>s2;
    }
    else
    {
      return s2<s1;
    }
  }
}
int main() {
  int n;
  cin>>n;
  cin.get();
  string s[n];
  for(int i=0;i<n;i++)
  {
    cin>>s[i];
  }
  sort(s,s+n,mycompare);
  for(int i=0;i<n;i++)
  {
    cout<<s[i]<<endl;
  }
	return 0;
}
