n = int(input())
res = input()

m = 0
for i in range (n//2) :
    if res[i] != res[n-i-1] :
        m += 1

print(m)
