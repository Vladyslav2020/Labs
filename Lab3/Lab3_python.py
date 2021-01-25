eps = float(input("Enter number precision: "))

i = 1
x0 = 1
x1 = -2
sum = x0
while abs(x1 - x0) > eps:
    i += 1
    x0 = x1
    x1 = x0 * (-2) / i
    sum += x0

sum += x1
print("sum =", round(sum, 10))