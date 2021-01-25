n = int(input("Input integer: "))

for i in range(1, n + 1):
    k = 1
    while ((i * i) % k < i):
        k *= 10
    if ((i * i) % k == i):
        print(i, i * i)
