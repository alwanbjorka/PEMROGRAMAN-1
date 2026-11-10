def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b
    

bilangan = int(input())
nilai_lish = list(map(int,input().split()))

maks = -100000
minim = 100000

for nilai in nilai_lish:
    maks = maksimal (maks, nilai)
    minim = minimal (minim, nilai)

print(f"{maks} {minim}")