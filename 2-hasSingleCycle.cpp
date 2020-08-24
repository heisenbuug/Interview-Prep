#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getNewIdx(int arr[], int currentIdx, int len)
{
  int jump = arr[currentIdx];
  int nextIdx = (currentIdx + jump) % len;
  if(nextIdx >= 0)
    return nextIdx;
  else 
    return len + nextIdx;
}

bool hasSingleCycle(int arr[], int len)
{
  int numElementVisited = 0;
  int currentIdx = 0;
  
  while(numElementVisited < len)
  {
    if(numElementVisited > 0 && currentIdx == 0)
    {
      return 0;
    }
    
    numElementVisited++;
    currentIdx = getNewIdx(arr, currentIdx, len);
  }
  return (currentIdx == 0);
}

int main() {
    
  int arr[] = {2, 3, 1, -4, -2, 2};
  cout << hasSingleCycle(arr, 6);
	return 0;
}
