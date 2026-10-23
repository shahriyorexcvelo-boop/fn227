# def format_date(date_str: str) -> str:
#   lst = [
#       "",
#       "Yanvar",
#       "Fevral",
#       "Mart",
#       "Aprel",
#       "May",
#       "Iyun",
#       "Iyul",
#       "Avgust",
#       "Sentyabr",
#       "Oktyabr",
#       "Noyabr",
#       "Dekabr",
#   ]
#   kun,oy,yil=date_str.split(".")
#   kun=int(kun)
#   oy=lst[int(oy)]
#   return f"{kun} {oy} {yil} yil "
# print(format_date(input('sana kiriting -> ')))
# =========================================================
# def get_top_user(data: list[tuple[str, int]]) -> str:
#   scores = {}

#   for user_id, ball in data:
#     if user_id in scores:
#       scores[user_id] += ball
#     else:
#       scores[user_id] = ball
#   top_user = max(scores, key=scores.get)
#   return top_user

# data = [("user1", 50), ("user2", 60), ("user1", 40), ("user3", 30)]
# print(get_top_user(data))
# =======================================================
# def max_movies_to_watch(movies:list[tuple]) -> list:
#     natija = []
#     for i, kino in enumerate(movies[:-1]):
#         lst = [kino]
#         for x in movies[i+1:]:
#             if lst[-1][-1] <= x[0]:
#                 lst.append(x)
#         if len(natija) < len(lst):
#             natija = lst.copy()
#     return len(natija), natija


# movies =  [(2, 4), (0, 2), (4, 6), (6, 8)]
# print(max_movies_to_watch(sorted(movies)))

# =========================================================
mahsulotlar = {
    "telefon🍏": 2500000,
    "noutbuk💻": 4500000,
    "quloqchin": 150000,
    "sichqoncha🖱️": 100000,
    "klaviatura⌨️": 300000,
    "smart-soat⏱️": 700000,
    "powerbank🔌": 200000,
}

buyurtmalar_tarixi = []

def buyurtma_ber(nomi: str, miqdor_str: str):
  try:
    if nomi not in mahsulotlar:
      raise ValueError("Xatolik: Bunday mahsulot mavjud emas!")
    miqdor = int(miqdor_str)
    if miqdor <= 0:
      raise ValueError("Xatolik: Miqdor 0 dan katta bo'lishi shart!")

  except ValueError as e:
    print(f"❌ {e}")
    return None
  else:
    narx = mahsulotlar[nomi]
    jami = narx * miqdor
    chegirma = 0
    if jami > 500000:
      chegirma = jami * 0.10
      tolov = jami - chegirma
    else:
      tolov = jami
    buyurtma = {
        "mahsulot": nomi,
        "miqdor": miqdor,
        "jami": int(jami),
        "chegirma": int(chegirma),
        "tolov": int(tolov),
    }
    return buyurtma
  finally:
    print("-" * 40)

while True:
  print("\n🛒 MAVJUD MAHSULOTLAR:")
  for m, n in mahsulotlar.items():
    print(f"  - {m}: {n:,} so'm")

  print("-" * 40)
  kiritilgan_nom = input("Mahsulot nomi: ").strip().lower()
  kiritilgan_miqdor = input("Miqdor: ").strip()
  natija = buyurtma_ber(kiritilgan_nom, kiritilgan_miqdor)

  if natija:
    buyurtmalar_tarixi.append(natija)
    print(f"Jami: {natija['jami']:,} so'm")
    print(
        f"Chegirma: {natija['chegirma']:,} so'm"
        f" ({'10%' if natija['chegirma'] > 0 else '0%'})"
    )
    print(f"To'lov: {natija['tolov']:,} so'm")
    print("✅ Buyurtma muvaffaqiyatli!")
  qimmatlar = list(
      filter(lambda item: item[1] > 200000, mahsulotlar.items())
  )
  davom = input("\nYana buyurtma qilmoqchimisiz? (ha/yo'q): ").strip().lower()

  if davom != "ha":
    print("\nDastur yakunlandi. Xaridingiz uchun rahmat!")
    break






