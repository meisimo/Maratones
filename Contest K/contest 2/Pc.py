threePow = [1]*64
for i  in range(1,64):
    threePow[i] = threePow[i-1]*3



while True:
    n = input()
    
    n = int(n)

    if n==0:
        break
    if n==1:
        print("{ }")
        continue

    n   = n - 1
    bit  = 0
    subset = 0
    ans = []
    out = "{ "

    while subset <= n:
        subset = 1<<bit
        if subset&n:
            out += str(threePow[bit]) + ", "
        bit += 1
        
    print( out[0:-2] + " }" )

""" 
1
7
14
783
1125900981634049
0
 """