def get_max_cnt_char_substr(string):
    chars = []
    for i in range(255):
        chars.append(0)
    for ch in string:
        chars[ord(ch)] += 1
    mx = 0
    for item in chars:
        mx = max(mx, item)
    ans = []
    n = 0
    for i in range(255):
        if chars[i] == mx:
            ans.append(chr(i))
    return ans

def get_min_cnt_char_substr(string):
    chars = []
    for i in range(255):
        chars.append(0)
    for ch in string:
        chars[ord(ch)] += 1
    mn = 1e9
    for item in chars:
        if item > 0:
            mn = min(mn, item)
    ans = []
    for i in range(255):
        if chars[i] == mn:
            ans.append(chr(i))
    return ans
    
