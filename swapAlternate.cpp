// coding ninja's question swape alternate element of an array using c++ programming.
Ex :1 2 3 4 5 6 7 8 9 0
Ans:2 1 4 3 6 5 8 7 0 9


#include<bits/stdc++.h>
using namespace std;
int main(){
  int size;
  std::cout<<"Enter size of array: "<<size<<std::endl;
  std::cin>>size;
  
  int arr[10];
  for(int i=0;i<size;i++){
  std::cin>>arra[i];
  }
  int temp;
  int i=0;
  int len=sizeof(arr)/sizeof(arr[0]);
  
  while(i<len-1){
  temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    i=i+2;
  }
for(int i=0;i<len;i++){
std::cout<<arr[i]<<" ";
}

}


// Java code:


import java.util.*;

public class swapAlternate{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int size=sc.nextInt();
    int arr[]=new int[size];
    for(int i=0;i<size;i++){
    arr[i]=sc.nextInt();
    }
    int temp;
    int i=0;
    while(i<arr.length-1){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    i=i+2;
    }
    for(int i=0;i<size;i++){
    System.out.print(arr[i]+" ");
    }
  }
}


//using recursion:

int swapAlternate(int *arr, int size){
  int temp, i=0;
if(!(size<2){
 temp=arr[0];
  arr[0]=arr[i+1];
  arr[i+1]=temp;
  i=i+2;
  swapAlternate(arr+2, size-2);
}
}
