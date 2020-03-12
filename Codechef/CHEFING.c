problem link--> https://www.codechef.com/FEB19B/problems/CHEFING/

#include<stdio.h>
#include<string.h>
void quicksort(char S[],int li,int hi)
{
	int l=li;
	int h=hi;
	char pivot=S[(li+hi)/2];
	while(l<=h)
	{
	while(S[l]<pivot)
	l++;
	while(S[h]>pivot)
	h--;
	if(l<=h)
	{
		
		char temp=S[l];
		S[l]=S[h];
		S[h]=temp;
		h--;l++;
		
	}
	}
	if(li<h)
	quicksort(S,li,h);
	if(l<hi)
	quicksort(S,l,hi);
	}
int main() 
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
     int n,i,l,j,k,sum;
     scanf("%d\n",&n);
     char s[300],a[28]={0};
     for(i=0;i<n;i++)
     {
         scanf("%s\n",s);
         l=strlen(s);
         quicksort(s,0,l-1);
         for(j=0;j<l;j++)
         {   if(j==0)
             a[s[j]-97]+=1;
             else
             {
               if(s[j]!=s[j-1])
                a[s[j]-97]+=1;
             }
         }
     }
     sum=0;
    for(k=0;k<26;k++)
    {
        if(a[k]==n)
        sum++;
    }
    printf("%d\n",sum);
 }
     return 0;
}
