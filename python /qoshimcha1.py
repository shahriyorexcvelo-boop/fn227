# talaba = {
# "ism": "Aziz",
# "yosh": 16,
# "sinf": "9-A"}
# print(talaba["ism"])
# =============================
# narxlar = {"Non": 3500, "Sut": 9000, "Tuxum": 1200}
# maxsulot=input('qaysi mahsulot? ').capitalize()
# if maxsulot in narxlar:
#     print(f" Siz soragan maxsulot 👉 {narxlar[maxsulot]}")
# else:
#     print(f"❌Uzur hozirda bunday mahsulot mavjud emas❌")

# =============================
# print("\nKONTAKTLAR\n")
# dct={'vali': 970278770}
# dct['malika']=98900000
# print(dct)
# print("\n")

# =============================
#   !!!!!!! azgina kuchaytirdu !!!!!!!
# narxlar = {"Yog'": 15000,"Guruch": 12000}
# print("\nMavjud bo'lim\n")
# print("Yog' narxini ozgartirish (kod)-> 1 ")
# print("Yangi Mahsulot qoshish (kod)-> 2")
# print("Mavjud Mahsulotlar (kod)-> 3\n ")
# kod=int(input("Kod 👉 "))
# if kod==3:
#     print(narxlar)
    
# if kod==2:
#     new=input("Yangi mahsulot nomi -> 🍔 ")
#     narx=int(input("Narxi -> 💰 "))
#     narxlar[new]=narx
# if kod == 1:
#     narxlar["Yog'"] = int(input("Yangi narx 👉 ﹩ "))


# print("\n YANGI NARXLAR📢\n")
# print(narxlar, end="\n")



# =============================
# xodimlar = {"Sardor": "Haydovchi","Laylo": "Buxgalter"}
# delate=input("Qaysi xodimni ochirmoqchisiz -> ").capitalize()
# del xodimlar[delate]
# print(f"Yangi natija -> {xodimlar}")

# =============================
# lugat = {"ism": "Olim","telefon": "901112233"}
# soz=input("Qaysi ma'lumot olmoqchisiz nomi -> ")
# print(soz in lugat)

# =============================
# talaba = {"ism": "Dilnoza","yosh": 15,"sinf": "8-B"}
# print(tuple(talaba.keys()))

# =============================
# savat = {"Olma": 3,"Banan": 5,"Uzum": 2}
# name=input("qaysi mahsulot narxi kerak -> ")
# print(list(savat.values()[name]()))

# =============================
# sozlamalar = {"mavzu": "qorong'u"}
# print(sozlamalar.get("Kalit", "abcd123"))

# =============================
# oila = {
# "Ota": 45,
# "Ona": 42,
# "Aka": 19}
# for i,q in oila.items():
#     print(f"{i} -> {q} ")

# =============================
# kitob = {
# "nomi": "Yulduzlar yo'li",
# "muallif": "N.Aliyev"}

# age=int(input("Yilini kiriting" ))
# kitob["nashr yili"]=age
# print(kitob)

# =============================
# xarid = {
# "Non": 3500,
# "Sut": 9000,
# "Choy": 15000
# }
# print(sum(xarid.values()))

# =============================
# lugat = {
# "a": 1,
# "b": 2,
# "c": 3,
# "d": 4
# }
# print(len(lugat))

# =============================
# bosh={}
# n=int(input("Nechta qiymat berasan -> "))
# for i in range(1,n+1):
#     key=input("Kalit -> ")
#     son=int(input("Son -> "))
#     bosh[key]=son
# print(bosh)

# =============================
# asl = {
# "holat": "faol"
# }
# new=asl.copy()
# new["holat"]=input("Holati qanday bolsin -> ")
# print(f"Oldingi holat -> {asl}")
# print(f"Yangi holat -> {new}")

# =============================
# telefon_kitobi = {
#     "Olim": "901234567",
#     "Gulnora": "993332211"
# }

# qidiruv = input("Kim kerak 👉 ").capitalize()

# if qidiruv in telefon_kitobi:
#     natija = telefon_kitobi[qidiruv]
#     print(natija)
# else:
#     print("❌ topilmadi")

# =============================
# toy_royxati = {
# "Ali": True,
# "Vali": False,
# "Guli": True,
# 'sardor': True,
# 'Rano❤️': True,
# 'Mr Beast': False}
# print(f"Toyga kelganlar -> {list(toy_royxati.values()).count(True)}")
# print(f"Toyga kelmaganlar -> {list(toy_royxati.values()).count(False)}")

# =============================
# aholi = {
# "Samarqand": 560000}
# print("ASSALOMU ALEYKUM")
# print("\nNew city -> 1 ")
# print("Mavjud aholi sonini oshirish -> 2 \n")
# kod=int(input("👉 "))
# if kod ==1:
#     newcity=input("Nomi -> ")
#     people=int(input("soni -> "))
#     aholi[newcity]=people
# if kod ==2:
#     new=input("Mavjud shahar nomi -> ").capitalize()
#     n=int(input("Yangi aholi soni -> "))
#     past=aholi[new]
#     print(f"Oldingi soni -> {past}")
#     aholi[new]=aholi[new]+n
# print(aholi)

# =============================
# baholar = {
# "Ali": 87,
# "Vali": 92,
# "Guli": 95
# }
# maxx=max(baholar, key=baholar.get)
# minn=min(baholar, key=baholar.get)
# scoremax=baholar[maxx]
# scoremin=baholar[minn]
# print(f"Eng yuqori -> {maxx} -> {scoremax}")
# print(f"Eng past -> {minn} -> {scoremin}")

# =============================
# narxlar = {
# "Telefon": 2500000,
# "Quloqchin": 150000,
# "Simkarta": 10000
# }
# print(f"Eng arzon -> {min(narxlar, key=narxlar.get)}")
# print(f"Eng qimmat -> {max(narxlar,key=narxlar.get)}")

# =============================
# matn="Rano zilola Rano zilola soliha Rano"
# sozc={}
# for i in matn.split():
#     sozc[i]=sozc.get(i, 0)+1
# print(sozc)

# =============================
# dokon1 = {"Non": 6000, "Sut": 9000}
# dokon2 = {"Sut": 9500, "Tuz": 2000}
# umumiy = {**dokon1, **dokon2}
# print(umumiy)

# =============================
# baholar = {"Ali": 70,"Vali": 95,"Guli": 85}
# n=sorted(baholar.items(),key=lambda x:x[1],reverse=True)
# print(n)

# =============================
# baholar = {
# "Matematika": [80, 90, 70],
# "Fizika": [60, 70]}
# new={}
# for i,q in baholar.items():
#     new[i]=sum(q)/len(q)
# print(new)

# =============================
# xodimlar_maosh = {
# "Olim": 2500000,
# "Dilshod": 4200000,
# "Kamol": 3500000}
# new={}
# for i,q in xodimlar_maosh.items():
#     if q>3000000:
#         new[i]=q
# print(new)

# =============================
# name = ["Rano", "Zilola", "Soliha"]
# age = [18, 17, 17]
# natija = dict(zip(name, age))
# print(natija)

# =============================
# talaba = {
# "name": "Aziz",
# "location": {"city": "Buxoro","street": "Istiqlol"}
# }
# print(talaba["location"]["street"])

# =============================
# hson={}
# soz=input()
# for harf in soz:
#     hson[harf]=hson.get(harf, 0)+1
#     maxx=max(hson, key=hson.get)
# print(maxx,"-", hson[maxx])

# =============================
# xarajatlar = {"Oziq-ovqat": 400000, "Transport":150000, "Ko'ngilochar": 500000}
# test=sum(xarajatlar.values())>1000000
# print(test)

# =============================
# a = {"a": 1, "b": 2, "c": 3}
# b = {"b": 5, "c": 6, "d": 7}
# natija=a.keys() & b.keys()
# print(natija)

# =============================
# harorat={'Dushanba': 21}
# soz=input().capitalize()
# if soz not in harorat.keys():
#     c=int(input("bunday kun yoq new harorat ber -> "))
#     harorat.setdefault(soz, c)
# else:
#     new=int(input("yangi harorat -> "))
#     harorat[soz]=new
# print(harorat)

# =============================
# hafta1 = {"Choy": 30, "Qand": 20}
# hafta2 = {"Choy": 45, "Qand": 15}
# for i in hafta1:
#     farq=hafta2[i]-hafta1[i]
#     print(farq)

# =============================
# natijalar = {"Ali": {"Mat": 80, "Fiz": 90},"Vali": {"Mat": 95, "Fiz": 85}}
# for i, q in natijalar.items():
#     ortacha=sum(q.values())/len(q)
# print(ortacha)

# =============================
# a = [
#     {"mijoz": "Ali", "summa": 50000},
#     {"mijoz": "Vali", "summa": 30000},
#     {"mijoz": "Ali", "summa": 20000}
# ]
# b = {}
# for i in a:
#     c = i["mijoz"]
#     if c not in b:
#         b[c] = {"soni": 0, "summa": 0}
#     b[c]["soni"] += 1
#     b[c]["summa"] += i["summa"]
# print(b)

# =============================
# a = [{"kun": "Dush", "xabarlar": 12}, {"kun": "Sesh", "xabarlar": 5}, {"kun": "Dush", "xabarlar": 8}]
# b = {}
# for i in a:
#     b[i["kun"]] = b.get(i["kun"], 0) + i["xabarlar"]
# c = max(b, key=b.get)
# print(c, "-", b[c])

# =============================
# a = [{"mahsulot": "Vint", "tur": "kirim", "soni": 100}, {"mahsulot": "Vint", "tur": "chiqim", "soni": 30}, {"mahsulot": "Somon", "tur": "kirim", "soni": 50}]
# b = {}
# for i in a:
#     c = 1 if i["tur"] == "kirim" else -1
#     b[i["mahsulot"]] = b.get(i["mahsulot"], 0) + c * i["soni"]
# print(b)

# =============================
# a = ["Ali", "Vali", "Guli", "Sanjar"]
# b = ["Vali", "Dilnoza", "Sanjar"]
# c = set(a) - set(b)
# d = set(b) - set(a)
# print(c)
# print(d)

# =============================
# a = {"Ali": 6, "Vali": 10, "Guli": 5}
# b, c = [], []
# for i, q in a.items():
#     (b if q < 8 else c).append(i)
# print("Zaif:", b)
# print("Kuchli:", c)

# =============================
# a = {"Pitsa": 45000, "Cola": 8000}
# b = {"mahsulotlar": {"Pitsa": 2, "Cola": 1}, "masofa_km": 5}
# c = sum(a[i] * q for i, q in b["mahsulotlar"].items())
# c += b["masofa_km"] * 2000
# print(c)

# =============================
# a = [("Ali", "a@mail.uz"), ("Vali", "b@mail.uz"), ("Guli", "a@mail.uz")]
# b = {}
# for i, q in a:
#     b.setdefault(q, []).append(i)
# c = {i: q for i, q in b.items() if len(q) > 1}
# print(c)

# =============================
# a = {"Ali": [("Dush", "9:00"), ("Sesh", "10:00")], "Vali": [("Dush", "9:00")], "Guli": [("Chor", "9:00")]}
# b = ("Dush", "9:00")
# c = [i for i, q in a.items() if b in q]
# print(c)

# =============================
# a = {"Ali": 90, "Vali": 70, "Guli": 50, "Sardor": 88}
# b = {"a'lo": [], "yaxshi": [], "qoniqarsiz": []}
# for i, q in a.items():
#     if q >= 85:
#         b["a'lo"].append(i)
#     elif q >= 60:
#         b["yaxshi"].append(i)
#     else:
#         b["qoniqarsiz"].append(i)
# print(b)

# =============================
# a = {"Ali": {"haftal": 4, "hafta2": 5}, "Vali": {"haftal": 5, "hafta2": 3}, "Guli": {"haftal": 4, "hafta2": 4}}
# b = {}
# for i, q in a.items():
#     if q["hafta2"] > q["haftal"]:
#         b[i] = "o'sdi"
#     elif q["hafta2"] < q["haftal"]:
#         b[i] = "kamaydi"
#     else:
#         b[i] = "o'zgarmadi"
# print(b)

# =============================
# a = {"Krossovka": 300000, "Shlyapa": 80000, "Sumka": 150000}
# b = {"Krossovka": 10, "Sumka": 20}
# c = {}
# for i, q in a.items():
#     d = b.get(i, 0)
#     c[i] = q - (q * d // 100)
# print(c)

# =============================
# a = [["Non", "Sut"], ["Non", "Tuxum", "Sut"], ["Choy", "Non"]]
# b = {}
# for i in a:
#     for q in set(i):
#         b[q] = b.get(q, 0) + 1
# print(b)

# =============================
# a = {"A-sex": {"Dush": 120, "Sesh": 150}, "B-sex": {"Dush": 100, "Sesh": 200}}
# b = {i: sum(q.values()) for i, q in a.items()}
# c = max(b, key=b.get)
# print(b)
# print("Eng samarali:", c)




















