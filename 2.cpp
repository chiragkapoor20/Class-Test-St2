
/*
Name - chirag Kapoor
Roll No-2010990175
Set-Tst01

*/



//write a c++ program to print all the repeated no. with frequency in an array in minimum time complexity.



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;   //taking number of element in an array


    int a[n];    

    for(int i=0;i<n;i++)   // taking input from users
    {
        cin>>a[i];
    }

//Declare the map
unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++){
        mp[a[i]]++;//for same key increase frequency
    }
    
    //iterator.first == key(element value)
    //iterator.second == value(frequency)
cout<<"Repeated number"<<" "<<"Frequency"<<"\n";

    for(auto i:mp)
    {
        if(i.second>1)   //frequeny>1 means repeating element
        {
        cout<<i.first<<"                "<<i.second<<"\n"; //print repeating elements with their frequencies
        }
    }
    


}



