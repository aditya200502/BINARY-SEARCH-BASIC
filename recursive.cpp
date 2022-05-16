#include<bits\stdc++.h>
using namespace std;
int binsearch(int arr[],int start,int end,int key)
{
    if(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            binsearch(arr,start,mid-1,key);
        else
            binsearch(arr,mid+1,end,key);
    }
    else
        return 0;
}
int main()
{
    int arr[8]={2,5,11,17,19,23,45,67};
    int key,ans;
    cin>>key;
    ans=binsearch(arr,0,7,key);
    if(!ans)
        cout<<"Number not found";
    else
        cout<<"Number found at "<<ans<<" index";
    return 0;
}
