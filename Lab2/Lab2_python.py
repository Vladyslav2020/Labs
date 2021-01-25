# Given real numbers x, y.
# Determine whether the point with coordinates (x, y)
# belongs to the shaded part of the plane

x = float(input("Enter coordinate of first point: "))  # first coordinate of point
y = float(input("Enter coordinate of second point: ")) # second coordinate of point

if abs(x) >= y ** 2 and abs(y) >= x ** 2:
    print("Belongs")
else:
    print("Does not belong")