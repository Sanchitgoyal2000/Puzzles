#include<iostream>
using namespace std;
int main()
{
 char p[]={'R','B','R','R','B','B','B','R','B','B'};
 int countb=0,i=0,countr=0,j=0,h=0,red=0,blue=0,res=0;
 // speak that color which has even number as count of hats of same color
  for(j=1;j<10;j++)
    {
      if(p[j]=='B')
      {
       countb++;
      }
      else
       countr++;
   }
    if(countb%2==0)
    {
       h=1;
     if(p[0]=='B')
      res++;
    }
    else
    {
     h=0;
     if(p[0]=='R')
      res++;
    }
    i=1;
    int s=0;

 while(i<10)
 {
   for(j=i+1;j<10;j++)
   {
    if(h==1)
    {
     if(p[j]=='B')
     countb++;
    }
    else
    {
     if(p[j]=='R')
     countr++;
    }
  }
   if(h==1&&((blue+countb)%2)==0)
   {
    if(p[i]=='R')
    {
     res++;
    }
   }
   else
   {
    if(h==1)
    {
     if(p[i]=='B')
     {
      res++;
     }
    }
   }
   if(h==0&&(red+countr)%2==0)
   {
    if(p[i]=='B')
     res++;
   }
    else
   {
    if(h==0)
    {
     if(p[i]=='R')
      res++;
    }
   }
   if(p[i]=='B')
    blue++;
   else
    red++;
    i++;
    countb=0;
    countr=0;
 }
 cout<<res;
}
