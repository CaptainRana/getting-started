#include <iostream>
using namespace std;
bool binsearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    int mid;
    mid = (left + right) / 2;
    while (left <= right)
    {
        if (key == arr[mid])
        {
            return true;
        }
        if (key > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        mid = (left + right) / 2;
    }
    return false;
}
int main()
{
    int arr1[10] = {2, 3, 8, 9, 15};
    int key;
    bool ans;
    cout << "Enter the element which you want to search:" << endl;
    cin >> key;
    ans = binsearch(arr1, 5, key);
    // cout<<ans<<endl;
    if (ans)
        cout << "Element is found";
    else
        cout << "Element is not found";
}