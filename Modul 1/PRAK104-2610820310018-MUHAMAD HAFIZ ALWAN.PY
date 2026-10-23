shoes_a = 400000
shoes_b = 350000

discount_a = 13
discount_b = 21

price_a_discount = int(shoes_a - (shoes_a * discount_a / 100))
price_b_discount = int(shoes_b - (shoes_b * discount_b / 100))

print(f"Harga sepatu A adalah {shoes_a}")
print(f"Harga sepatu B adalah {shoes_b}")
print(f"Sepatu A mendapat diskon {discount_a}% sehingga harganya menjadi {price_a_discount}")
print(f"Sepatu B mendapat diskon {discount_b}% sehingga harganya menjadi {price_b_discount}")