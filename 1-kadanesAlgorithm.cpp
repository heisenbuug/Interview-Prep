#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int kadanesAlgorithm(int arr[], int len)
{
  int maxEndingHere = arr[0];
  int maxSoFar = arr[0];
  
  for(int i = 1; i < len; i++)
  {
    maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
    maxSoFar = max(maxSoFar, maxEndingHere);
  }
  return maxSoFar;
}

int main() {
    
  int arr[] = {3, 5, -9, 1, 3, -2, 3, 4, 7, 2, -9, 6, 3, 1, -5, 4};
  cout << kadanesAlgorithm(arr, 16) << endl;
	return 0;
}
