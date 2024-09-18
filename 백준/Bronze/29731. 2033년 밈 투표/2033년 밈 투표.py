N = int(input())
List = ["Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", "Never gonna make you cry", "Never gonna say goodbye", "Never gonna tell a lie and hurt you", "Never gonna stop"]

count = 0
for i in range(N) :
    M = input()
    for j in range(7) :
        if M == List[j] :
            count += 1
            break;

if count != N :
    print("Yes")
elif count == N :
    print("No")
