#include<bits/stdc++.h>
using namespace std;
 
void pushzeros_toend(std::vector<int>& arr)
{
  std::stable_partition(arr.begin(),
            arr.end(),
            [](int n) { return n != 0; });
}
 
int main()
{
  std::vector<int> arr{1,9,8,4,0,0,2,7,0,6,0,9};
   
  pushzeros_toend(arr);
   
  for(int i=0;i<arr.size();i++)
      std::cout << arr[i] << " ";

 
  return 0;
}