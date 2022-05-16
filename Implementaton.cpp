#include<bits/stdc++.h>
using namespace std;
int binsearch(int arr[],int n,int key)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            high=mid-1;
        else
            low=mid+1;
    }
    return 0;
}
int main()
{
    int even[6]={3,9,11,16,19,25};
    int odd[5]={2,6,17,28,33};
    int ans,key;
    cout<<"Enter the number to search::";
    cin>>key;
    ans=binsearch(even,6,key);
    if(!ans)
        cout << "Number not found"<<endl;
    else
        cout<<"Number found at "<<ans<<" index"<<endl;
    cout<<"Enter the number to search::";
    cin>>key;
    ans=binsearch(odd,5,key);
    if(!ans)
        cout << "Number not found"<<endl;
    else
        cout<<"Number found at "<<ans<<" index"<<endl;
    return 0;
}