// BubbleSort.cpp : Defines the entry point for the console application.
/*
PRESENTER SOCIOTACHERS.COM
BY ASAD ALI


*/
//

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;

  int _tmain(int argc, _TCHAR* argv[])
{
	int n=10;
	int arr[10];
	cout<<"Fill the Array..."<<endl;
	for (int a = 0; a<n;a++){
	cin>>arr[a];
	}
   for( int i=1;i<n ;i++ )//for n-1 passes
   {
    //In pass i,compare the first n-i elements
    //with their next elements 
    for( int j=0; j<n-1; j++)
    {
     if(arr[j] > arr[j+1])
     {
      int temp;
      temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
     }
    }
   }
   cout<<"your sorted array is this.. as under...."<<endl;
   for (int a=0;a<n;a++){
   cout<<arr[a]<<endl;
      }
   cin>>n;
  }

