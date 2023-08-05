#include <iostream>
using namespace std;

    int main()
    {
        int n; 
        cout<<"Enter the size of the array: ";
        cin>>n;
        int arr[n];
        cout<<" Enter "<<n<<"element in the array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int freq[n];
        int temp[n];
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    freq[j]=0;
                }
            }
        }
        int k= 0;
        for(int i=0;i<n;i++)
        {
            if(freq[i]=0)
            {
                temp[k++]=arr[i];
            }
        }
        for(int i=0;i<k;i++)
        {
            cout<<temp[i]<<",";
        }
        return 0;
    }