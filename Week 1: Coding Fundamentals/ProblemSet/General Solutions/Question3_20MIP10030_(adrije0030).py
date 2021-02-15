n=int(input().strip().rstrip())
lst=list(map(int,input().split()))

print(int(((n*(n+1))/2)-sum(lst)))
