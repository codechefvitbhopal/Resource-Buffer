for i in range(int(input().rstrip())):
    N,M,K=list(map(int,input().split()))
    diff=abs(N-M)
    if K-diff>=0:
        print('0')
    else:
        print(abs(K-diff))
