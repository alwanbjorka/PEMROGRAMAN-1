n, kelipatan = map(int, input().split())
total_seluruhnya = 0

for i in range(1, n + 1):
    total_baris = 0
    for j in range(i, 0, -1):
        print(f"({j}*{kelipatan})", end="")
        if j > 1:
            print("+", end="")
        total_baris += j * kelipatan
    print(f" = {total_baris}")
    total_seluruhnya += total_baris

print(total_seluruhnya)