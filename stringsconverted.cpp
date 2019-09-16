#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
vector<int> convert_string_with_spaces_to_vector(string s)
{
  vector<int> v;
  stringstream ss(s);
  string temp;
  while(!ss.eof())
  { ss>>temp;
    int x;
    if(stringstream(temp)>>x)
    v.push_back(x);
    temp="";
  }
  return v;
}
int main()
{
stringstream ss;
  string s="4 5 6 7";
  string str;
  getline(cin, str);
  vector<int> v=convert_string_with_spaces_to_vector(s);
  cout<<v[1];

/*  stringstream ss1;
  ss1<<s;
  int x;
  ss1>>x;
  int y=0;
  ss>>y;
  cout<<x<<y;
  if(s=="4")
  cout<<true;
  cout<<stoi(s);
 if(s[1]='a')
  cout<<"True";
 vector<string> v1;
  v1.push_back(s);
  v1.push_back("abc");*/
}
