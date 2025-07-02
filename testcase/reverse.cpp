#include<vector>
#include<iostream>
#include<tm_algorithm>
using namespace std;
int main()
{
using intvector=vector<int>;
intvector g;
g.push_back(10);
g.push_back(20);
g.push_back(30);
g.push_back(40);
g.push_back(50);
for(int i:g) cout<<i<<endl;
cout<<"---------"<<endl;
algo::reverse(g.begin(),g.end());
for(int i:g) cout<<i<<endl;
return 0;
}
