N = input()

while (N != "0") :
    count = 0
    for i in range(len(N)//2) :
        if N[i] == N[len(N)-i-1] :
            count += 1
        else :
            break;
    if count == len(N)//2 :
        print("yes")
    else :
        print("no")
    N = input()
