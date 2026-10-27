a, b = map(int, input().split())

if a < b:
    i = a
    j = b
    while i <= b and j >= a:
        print(f"{i} {j}", end="" if i == b else "-")
        i += 1
        j -= 1
else:
    i = a
    j = b
    while i >= b and j <= a:
        print(f"{i} {j}", end="" if i == b else "-")
        i -= 1
        j += 1
print()