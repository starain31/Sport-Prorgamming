import logging, sys

def snail(h, u, d, f):
    h *= 200
    print(h)
    d = (u-d)*200
    print(d)
    u = f*u
    print(u)
    n = 1
    l = 0

    while(True):
        l = (n+1)*(d-u*n)
        print(l)
        if(h < l  ):
            print("success on day ", n)
            break
        if(l <= 0):
            print("failure on day ", n+1)
            break
        n += 1
    return
#snail(6, 3, 1, 10)
snail(10,  2,  1,  50)
#snail(50 ,5 ,3 ,14)
#snail(50, 6, 4, 1)
#snail(50, 6, 3, 1)
#snail(1, 1, 1, 1)
