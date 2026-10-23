import json

# with open('orders.json') as f:
#     buyurtmalar = json.load(f)

# eng_katta_summa = 0
# eng_zor_xaridor = ""
# for i in buyurtmalar:
#     jami = 0
#     for x in i['mahsulotlar']:
#         jami += x['narxi'] * x['soni']
    
#     print(f"{i['ism']}ning toplam xaridi: {jami} so'm")
    
#     if jami > eng_katta_summa:
#         eng_katta_summa = jami
#         eng_zor_xaridor = i['ism']

# print("-" * 30)
# print(f"Eng katta buyurtma: {eng_zor_xaridor} ({eng_katta_summa} so'n)")

# ===============================

# with open('menu.json') as f:
#     data=json.load(f)
#     lst=[]
#     for i in data:
#         if i['turi']=='Pizza':
#             lst.append(i['narxi'])
            
# maxx=(max(lst))
# minn=(min(lst))
# for i in data:
#     if maxx == i['narxi']:
#         print(f"Eng qimmat -> {i['nomi']}")
#     if minn ==i['narxi']:
#         print(f" Eng arzon bu -> {i['nomi']}")

# with open('tickets.json') as f:
#     lst=[]
#     sum=0
#     data=json.load(f)
#     for i in data:
#         if i['from']=='Tashkent':
#             lst.append(i['price'])
#             sum+=i['available_seats']
# maxx=max(lst)
# minn=min(lst)
# print(f"Eng arzon chipta narxi -> {minn}, Eng qimmati esa -> {maxx}")
# print(f"Jami toshkentdan ketadigan odamlar soni -> {sum}")


# with open('weather.json') as f:
#     data=json.load(f)
#     lst=[]
#     for i in data:
#         lst.append(i['temperature'])
# maxx=max(lst)
# minn=min(lst)
# ortacha=sum(lst)/len(lst)
# for i in data:
#     if maxx==i['temperature']:
#         print(f" ENG BLAND -> {i['city']}")
#     if minn==i['temperature']:
#         print(f" ENG PAST -> {i['city']}")
# print(f"o'rctacha harorat jami -> {ortacha}")


with open('students.json') as f:
    students = json.load(f)

print("--- 1. Barcha talabalar ---")
for i in students:
    print(f"ID: {i['id']}, Ismi: {i['name']}, Kurslari: {', '.join(i['courses'])}")

print("\n--- 2. 'Python' kursida o'qiyotgan talabalar ---")
python_students = [s for s in students if "Python" in s['courses']]
for i in python_students:
    print(f"- {i['name']}")

print("\n--- 3. Har bir kurs bo'yicha talabalar soni ---")
course_counts = {}
for i in students:
    for course in i['courses']:
        if course in course_counts:
            course_counts[course] += 1
        else:
            course_counts[course] = 1

for course, count in course_counts.items():
    print(f"{course}: {count} ta talaba")

