def revense(num):
    revensed_num = 0
    while num > 0:
        revensed_num = revensed_num * 10 + (num % 10)
        num //= 10
    return revensed_num

A, B = map(int, input().split())
A = revense(A)
B = revense(B)
C = A + B
print(revense(C))