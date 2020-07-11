def solve():
    a, b = 1, 2
    result = 2
    while True:
        t = a + b
        if t % 2 == 0:
            result += t
        if t > 4000000:
            break
        a, b = b, t
    return result

print(solve())