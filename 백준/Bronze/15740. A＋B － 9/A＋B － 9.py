a, b = input().split()

m = 0

# a의 가중치 합산
for i in range(len(a)):
    m += int(a[i]) * 10 ** (len(a)-(i + 1))  # 자리수에 따라 가중치 부여

# b의 가중치 합산
for j in range(len(b)):
    m += int(b[j]) * 10 ** (len(b)-(j + 1))  # 자리수에 따라 가중치 부여

print(m)
