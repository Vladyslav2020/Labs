from functions import *
string = input("Input string: ")
arr1 = get_max_cnt_char_substr(string)
arr2 = get_min_cnt_char_substr(string)
print("Maximum frequency of occurrence of characters: ")
for item in arr1:
    print(item, end=' ')
print()
print("Minimum frequency of occurrence of characters: ")
for item in arr2:
    print(item, end=' ')