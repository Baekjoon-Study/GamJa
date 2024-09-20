N = input()
newN = ""
for i in range (len(N)) :
    if 65 <= ord(N[i]) <= 90 :
        newN += chr(32 + ord(N[i]))
    elif 97 <= ord(N[i]) <= 122 :
        newN += chr(ord(N[i]) - 32)
print(newN)
