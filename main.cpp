#include<iostream>
#include<vector>
#include"quicksort.h"

using namespace std;


int main()
{

vector<int> vec={9,7,5,3,1};
cout<<"vec:"<<endl;
for(auto&v:vec)
{
    cout<<v<<" ";
}
cout<<endl;
QuickSort qs;
qs.AddReadySortVec(vec);
vector<int> rt_v=qs.GetSortResult();
cout<<"sort result:"<<endl;
for(auto&v:rt_v)
{
    cout<<v<<" ";
}
system("pause");
return 0;
}