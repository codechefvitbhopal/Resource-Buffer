x,y,z=input().split()
x,y,z=int(x),int(y),int(z)
vote=x-y

if z==0:
    if vote>0:
        print('+')
    elif vote<0:
        print('-')
    else:
        print('0')
else:
    if vote>0 and vote+z>0 and vote-z>0:
        print('+')
    elif vote<0 and vote+z<0 and vote-z<0:
        print('-')
    else:
        print('?')
