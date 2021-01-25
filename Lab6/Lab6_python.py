def sum_of_divisers(n):
    sum = 0
    for i in range(1, n):
        if n % i == 0:
            sum += i
    return sum

n = int(input("Input integer n: "))
for i in range(1, n + 1):
    number = sum_of_divisers(i)
    if (number <= n and sum_of_divisers(number) == i):
        print(number, i)


