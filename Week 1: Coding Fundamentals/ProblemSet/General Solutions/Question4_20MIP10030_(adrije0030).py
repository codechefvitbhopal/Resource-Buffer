x='N0'
for i in range(int(input().strip().rstrip())):
    flag='YES'
    n=int(input())
    if n<2019:
        print('NO')
    else:
        x= 'YES' if n%2020<n/2020 else 'NO'
        print(x)
        
