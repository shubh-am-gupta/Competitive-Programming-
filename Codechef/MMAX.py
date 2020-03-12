problem link--> https://www.codechef.com/JULY19B/problems/MMAX

t=int(input())
while t>0:
    n=int(input())
    k=int(input())
    k=k%n;
    if n%2==0:
        if k*2<n:
            print(k*2)
        elif k*2==n:
            print(n-1)
        else:
            print((n-k)*2)
    else:
        if k*2<n:
            print(k*2)
        elif k*2==n+1:
            print(n-1)
        else:
            print((n-k)*2)
    t-=1
   
