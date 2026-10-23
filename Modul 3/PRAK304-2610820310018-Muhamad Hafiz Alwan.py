n = int(input())

if n == 0:
    print("Nol")
elif 1 <= n < 10:
    print("Satuan")
elif 10 <= n < 20:
    print("Belasan")
elif 20 <= n < 100:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")