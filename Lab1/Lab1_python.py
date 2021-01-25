import math

# checking a string for a number
def is_number(str):
    fl1 = False
    fl2 = False
    for ch in str:
        if not fl2:
            if ch != '-' and not ch.isdigit():
                return False
            fl2 = True
        elif ch == '.' and fl1 == False:
            fl1 = True
        elif ch == '.':
            return False
        elif not ch.isdigit():
            return False
    return True

# convert a given angle from a degree to a radian

a = input("Enter the angle value in degrees: ")  # angle in degrees
if not  is_number(a):
    print("Incorrect data")
else:
    a = float(a)
    b =  a * math.pi / 180    # angle in radians
    print("The value of this angle in radians is:", round(b, 4))