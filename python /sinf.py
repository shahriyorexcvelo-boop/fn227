# n=int(input())
# lst = [1, 2, 33, 5, 6, 7, 7]
# for i,q in enumerate(lst):




# ===============================
# lst = [1, 4, 6, 8]
# new=[]
# for i in lst:
#     new.append(i*2)
# print(new)
# =======================
# lst = [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
# new=[]
# for tpl in lst:
#     tpl=list(tpl)
#     tpl[-1]=100
#     new.append(tuple(tpl))
# print(new)
# ==========================
# lst = [(), (), ('',), (), ('a', 'b'), (), ('a', 'b', 'c'), (), ('d',)]
# new=[]
# for tpl in lst:
#     if len(tpl)>0:
#         new.append(tpl)
# print(new)
# =============================
# lst = [('item1', '12.20'), ('item2', '15.10'), ('item3', '24.5')]
# natija=sorted(lst,key=lambda x: float(x[1]), reverse=True)
# print(natija)
# ===========================
# s = "python 3.0"
# new=[]
# for i in s:
#     new.append(i)

# print(tuple(new))
# ==========================
# lst = [1, 2, 3, 4]
# p = input()
#  new=[]
# for i in lst:
#     new.append(f"{i}{p}")
# print(new)
# ===================
# gap = "salom azizaaaaaaa qalaysan"
# a=gap.split()
# natija=sorted(a,key=len)
# print(natija)
# ======================== = = = 
# lst = [12, 'salommm', 4.5, 'dunyom', True]
# work=[]
# for i in lst:
#     if type(i)==str:
#         work.append(i)
# natija=sorted(work,key=len)
# print(natija)
# =========== = = = ====
# tpl = (-3, 5, 0, 9, -1, 4)
# newtpl=[]
# tpl=list(tpl)
# for i in tpl:
#     if i>0:
#         newtpl.append(i)
# print(tuple(newtpl))
# =================
# lst = ['salom', 23, 'dunyo', 5, 100, 'python']
# newint=[]
# newstr=[]
# for i in lst:
#     if type(i)==str:
#         newstr.append(i)
#     if type(i)==int:
#         newint.append(i)
# sitrings=sorted(newstr,key=len)
# numbers=sorted(newint,reverse=True)
# print(f"strings -> {sitrings}")
# print(f"numbers -> {numbers}")
# ===== = ============ ==
# lst = [(3, 10), (1, 20), (2, 30)]
# natija = sorted(lst, key=lambda x: x[0])
# print(natija)
# ==================
# lst = [1, 2, 3, 4]
# new=[]
# for i in lst:
#     new.append(i**2)
# print(new)
# ===================
# lst = ['salom', 'dunyo', 'python']
# new=[]
# for i in lst:
#     new.append(i.capitalize())
# print(new)
# =====================
# tpl = (1, 2, 3, 4, 5)
# print(sum(tpl))
#======================
# lst=["Anvar", "Laylo", "Aziz", "Shahzod"] 
# for i in lst:
#     if i[0]=='A':
#         print(f"{i} -> OLMACHA")
#     else:
#         print(f"{i} -> KONFET")
# =================
# lst=[("Hasan", 20), ("Husan", 65)] 
# for tpl in lst:
#     tpl=list(tpl)
#     if tpl[1]>60 or tpl[1]<7:
#         print(f"{tpl[0]} -> BEPUL")
#     else:
#         print(f"{tpl[0]} -> toliq narx")
# ===========
# lst=[("Aziza", "bor"), ("Sanjar", "yo'q"),("Lola", "bor")]
# k=0
# k1=[]
# for i in lst:
#     i=list(i)
#     if i[1]=="yo'q":
#         k+=1
#         k1.append(i[0])
# print(f"Kelmaganlar -> {k}\nKelmagan -> {k1}")
# ==================
# lst=[("Non olish", True), ("Kitob o'qish", False),("Sport", False)]
# new=[]
# for i in lst:
#     if i[1]==False:
#         new.append(i[0])
# print("\nBajarilmagan ishlar\n")
# for x in new:
#     print(x)
# ==================
# lst=[("Olma", 25), ("Banan", 4), ("Uzum", 9)] 

# for i in lst:
#     if i[1]<10:
#         print(f"{i[0]} -> Kam qoldi")
#     else:
#         print(f"{i[0]} -> Yetarli")
# ==================
# import random
# bekat=("Markaz", "Bozor", "Stadion", "Universitet","school","narxoz") 
# tasodif=random.randint(0,len(bekat)-1)
# print(f"BUGUNI BEKAT -> {bekat[tasodif]}")
# ==========
# lst=[("Aziz", 78), ("Laylo", 105), ("Sanjar", 60)]
# zor=lst[0]
# for i in lst:
#     if i[1]>zor[1]:
#         zor=i
# print(f"Eng yaxshi talaba -> {zor}")
# =====  == = == = ==. == = = == = = = = 
# lst = ["S","M","M","L","S","S"]
# harf=input().upper()

# jami = 0
# for soz in lst:
#     jami += soz.count(harf)

# print(f"'{harf}' harfi jami: {jami} ta")
# ===============
# import random

# belgilar = ["a", "b", "7", "k", "9", "z", "3"]

# parol = []
# for i in range(6):
#     parol += random.choice(belgilar)

# print(f"Yaratilgan parol: {parol}")
# ========================
# oyinchilar = [("Botir", 5), ("Shoh", 8), ("Jamshid", 8)]

# eng_kop_gol = 0
# for ism, gol in oyinchilar:
#     if gol > eng_kop_gol:
#         eng_kop_gol = gol
# yetakchilar = []
# for ism, gol in oyinchilar:
#     if gol == eng_kop_gol:
#         yetakchilar.append(ism)
# print(f"Eng ko'p gol: {eng_kop_gol}")
# print(f"Yetakchilar: {', '.join(yetakchilar)}")
# =================================== 
# mijozlar = [("Olim", False), ("Dilbar", True), ("Sardor", False), ("Kamila", True)]

# vip_royxat = []
# oddiy_royxat = []


# for ism, vip_mi in mijozlar:
#     if vip_mi:
#         vip_royxat.append(ism)
#     else:
#         oddiy_royxat.append(ism)


# yangi_navbat = vip_royxat + oddiy_royxat


# print(f"Yangi navbat: {', '.join(yangi_navbat)}")
# ==========================
# lst=[("Qalam", 30), ("Daftar", 0)]
# for i in lst:
#     if i[1]==0:
#         print(f"Qolmagan -> {i}")
#     else:
#         print(f"Bor -> {i}")
# ===============














































