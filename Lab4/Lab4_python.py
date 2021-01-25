x = float(input("Input float number x: "))
n = int(input("Input integer number n: "))

elem0 = x
s = 0

for i in range(1, n + 1):
    s += elem0
    elem0 *= x * i / (-i - 1)

print("sum =", round(s, 4))