#include<iostream>
#include<fstream>
#include<cstring>
#include<sstream>
using namespace std;
class Nothing {};
class Admin
{
protected:
    string lineinfile;
    int count = 1;
public:
    void data1()
    {
        ifstream file("Base.txt");
            if (file.is_open())
            {
                while (!file.eof())
                {
                    file >> lineinfile;
                    cout<<lineinfile<<endl;
                }
            }
    }
    void data2()
    {
        ifstream file("Tarif.txt");
            if (file.is_open())
            {
                while (!file.eof())
                {
                    file >> lineinfile;
                    cout<<lineinfile<<endl;
                }
            }
    }
    void data3()
    {
        ifstream file("Balance.txt");
            if (file.is_open())
            {
                while (!file.eof())
                {
                    file >> lineinfile;
                    cout<<lineinfile<<endl;
                }
            }
    }
    void data4()
    {
        ifstream file("Package.txt");
            if (file.is_open())
            {
                while (!file.eof())
                {
                    file >> lineinfile;
                    cout<<lineinfile<<endl;
                }
            }
    }
    void data5()
    {
        ifstream file("Minutes.txt");
            if (file.is_open())
            {
                while (!file.eof())
                {
                    file >> lineinfile;
                    cout<<lineinfile<<endl;
                }
            }
    }
    void data6()
    {
        ifstream file("SMS.txt");
            if (file.is_open())
            {
                while (!file.eof())
                {
                    file >> lineinfile;
                    cout<<lineinfile<<endl;
                }
            }
    }
    void data7()
    {
        ifstream file("Service.txt");
            if (file.is_open())
            {
                while (!file.eof())
                {
                    file >> lineinfile;
                    cout<<lineinfile<<endl;
                }
            }
    }
};
class Account
{
protected:
    string code, phone_number, password, checkline, money_converter;
public:
    //TO SET A USER
    void setcode()
    {
        while (true)
        {
            system("clear");
            cout << "\tChoose your company\n\t[1] BEELINE\n\t[2] UMS\n\t[3] UZMOBILE\n\t[4] UCELL\n\t[5] MOBIUZ\n\t[6] HUMANS\n\t[7] PERFECTUM\n\tChoice:"; string choice1; cin >> choice1;
            if (choice1 == "1")
            {
                code = "90";
                break;
            }
            else if (choice1 == "2")
            {
                code = "97";
                break;
            }
            else if (choice1 == "3")
            {
                code = "99";
                break;
            }
            else if (choice1 == "4")
            {
                code = "93";
                break;
            }
            else if (choice1 == "5")
            {
                code = "88";
                break;
            }
            else if (choice1 == "6")
            {
                code = "55";
                break;
            }
            else if (choice1 == "7")
            {
                code = "98";
                break;
            }
        }
    }
    void setphonenumber()
    {
        bool check = false;
    number_again:
        system("clear");
        cout << "\tEnter Number" << endl;
        cout << "\t+998(" << code << ")";
        cin >> phone_number;
        if (phone_number.length() != 7) goto number_again;
        for (int i = 0; i < 7; i++)
        {
            if (phone_number[i] == '1' || phone_number[i] == '2' || phone_number[i] == '3' || phone_number[i] == '4' || phone_number[i] == '5' || phone_number[i] == '6' || phone_number[i] == '7' || phone_number[i] == '8' || phone_number[i] == '9' || phone_number[i] == '0')
            {
                check = true;
            }
            else
            {
                check = false;
            }
            if (check == false) goto number_again;
        }
        phone_number = phone_number;
    }
    void setpassword()
    {
        bool check = false;
    number_again:
        system("clear");
        cout << "\tEnter Password (4 numbers only)" << endl;
        cout << "\t";
        cin >> password;
        if (password.length() != 4) goto number_again;
        for (int i = 0; i < 4; i++)
        {
            if (password[i] == '1' || password[i] == '2' || password[i] == '3' || password[i] == '4' || password[i] == '5' || password[i] == '6' || password[i] == '7' || password[i] == '8' || password[i] == '9' || password[i] == '0')
            {
                check = true;
            }
            else
            {
                check = false;
            }
            if (check == false) goto number_again;
        }
        password = password;
    }
    void setline() { checkline += "+998("; checkline += code; checkline += ")"; checkline += phone_number; checkline += password; }
    string getcheckline() { return checkline; }
};
class MENU :public Account
{
private:
    string lineinfile;
    int check = 0;
    string o1="Off",o2="Off",o3="Off",o4="Off";
    string tarif_;
    string balance;
    int balance_;
    int money = 0;
    string packages_balance1;
    string packages_balance2;
    string packages_balance3;
    string packages_balance4;
    string packages_balance5;
    string packages_balance6;
    int package_money = 0;
    int package_internet = 0;
    int minutes_money;
    int minutes_internet = 0;
    int sms_money = 0;
    int sms_internet = 0;
public:
    //TO ADD THE DATA
    void addmoney()
    {
        system("clear");
        int money_ = 0;
        cout << "\n\t[Current Balance] : " << money;
        cout << "\n\n";
        while(true)
        {
            while(true)
            {
                cout<<"\n\t[1] Add Money\n\t[2] Back\n\tChoice:";string choice; cin>>choice;
                if(choice=="1")
                {
                    cout << "\n\tADDING MONEY...";
                    string m;
                    cout << "\n\t[Enter Money] : ";
                    cin >> m;
                    for (int i = 0; i < m.length(); i++)
                    {
                        money_ *= 10;
                        switch (m[i])
                        {
                        case '0':
                            money_ += 0;
                            break;
                        case '1':
                            money_ += 1;
                            break;
                        case '2':
                            money_ += 2;
                            break;
                        case '3':
                            money_ += 3;
                            break;
                        case '4':
                            money_ += 4;
                            break;
                        case '5':
                            money_ += 5;
                            break;
                        case '6':
                            money_ += 6;
                            break;
                        case '7':
                            money_ += 7;
                            break;
                        case '8':
                            money_ += 8;
                            break;
                        case '9':
                            money_ += 9;
                            break;
                        default:
                            continue;
                        }
                    }
                    money += money_;
                    change_money(money);
                    break;
                }
                if(choice=="2") break;
            }
            break;
        }
    }
    void add_internet()
    {
        cout << "\n\t[Current Internet]" << endl;;
        cout << "\t" << packages_balance1 << " MB" << endl;
        cout << "\n\tPackages";
        cout << "\n\t[1] 100 MB\t3000 SO'M";
        cout << "\n\t[2] 300 MB\t6000 SO'M";
        cout << "\n\t[3] 600 MB\t9000 SO'M";
        cout << "\n\t[4] 1000 MB\t15000 SO'M";
        cout << "\n\tChoice:";
        string DP;
        cin >> DP;
        int temp1, temp2;
        while (true)
        {
            if (DP == "1")
            {
                packages_balance1 = "100";
                packages_balance2 = "3000";
                break;
            }
            else if (DP == "2")
            {
                packages_balance1 = "300";
                packages_balance2 = "6000";
                break;
            }
            else if (DP == "3")
            {
                packages_balance1 = "600";
                packages_balance2 = "9000";
                break;
            }
            else if (DP == "4")
            {
                packages_balance1 = "1000";
                packages_balance2 = "15000";
                break;
            }
        }
        string::size_type st3;
        string::size_type st4;
        string::size_type st5;
        string adder1;
        int adder2;
        temp1 = stoi(packages_balance1, &st3);
        temp2 = stoi(packages_balance2, &st4);
        ifstream file("Package.txt");
        while (!file.eof())
        {
            file >> lineinfile;
            if (!lineinfile.compare(checkline))
            {
                file >> adder1;
            }
        }
        file.close();
        adder2 = stoi(adder1, &st5);
        package_internet=0;
        package_internet += temp1;
        package_internet += adder2;
        stringstream ss;
        ss << package_internet;
        ss >> packages_balance1;
        while (money < temp2)
        {
            addmoney();
        }
        money -= temp2;
        change_money(money);
        change_internet(packages_balance1);
    }
    void addMinutes()
    {
        cout << "\n\t[Current Minutes]" << endl;;
        cout << "\t" << packages_balance3 << " MIN" << endl;
        cout << "\n\tPackages";
        cout << "\n\t[1] 100 \t4000 SO'M";
        cout << "\n\t[2] 300 \t10000 SO'M";
        cout << "\n\t[3] 600 \t16000 SO'M";
        cout << "\n\t[4] 1200 \t24000 SO'M";
        cout << "\n\tChoice:";
        string DP;
        cin >> DP;
        int temp1, temp2;
        while (true)
        {
            if (DP == "1")
            {
                packages_balance3 = "100";
                packages_balance4 = "4000";
                break;
            }
            else if (DP == "2")
            {
                packages_balance3 = "300";
                packages_balance4 = "10000";
                break;
            }
            else if (DP == "3")
            {
                packages_balance3 = "600";
                packages_balance4 = "16000";
                break;
            }
            else if (DP == "4")
            {
                packages_balance3 = "1000";
                packages_balance4 = "24000";
                break;
            }
        }
        string::size_type st3;
        string::size_type st4;
        string::size_type st5;
        string adder1;
        int adder2;
        temp1 = stoi(packages_balance3, &st3);
        temp2 = stoi(packages_balance4, &st4);
        ifstream file("Minutes.txt");
        while (!file.eof())
        {
            file >> lineinfile;
            if (!lineinfile.compare(checkline))
            {
                file >> adder1;
            }
        }
        file.close();
        adder2 = stoi(adder1, &st5);
        minutes_internet=0;
        minutes_internet += temp1;
        minutes_internet += adder2;
        stringstream ss;
        ss << minutes_internet;
        ss >> packages_balance3;
        while (money < temp2)
        {
            addmoney();
        }
        money -= temp2;
        change_money(money);
        change_minutes(minutes_internet);
    }
    void addSMS()
    {
        while (true)
        {
            system("clear");
            cout << "\n\t[Current SMS]" << endl;;
            cout << "\t" << packages_balance5 << " SMS" << endl;
            cout << "\n\tPackages";
            cout << "\n\t[1] 10 SMS\t420 SO'M";
            cout << "\n\t[2] 50 SMS\t1680 SO'M";
            cout << "\n\t[3] 200 SMS\t5200 SO'M";
            cout << "\n\t[4] 500 SMS\t9500 SO'M";
            cout << "\n\tChoice:";
            string DP;
            cin >> DP;
            if (DP == "1")
            {
                packages_balance5 = "10";
                packages_balance6 = "420";
                break;
            }
            else if (DP == "2")
            {
                packages_balance5 = "50";
                packages_balance6 = "1680";
                break;
            }
            else if (DP == "3")
            {
                packages_balance5 = "200";
                packages_balance6 = "5200";
                break;
            }
            else if (DP == "4")
            {
                packages_balance5 = "500";
                packages_balance6 = "9500";
                break;
            }
        }
        string::size_type st10;
        string::size_type st11;
        string::size_type st12;
        string adder1;
        int adder2;
        int temp1, temp2;
        temp1 = stoi(packages_balance5, &st10);
        temp2 = stoi(packages_balance6, &st11);
        ifstream file("SMS.txt");
        while (!file.eof())
        {
            file >> lineinfile;
            if (!lineinfile.compare(checkline))
            {
                file >> adder1;
            }
        }
        file.close();
        adder2 = stoi(adder1, &st12);
        sms_internet=0;
        sms_internet += temp1;
        sms_internet += adder2;
        stringstream ss;
        ss << sms_internet;
        ss >> packages_balance5;
        while (money < temp2)
        {
            addmoney();
        }
        money -= temp2;
        change_money(money);
        change_sms(sms_internet);
    }
    //TO SET THE DATA
    void setmoney()
    {
        system("clear");
        money = 0;
        cout << "\n\t[Enter Money]:";
        cin >> money_converter;
        for (int i = 0; i < money_converter.length(); i++)
        {
            money *= 10;
            switch (money_converter[i])
            {
            case '0':
                money += 0;
                break;
            case '1':
                money += 1;
                break;
            case '2':
                money += 2;
                break;
            case '3':
                money += 3;
                break;
            case '4':
                money += 4;
                break;
            case '5':
                money += 5;
                break;
            case '6':
                money += 6;
                break;
            case '7':
                money += 7;
                break;
            case '8':
                money += 8;
                break;
            case '9':
                money += 9;
                break;
            }
        }
        ofstream file("Balance.txt", ios::app);
        file << endl;
        file << checkline << endl;
        file << money;
        file.close();
    }
    void setInternet()
    {
        system("clear");
        cout << "\n\tPackages";
        cout << "\n\t[1] 100 MB\t3000 SO'M";
        cout << "\n\t[2] 300 MB\t6000 SO'M";
        cout << "\n\t[3] 600 MB\t9000 SO'M";
        cout << "\n\t[4] 1000 MB\t15000 SO'M";
        cout << "\n\tChoice:";
        string DP;
        cin >> DP;
        while (true)
        {
            if (DP == "1")
            {
                packages_balance1 = "100";
                packages_balance2 = "3000";
                break;
            }
            else if (DP == "2")
            {
                packages_balance1 = "300";
                packages_balance2 = "6000";
                break;
            }
            else if (DP == "3")
            {
                packages_balance1 = "600";
                packages_balance2 = "9000";
                break;
            }
            else if (DP == "4")
            {
                packages_balance1 = "1000";
                packages_balance2 = "15000";
                break;
            }
        }
        string::size_type st1;
        string::size_type st2;
        package_money = stoi(packages_balance2, &st1);
        package_internet = stoi(packages_balance1, &st2);
        while (money < package_money)
        {
            addmoney();
        }
        money -= package_money;
        change_money(money);
        ofstream file("Package.txt", ios::app);
        file << endl;
        file << checkline << endl;
        file << packages_balance1;
        file.close();
    }
    void setMinutes()
    {
        system("clear");
        cout << "\n\tMinutes";
        cout << "\n\t[1] 100 \t4000 SO'M";
        cout << "\n\t[2] 300 \t10000 SO'M";
        cout << "\n\t[3] 600 \t16000 SO'M";
        cout << "\n\t[4] 1200 \t24000 SO'M";
        cout << "\n\tChoice:";
        string DP;
        cin >> DP;
        while (true)
        {
            if (DP == "1")
            {
                packages_balance3 = "100";
                packages_balance4 = "4000";
                break;
            }
            else if (DP == "2")
            {
                packages_balance3 = "300";
                packages_balance4 = "10000";
                break;
            }
            else if (DP == "3")
            {
                packages_balance3 = "600";
                packages_balance4 = "16000";
                break;
            }
            else if (DP == "4")
            {
                packages_balance3 = "1200";
                packages_balance4 = "24000";
                break;
            }
        }
        string::size_type st1;
        string::size_type st2;
        minutes_money = stoi(packages_balance4, &st1);
        minutes_internet = stoi(packages_balance3, &st2);
        while (money < minutes_money)
        {
            addmoney();
        }
        money -= package_money;
        change_money(money);
        ofstream file("Minutes.txt", ios::app);
        file << endl;
        file << checkline << endl;
        file << packages_balance3;
        file.close();
    }
    void setSMS()
    {
        while (true)
        {
            system("clear");
            cout << "\n\tPackages";
            cout << "\n\t[1] 10 SMS\t420 SO'M";
            cout << "\n\t[2] 50 SMS\t1680 SO'M";
            cout << "\n\t[3] 200 SMS\t5200 SO'M";
            cout << "\n\t[4] 500 SMS\t9500 SO'M";
            cout << "\n\tChoice:";
            string DP;
            cin >> DP;
            if (DP == "1")
            {
                packages_balance5 = "10";
                packages_balance6 = "3000";
                break;
            }
            else if (DP == "2")
            {
                packages_balance5 = "50";
                packages_balance6 = "6000";
                break;
            }
            else if (DP == "3")
            {
                packages_balance5 = "200";
                packages_balance6 = "9000";
                break;
            }
            else if (DP == "4")
            {
                packages_balance5 = "500";
                packages_balance6 = "15000";
                break;
            }
        }
        string::size_type st1;
        string::size_type st2;
        sms_internet = stoi(packages_balance5, &st1);
        sms_money = stoi(packages_balance6, &st2);
        while (money < sms_money)
        {
        }
        money -= sms_money;
        change_money(money);
        ofstream file("SMS.txt", ios::app);
        file << endl;
        file << checkline << endl;
        file << packages_balance5;
        file.close();
    }
    void settarif()
    {
        while(true)
        {
        system("clear");
        cout << "\n\t[1]\t Salom\t\t 10.000 SO'M" << endl;
        cout << "\t\t10 MB\t10 MIN\t 10 SMS\n" << endl;
        cout << "\t[2]\t Salom Plus\t\t 15.000 SO'M" << endl;
        cout << "\t\t500 MB\t100 MIN\t 500 SMS\n" << endl;
        cout << "\t[3]\t Milliy\t\t 40.000 SO'M" << endl;
        cout << "\t\t8 GB\t UNLIM MIN\t 3000 SMS\n" << endl;
        cout << "\t[4]\t Milliy Plus\t\t 50.000 SO'M" << endl;
        cout << "\t\t12 GB\t UNLIM MIN\t 5000 SMS\n" << endl;
        cout << "\t[5]\t Milly Premium        70.000 SO'M" << endl;
        cout << "\t\t20 GB\t UNLIM MIN\t 5000 SMS\n" << endl;
        cout << "\t[6]\t Gold\t\t 100.000 SO'M" << endl;
        cout << "\t\t35 GB\t UNLIM MIN\t 5000 SMS" << endl;
        cout << "Enter Number:";
        string number;
        cin >> number;

        if (number == "1")
        {
            tarif_ = "Salom"; balance = "10000";break;
        }
        else if (number == "2")
        {
            tarif_ = "Salom Plus"; balance = "15000";break;
        }
        else if (number == "3")
        {
            tarif_ = "Milliy"; balance = "40000";break;
        }
        else if (number == "4")
        {
            tarif_ = "Milliy_Plus"; balance = "50000";break;
        }
        else if (number == "5")
        {
            tarif_ = "Milliy_Premium"; balance = "70000";break;
        }
        else if (number == "6")
        {
            tarif_ = "Gold"; balance = "100000";break;
        }
        }
        string::size_type siz;
        balance_ = stoi(balance, &siz);
        if (money < balance_)
        {
        start:
            cout << "\n\tYou don't have enough money";
            cout << "\n\t[1] Set Other tarif";
            cout << "\n\t[2] Add Money to Account";
            cout << "\n\tChoice:";
            string choice;
            cin >> choice;
            if (choice == "1")
            {
                settarif();
            }
            if (choice == "2")
            {
                addmoney();
                settarif();
            }
            else goto start;
        }
        else
        {
            money -= balance_;
            change_money(money);
            ofstream file("Tarif.txt", ios::app);
            file << endl;
            file << checkline << endl;
            file << tarif_ << endl;
            file << balance;
            file.close();
        }

    }
    void setservice()
    {
        ofstream file("Service.txt",ios::app);
        file<<endl;
        file<<checkline<<endl;
        file<<o1<<endl;
        file<<o2<<endl;
        file<<o3<<endl;
        file<<o4;
        file.close();
    }
    //TO CHANGE THE DATA
    void change_money(int mon)
    {
        ofstream fout("temp.txt", ios::app);
        ifstream fin("Balance.txt");
        string line1, line2;
        while (!fin.eof())
        {
            fin >> line1;
            if (line1 == checkline)
            {
                fout << endl;
                fin >> line2;
                fout << line1 << endl;
                fout << mon;
            }
            else if (line1.length() > 15)
            {
                fout << endl;
                fin >> line2;
                fout << line1 << endl;
                fout << line2;
            }
            else continue;
        }
        fout.close();
        fin.close();
        remove("Balance.txt");
        rename("temp.txt", "Balance.txt");
    }
    void change_tarif1()
    {
        cout << "\n\t[CURRENT TARIF]";
        cout << "\n\t" << tarif_;
        cout << "\n\t" << balance;
        cout << endl;
        string tar; string bal;
        cout << "\n\t[1]\t Salom\t\t 10.000 SO'M" << endl;
        cout << "\t\t10 MB\t10 MIN\t 10 SMS\n" << endl;
        cout << "\t[2]\t Salom Plus\t\t 15.000 SO'M" << endl;
        cout << "\t\t500 MB\t100 MIN\t 500 SMS\n" << endl;
        cout << "\t[3]\t Milliy\t\t 40.000 SO'M" << endl;
        cout << "\t\t8 GB\t UNLIM MIN\t 3000 SMS\n" << endl;
        cout << "\t[4]\t Milliy Plus\t\t 50.000 SO'M" << endl;
        cout << "\t\t12 GB\t UNLIM MIN\t 5000 SMS\n" << endl;
        cout << "\t[5]\t Milly Premium        70.000 SO'M" << endl;
        cout << "\t\t20 GB\t UNLIM MIN\t 5000 SMS\n" << endl;
        cout << "\t[6]\t Gold\t\t 100.000 SO'M" << endl;
        cout << "\t\t35 GB\t UNLIM MIN\t 5000 SMS" << endl;
        while(true)
        {
            cout<<"\n\n\t[1] Change Tarif\n\t[2] Back\n\tChoice:";string choice;cin>>choice;
            if(choice=="1")
            {
                while(true)
                {
                    cout << "Enter Number:";
                    string number;
                    cin >> number;
                    if (number == "1")
                    {
                        tar = "Salom"; bal = "10000";break;
                    }
                    else if (number == "2")
                    {
                        tar = "Salom_Plus"; bal = "15000";break;
                    }
                    else if (number == "3")
                    {
                        tar = "Milliy"; bal = "40000";break;
                    }
                    else if (number == "4")
                    {
                        tar = "Milliy_Plus"; bal = "50000";break;
                    }
                    else if (number == "5")
                    {
                        tar = "Milly_Premium"; bal = "70000";break;
                    }
                    else if (number == "6")
                    {
                        tar = "Gold"; bal = "100000";break;
                    }
                }
                change_tarif2(tar, bal);
                break;
            }
            if(choice=="2") break;
        }
    }
    void change_tarif2(string t, string b)
    {
        string line1, line2, line3;
        ifstream fin("Tarif.txt", ios::app);
        ofstream fout("temp.txt");
        while (!fin.eof())
        {
            fin >> line1;
            if (line1 == checkline)
            {
                fout << endl;
                fin >> line2 >> line3;
                fout << line1 << endl;
                fout << t << endl;
                fout << b;
            }
            else if (line1.length() > 15)
            {
                fout << endl;
                fin >> line2 >> line3;
                fout << line1 << endl;
                fout << line2 << endl;
                fout << line3;
            }
            else continue;
        }
        fin.close();
        fout.close();
        remove("Tarif.txt");
        rename("temp.txt", "Tarif.txt");
        tarif_ = t;
        balance = b;
    }
    void change_internet(string data)
    {
        string line1, line2;
        ifstream fin("Package.txt");
        ofstream fout("temp.txt");
        while (!fin.eof())
        {
            fin >> line1;
            if (line1 == checkline)
            {
                fout << endl;
                fin >> line2;
                fout << line1 << endl;
                fout << data;
            }
            else if (line1.length() > 15)
            {
                fout << endl;
                fin >> line2;
                fout << line1 << endl;
                fout << line2;
            }
            else continue;
        }
        fin.close();
        packages_balance1 = data;
        fout.close();
        remove("Package.txt");
        rename("temp.txt", "Package.txt");
    }
    void change_minutes(int mon)
    {
        ofstream fout("temp.txt", ios::app);
        ifstream fin("Minutes.txt");
        string line1, line2;
        while (!fin.eof())
        {
            fin >> line1;
            if (line1 == checkline)
            {
                fout << endl;
                fin >> line2;
                fout << line1 << endl;
                fout << mon;
            }
            else if (line1.length() > 15)
            {
                fout << endl;
                fin >> line2;
                fout << line1 << endl;
                fout << line2;
            }
            else continue;
        }
        fout.close();
        fin.close();
        remove("Minutes.txt");
        rename("temp.txt", "Minutes.txt");
    }
    void change_sms(int data)
    {
        string line1, line2;
        ifstream fin("SMS.txt");
        ofstream fout("temp.txt",ios::app);
        while (!fin.eof())
        {
            fin >> line1;
            if (line1 == checkline)
            {
                fout << endl;
                fin >> line2;
                fout << line1 << endl;
                fout << data;
            }
            else if (line1.length() > 15)
            {
                fout << endl;
                fin >> line2;
                fout << line1 << endl;
                fout << line2;
            }
            else continue;
        }
        fin.close();
        fout.close();
        remove("SMS.txt");
        rename("temp.txt", "SMS.txt");
    }
    void change_service(string a1,string a2,string a3,string a4)
    {
        ifstream fin("Service.txt");
        ofstream fout("temp.txt",ios::app);
        string line1,line2,line3,line4,line5;
        while(!fin.eof())
        {
            fin>>line1;
            if(!line1.compare(checkline))
            {
                fout<<endl;
                fout<<line1<<endl;
                fin>>line2>>line3>>line4>>line5;
                fout<<a1<<endl;
                fout<<a2<<endl;
                fout<<a3<<endl;
                fout<<a4;
            }
            else if(line1.length()>15)
            {
                fout<<endl;
                fout<<line1<<endl;
                fin>>line2>>line3>>line4>>line5;
                fout<<line2<<endl;
                fout<<line3<<endl;
                fout<<line4<<endl;
                fout<<line5;
            }
            else continue;
        }
        fin.close();
        fout.close();
        remove("Service.txt");
        rename("temp.txt","Service.txt");
    }
    //TO SEARCH DATA FROM FILES
    void tarif()
    {
        ifstream file("Tarif.txt");
        check = 0;
        if (file.is_open())
        {
            while (!file.eof())
            {
                getline(file, lineinfile);
                if (!lineinfile.compare(checkline))
                {
                    for (int i = 0; i < 2; i++)
                    {
                        if (i == 0)
                        {
                            getline(file, lineinfile);
                            tarif_ = lineinfile;
                        }
                        if (i == 1)
                        {
                            getline(file, lineinfile);
                            balance = lineinfile;
                        }
                    }
                    check = 1;
                }
            }
        }
        string::size_type size;
        balance_ = stoi(balance, &size);
        if (!(check == 1))
        {
            cout << "No such data" << endl;
            throw Nothing{};
        }
    }
    void money_()
    {
        ifstream file("Balance.txt");
        int check = 0;
        string line2;
        if (file.is_open())
        {
            while (!file.eof())
            {
                file >> lineinfile;
                if (!lineinfile.compare(checkline))
                {
                    file >> line2;
                    string temp = line2;
                    string::size_type sz;
                    money = stoi(temp, &sz);
                    check = 1;
                }
            }
        }
        file.close();
        if (!(check == 1))
        {
            cout << "No Such Data" << endl;
            throw Nothing{};
        }
    }
    void INTERNET()
    {
        ifstream file("Package.txt");
        string line1;
        while (!file.eof())
        {
            file >> line1;
            if (!line1.compare(checkline))
            {
                file >> packages_balance1;
            }
        }
    }
    void SMS()
    {
        ifstream file("SMS.txt");
        string line1;
        while (!file.eof())
        {
            file >> line1;
            if (!line1.compare(checkline))
            {
                file >> packages_balance5;
            }
        }
    }
    void MINUTES()
    {
        ifstream file("Minutes.txt");
        string line1;
        while (!file.eof())
        {
            file >> line1;
            if (!line1.compare(checkline))
            {
                file >> packages_balance3;
            }
        }
    }
    //TO LOG OR SIGN IN
    void login()
    {
        ifstream ifs("Base.txt");
        if (ifs.is_open())
        {
            while (!ifs.eof())
            {
                ifs >> lineinfile;
                if (!lineinfile.compare(checkline))
                {
                    for (int x = 0; x < 4; x++)
                    {
                        if (x == 0)
                        {
                            checkline = lineinfile;
                        }
                        if (x == 1)
                        {
                            code = lineinfile;
                        }
                        if (x == 2)
                        {
                            phone_number = lineinfile;
                        }
                        if (x == 3)
                        {
                            password = lineinfile;
                        }
                    }
                    check = 1;
                }

            }
        }
        ifs.clear();
        if (!(check == 1))
        {
            cout << "No Such Data" << endl;
            cout << "[1] Try Again\n[2] Exit\nChoice:";
            cin >> check;
            if (check == 1)
            {
                login();
            }
            else
            {
                throw Nothing{};
            }
        }
    }
    void signin()
    {
        ofstream ofs("Base.txt", ios::app);
        ofs << endl;
        ofs << checkline << endl;
        ofs << code << endl;
        ofs << phone_number << endl;
        ofs << password;
        ofs.close();
    }
    //MENU
    void getdata()
    {
        cout << endl;
        string numtel;
        numtel = checkline;
        numtel.erase(15, numtel.length());
        cout << "\t[PHONE NUMBER] : " << numtel << endl;//+998(99)1234567
        cout << endl;
        cout << "\t[TARIF] : " << tarif_ <<"\t["<<packages_balance1<<" MB] ["<<packages_balance3<<" MIN] ["<<packages_balance5<<" SMS]"<<endl;
        cout << "\t[BALANCE] : " << money << endl;
    }
    void services()
    {
        while (true)
        {
            system("clear");
            cout << "\n\tServices";
            cout << "\n\t[1] Anti Phone ID";
            cout << "\n\t[2] 5G Network";
            cout << "\n\t[3] Roaming";
            cout << "\n\t[4] International Communication";
            cout << "\n\tChoice:";
            string choice;
            cin >> choice;
                if (choice == "1")
                {
                    while (true)
                    {
                        cout << "\n\t[1] On\n\t[2] Off\n\tChoice:"; string choice; cin >> choice;
                        if (choice == "1")
                        {
                            o1 = "On";
                            break;
                        }
                        if (choice == "2")
                        {
                            o1 = "Off";
                            break;
                        }
                    }
                    break;
                }
                if (choice == "2")
                {
                    while (true)
                    {
                        cout << "\n\t[1] On\n\t[2] Off\n\tChoice:"; string choice; cin >> choice;
                        if (choice == "1")
                        {
                            o2 = "On";
                            break;
                        }
                        if (choice == "2")
                        {
                            o2 = "Off";
                            break;
                        }
                    }
                    break;
                }
                if (choice == "3")
                {
                    while (true)
                    {
                        cout << "\n\t[1] On\n\t[2] Off\n\tChoice:"; string choice; cin >> choice;
                        if (choice == "1")
                        {
                            o3 = "On";
                            break;
                        }
                        if (choice == "2")
                        {
                            o3 = "Off";
                            break;
                        }
                    }
                    break;
                }
                if (choice == "4")
                {
                    while (true)
                    {
                        cout << "\n\t[1] On\n\t[2] Off\n\t[3] Back\n\tChoice:"; string choice; cin >> choice;
                        if (choice == "1")
                        {
                            o4 = "On";
                            break;
                        }
                        if (choice == "2")
                        {
                            o4 = "Off";
                            break;
                        }
                    }
                    break;
                }
        }
        change_service(o1,o2,o3,o4);
    }
    void settings()
    {
        system("clear");
        cout << "Phone Number:" << endl;
        cout << "\n\tSettings";
        cout << "\n\t[1] About Us";
        cout << "\n\t[2] Help";
        cout << "\n\t[3] About Application";
        cout << "\n\tChoice:";
        string choice;
        cin >> choice;
        while(true)
        {
            if (choice == "1")
            {
                system("clear");
                cout<<"This application was designed by a group of four exceptional programmers for your convenience. \nWe appreciate the firms giving us with data for the project and expect to receive a great grade on it (and the final exams too).\nThe link to our github is below"<<endl;
                cout<<"\t\thttps://github.com/ABdulZak"<<endl;
                cout<<"\t[1] Back\nChoice:";string choice1;cin>>choice1;
                if(choice1=="1") break;
            }
            if (choice == "2")
            {
                system("clear");
                    cout << "\n\tSupport service:"<<endl;
                    cout << "\n\tSupport calls are free for subscribers of our application." << endl;
                    cout << "\n\t1009 - For mobile services." << endl;
                    cout << "\n\t1010 - For fixed telephony services." << endl;
                    cout << "\n\t1011 - For Internet services." << endl;
                    cout << "\n\t1012 - For Other Questions." << endl;
                    cout<<"\t[1] Back\nChoice:";string choice1;cin>>choice1;
                    if(choice1=="1") break;
            }
            if (choice == "3")
            {
                system("clear");
                   cout << "\n\t About Application:"<<endl;
                   cout << "\n\t Version 1.1 stable." << endl;
                   cout << "\n\t 2022 AK \"Uzbektelecom\""<< endl;
                   cout << "\n\t ALL RIGHT ARE RESERVED" << endl;
                   cout<<"\t[1] Back\nChoice:";string choice1;cin>>choice1;
                    if(choice1=="1") break;
            }
        }
    }
    void packages()
    {
        while (true)
        {
            cout << "\n\t__Packages__";
            cout << "\n\t[1] Internet";
            cout << "\n\t[2] Minutes";
            cout << "\n\t[3] SMS";
            cout << "\n\tChoice:";
            string choice;
            cin >> choice;
            if (choice == "1")
            {
                cout << "\n\t[1] ADD Package\n\t[2] SET Package (ATTENTION!!! If You Already set a data, don't do it again. For your benefit only):))\n\t[3] Back\n\tChoice:"; string choice; cin >> choice;
                while (true)
                {
                    if (choice == "1")
                    {
                        add_internet();
                        break;
                    }
                    if (choice == "2")
                    {
                        setInternet();
                        break;
                    }
                    if(choice=="3") break;
                }
                break;
            }
            if (choice == "2")
            {
                cout << "\n\t[1] ADD Minutes\n\t[2] SET Minutes (ATTENTION!!! If You Already set a data, don't do it again. For your benefit only):))\n\t[3] Back\n\tChoice:"; string choice; cin >> choice;
                while (true)
                {
                    if (choice == "2")
                    {
                        setMinutes();
                        break;
                    }
                    if (choice == "1")
                    {
                        addMinutes();
                        break;
                    }
                    if(choice=="3") break;
                }
                break;
            }
            if (choice == "3")
            {
                cout << "\n\t[1] ADD SMS\n\t[2] SET SMS (ATTENTION!!! If You Already set a data, don't do it again. For your benefit only):))\n\tChoice:"; string choice; cin >> choice;
                while (true)
                {
                    if (choice == "1")
                    {
                        addSMS();
                        break;
                    }
                    if (choice == "2")
                    {
                        setSMS();
                        break;
                    }
                    if(choice=="3") break;
                }
                break;
            }
        }
    }
};
void ADMIN()
{
    system("clear");
    Admin a;
    while(true)
    {
        cout<<"\n\t[1] Base\n\t[2] Tarif\n\t[3] Balance\n\t[4] Package\n\t[5] Minutes\n\t[6] SMS\n\t[7] Service\n\t[8] Exit\n\tChoice:";string choice;cin>>choice; 
        if(choice=="1") a.data1();
        else if(choice=="2") a.data2();
        else if(choice=="3") a.data3();
        else if(choice=="4") a.data4();
        else if(choice=="5") a.data5();
        else if(choice=="6") a.data6();
        else if(choice=="7") a.data7();
        else if(choice=="8") break;
    }
}
int main()
{
    MENU m;
    while(true)
    {
        system("clear");
        cout<<"\n\t[1] ADMIN\t\t[2] User\nChoice:";string cho;cin>>cho;
        if(cho=="1") 
        {
            ADMIN();
            break;
        }
        if(cho=="2")
        {
            while (true)
            {
                system("clear");
                cout << "\t\t\t\t\t\t\tWelcome to the Phonebook\n\t(Made by Abdulaziz Zakirov(U2110292) || Gayrat Usmanov(U2110281) || Farrukh Utkurov(U2110283) || Roziya Yunusova(U2110291))" << endl;
                cout << "\n\t[1] Login\n\t[2] Sign In\n\tChoice:";
                string choice;
                cin >> choice;
                if (choice == "1")
                {
                    m.setcode();
                    m.setphonenumber();
                    m.setpassword();
                    m.setline();//checkline
                    m.login();
                    m.tarif();
                    m.INTERNET();
                    m.MINUTES();
                    m.SMS();
                    m.money_();
                    m.getdata();
                    break;
                }
                else if (choice == "2")
                {
                    m.setcode();
                    m.setphonenumber();
                    m.setpassword();
                    m.setline();
                    m.setmoney();
                    m.signin();
                    m.settarif();
                    m.setservice();
                    m.getdata();
                    break;
                }
                else
                {
                    cout << "Wrong Choice" << endl;
                    cout << endl;
                }
            }
            string choice;
            while (true)
            {
                system("clear");
                m.getdata();
                cout << "\n\t[1] Tarifs";
                cout << "\n\t[2] Balance";
                cout << "\n\t[3] Packet";
                cout << "\n\t[4] Services";
                cout << "\n\t[5] Settings";
                cout << "\n\t[6] Exit";
                cout << "\n\tChoice:";
                cin >> choice;
                if (choice == "1") m.change_tarif1();
                if (choice == "2") m.addmoney();
                if (choice == "3") m.packages();
                if (choice == "4") m.services();
                if (choice == "5") m.settings();
                if (choice == "6") break;
            }
            break;
        }
    }
    return EXIT_SUCCESS;
}
