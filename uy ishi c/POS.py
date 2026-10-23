# STREET HOT DOG — Terminal POS Kassa Tizimi

MENU = {
    1: {
        "kategoriya": "Qazili Hot-Dog",
        "turlar": {
            1: ("2x-Katta", 30000),
            2: ("Katta", 25000),
            3: ("O'rtacha", 20000),
            4: ("Kichkina", 15000),
        },
    },
    2: {
        "kategoriya": "Salatli Hot-Dog",
        "turlar": {
            1: ("2x-Katta", 37000),
            2: ("Katta", 25000),
            3: ("O'rtacha", 17000),
            4: ("Kichkina", 14000),
        },
    },
    3: {
        "kategoriya": "Hot-Let",
        "turlar": {
            1: ("Katta", 30000),
            2: ("Kichkina", 22000),
        },
    },
    4: {
        "kategoriya": "Gamburger",
        "turlar": {
            1: ("Gamburger", 22000),
            2: ("Chizburger", 25000),
            3: ("Dabl burger", 32000),
        },
    },
    5: {
        "kategoriya": "Coffee",
        "turlar": {
            1: ("Katta", 8000),
            2: ("Kichkina", 5000),
        },
    },
    6: {
        "kategoriya": "Salqin Ichimliklar",
        "turlar": {
            1: ("1.5 L", 17000),
            2: ("1 L", 12000),
            3: ("0.5 L", 8000),
        },
    },
}

QQS_STAVKA = 0.15


def menyuni_korsat():
    print("\n" + "=" * 50)
    print("         STREET HOT DOG — KASSA MENYUSI")
    print("=" * 50)
    for cat_id, cat_data in MENU.items():
        print(f"\n[{cat_id}] {cat_data['kategoriya'].upper()}")
        for sub_id, (tur, narx) in cat_data["turlar"].items():
            print(f"   {sub_id}. {tur:<15} - {narx:>7,} so'm".replace(",", " "))
    print("=" * 50)


def pos_tizimi():
    savat = []

    while True:
        menyuni_korsat()
        cat_tanlov = input(
            "\nKategoriya raqamini tanlang (Xaridni yakunlash uchun '0'): "
        ).strip()

        if cat_tanlov == "0":
            break

        if not cat_tanlov.isdigit() or int(cat_tanlov) not in MENU:
            print("❌ Noto'g'ri kategoriya kiritildi!")
            continue

        cat_id = int(cat_tanlov)
        kategoriya = MENU[cat_id]

        sub_tanlov = input(
            f"--> {kategoriya['kategoriya']} turini tanlang (1-{len(kategoriya['turlar'])}): "
        ).strip()
        if not sub_tanlov.isdigit() or int(sub_tanlov) not in kategoriya["turlar"]:
            print("❌ Noto'g'ri tur kiritildi!")
            continue

        sub_id = int(sub_tanlov)
        nomi, narx = kategoriya["turlar"][sub_id]

        try:
            miqdor = int(input(f"--> [{kategoriya['kategoriya']} ({nomi})] nechta bo'lsin? "))
            if miqdor <= 0:
                print("❌ Miqdor kamida 1 bo'lishi kerak.")
                continue
        except ValueError:
            print("❌ Faqat raqam kiriting.")
            continue

        to_liq_nomi = f"{kategoriya['kategoriya']} ({nomi})"
        savat.append({
            "nomi": to_liq_nomi,
            "narx": narx,
            "miqdor": miqdor,
            "jami": narx * miqdor,
        })
        print(f"✅ {to_liq_nomi} x{miqdor} savatga qo'shildi.")

    if not savat:
        print("\nXarid amalga oshirilmadi.")
        return

    sof_jami = sum(item["jami"] for item in savat)
    qqs_summa = sof_jami * QQS_STAVKA
    yakuniy_summa = sof_jami + qqs_summa

    print("\n" + "*" * 50)
    print("              STREET HOT DOG - CHEK")
    print("*" * 50)
    for item in savat:
        print(
            f"{item['nomi']:<30} x{item['miqdor']:<2} = {item['jami']:>10,} so'm".replace(
                ",", " "
            )
        )
    print("-" * 50)
    print(f"Oraliq jami:             {sof_jami:>12,.2f} so'm".replace(",", " "))
    print(f"QQS (15%):               {qqs_summa:>12,.2f} so'm".replace(",", " "))
    print("-" * 50)
    print(
        f"JAMI TO'LOV:             {yakuniy_summa:>12,.2f} so'm".replace(
            ",", " "
        )
    )
    print("*" * 50)
    print("        Yoqimli ishstaha! Yana kutib qolamiz!\n")


if __name__ == "__main__":
    pos_tizimi()