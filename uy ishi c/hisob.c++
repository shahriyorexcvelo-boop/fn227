#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

const double AUTO_UZS_PRICE = 35990.0; // Standart UZS narx

string format_number(double num, int precision = 0)
{
    string str = to_string((long long)num);
    int n = str.length();
    string result = "";
    int count = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        result = str[i] + result;
        count++;
        if (count % 3 == 0 && i != 0)
        {
            result = "," + result;
        }
    }

    if (precision > 0)
    {
        long long fractional = abs((long long)(round(num * 100)) % 100);
        string frac_str = to_string(fractional);
        if (frac_str.length() < 2)
            frac_str = "0" + frac_str;
        result += "." + frac_str;
    }

    return result;
}

int main()
{
    cout << "============================================================" << endl;
    cout << " 📊 XARAJAT VA FOYDA HISOBLAGICHI" << endl;
    cout << "============================================================" << endl;

    double total_expenses_uzs = 0.0;
    double total_foiz_uzs = 0.0;
    int uzs_orders_count = 0;
    int usd_orders_count = 0;
    vector<string> expense_history;

    string choice;
    while (true)
    {
        cout << "\n--- Bo'limni tanlang ---" << endl;
        cout << "[1] UZS (35,990 so'mdan)" << endl;
        cout << "[2] USD (Dollar bo'limi)" << endl;
        cout << "[0] Hisoblash va yakunlash" << endl;
        cout << "Tanlov: ";
        cin >> choice;

        if (choice == "0")
            break;

        // 1. SO'MDAGI XARAJATLAR
        if (choice == "1")
        {
            int count = 0;
            cout << " 👉 UZS Buyurtmalar soni: ";
            if (!(cin >> count) || count <= 0)
            {
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }

            double sub_total = count * AUTO_UZS_PRICE;
            total_expenses_uzs += sub_total;
            uzs_orders_count += count;

            string item = "UZS Xarajat: " + to_string(count) + " ta × " + format_number(AUTO_UZS_PRICE) +
                          " so'm = " + format_number(sub_total) + " so'm";
            expense_history.push_back(item);

            cout << " ✅ " << count << " ta UZS zakaz qo'shildi (" << format_number(sub_total) << " so'm)" << endl;
        }
        // 2. DOLLARDAGI XARAJATLAR (Aynan shu yerda kurs so'raladi)
        else if (choice == "2")
        {
            int count = 0;
            double usd_price = 0.0;
            double usd_rate = 12800.0;

            cout << " 👉 Hozirgi USD kursini kiriting: ";
            if (!(cin >> usd_rate) || usd_rate <= 0)
            {
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }

            cout << " 👉 USD Buyurtmalar soni: ";
            if (!(cin >> count) || count <= 0)
            {
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }

            cout << " 👉 Har bir buyurtma narxi ($ USD): ";
            if (!(cin >> usd_price) || usd_price <= 0)
            {
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }

            double sub_total_usd = count * usd_price;
            double uzs_converted = sub_total_usd * usd_rate;

            double foiz_farq = uzs_converted - (count * AUTO_UZS_PRICE);
            if (foiz_farq < 0)
                foiz_farq = 0;

            total_expenses_uzs += uzs_converted;
            total_foiz_uzs += foiz_farq;
            usd_orders_count += count;

            string item = "USD Xarajat (Kurs: " + format_number(usd_rate) + "): " + to_string(count) +
                          " ta × $" + format_number(usd_price, 2) + " = $" + format_number(sub_total_usd, 2) +
                          " (" + format_number(uzs_converted) + " so'm) | Foiz: " + format_number(foiz_farq) + " so'm";
            expense_history.push_back(item);

            cout << " 📈 So'mda: " << format_number(uzs_converted) << " so'm" << endl;
            cout << " 💸 Foizga ketdi (35,990 so'mdan ortiqchasi): " << format_number(foiz_farq) << " so'm" << endl;
        }
    }

    int total_orders_count = uzs_orders_count + usd_orders_count;
    if (total_expenses_uzs == 0)
        return 0;

    cout << "\n🔹 SOTISH (Jami zakazlar: " << total_orders_count << " ta)" << endl;
    double sell_price_per_item;
    cout << "👉 1 ta zakazning sotilish narxi (so'mda): ";
    cin >> sell_price_per_item;

    double total_revenue_uzs = total_orders_count * sell_price_per_item;
    double net_profit_uzs = total_revenue_uzs - total_expenses_uzs;

    cout << "\n============================================================" << endl;
    cout << " 📜 YAKUNIY HISOBLASH VA HISOBOT" << endl;
    cout << "============================================================" << endl;

    for (size_t i = 0; i < expense_history.size(); ++i)
        cout << "  " << (i + 1) << ". " << expense_history[i] << endl;

    cout << "------------------------------------------------------------" << endl;
    cout << "🔴 JAMI XARAJAT (So'mda)    : " << format_number(total_expenses_uzs) << " so'm" << endl;
    cout << "🔥 SHUNDAN FOIZGA KETTI      : " << format_number(total_foiz_uzs) << " so'm" << endl;
    cout << "🟢 JAMI TUSHUM (SOTUV)      : " << format_number(total_revenue_uzs) << " so'm" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "💡 SOF FOYDA                : " << format_number(net_profit_uzs) << " so'm" << endl;
    cout << "============================================================" << endl;

    return 0;
}