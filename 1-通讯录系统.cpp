#include <iostream>
#include <string>
using namespace std;
#define Max 1000

struct Person{
    string name;
    int sex;
    int age;
    string phone;
    string address;
};

struct Addressbooks{
    struct Person people[Max];
    int size;
};

void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

void addPerson(Addressbooks* abs)
{
    if (abs->size == Max) {
        cout << "通讯录已满，无法添加!" << endl;
        return;
    } else {
        cout << "请输入姓名：" << endl;
        cin >> abs->people[abs->size].name;

        int i_sex = 0;
        cout << "请输入性别：" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;

        while (true) {
            cin >> i_sex;
            if (i_sex == 1 || i_sex == 2) {
                abs->people[abs->size].sex = i_sex;
                break;
            } else {
                cout << "输入有误，请重新输入!" << endl;
            }
        }

        cout << "请输入年龄：" << endl;
        cin >> abs->people[abs->size].age;

        cout << "请输入联系电话：" << endl;
        cin >> abs->people[abs->size].phone;

        cout << "请输入家庭地址：" << endl;
        cin >> abs->people[abs->size].address;

        abs->size++;

        cout << "添加成功!" << endl;
        system("clear");
    }


}

void showPerson(Addressbooks* abs)
{
    if (abs->size == 0) {
        cout << "当前记录为空" << endl;
    } else {
        for (int i = 0; i < abs->size; i++) {
            cout << "姓名：" << abs->people[i].name << "\t";
            cout << "性别：" << (abs->people[i].sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << abs->people[i].age << "\t";
            cout << "电话：" << abs->people[i].phone << "\t";
            cout << "住址：" << abs->people[i].address << endl;
        } 
    }
}

int isExist(Addressbooks* abs, string name)
{
    for (int i = 0; i < abs->size; i++) {
        if (abs->people[i].name == name) return i;
    }
    return -1;
}

void deletePerson(Addressbooks* abs)
{
    cout << "请输入您要删除的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);

    if (ret != -1) {
        for (int i = ret; i < abs->size - 1; i++) {
            abs->people[i] = abs->people[i+1];
        }
        abs->size--;
        cout << "删除成功" << endl;
    } else {
        cout << "查无此人" << endl;
    }
}

void findPerson(Addressbooks* abs)
{
    cout << "请输入您要查找的联系人" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1) {
        cout << "姓名：" << abs->people[ret].name << "\t";
        cout << "性别：" << (abs->people[ret].sex == 1 ? "男" : "女") << "\t";
        cout << "年龄：" << abs->people[ret].age << "\t";
        cout << "电话：" << abs->people[ret].phone << "\t";
        cout << "住址：" << abs->people[ret].address << endl;
    } else {
        cout << "查无此人" << endl;
    }
}

void modifyPerson(Addressbooks* abs)
{
    cout << "请输入您要修改的联系人" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1) {
        cout << "请输入姓名：" << endl;
        cin >> abs->people[ret].name;

        int i_sex = 0;
        cout << "请输入性别：" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;

        while (true) {
            cin >> i_sex;
            if (i_sex == 1 || i_sex == 2) {
                abs->people[ret].sex = i_sex;
                break;
            } else {
                cout << "输入有误，请重新输入!" << endl;
            }
        }

        cout << "请输入年龄：" << endl;
        cin >> abs->people[ret].age;

        cout << "请输入联系电话：" << endl;
        cin >> abs->people[ret].phone;

        cout << "请输入家庭地址：" << endl;
        cin >> abs->people[ret].address;

        cout << "修改成功!" << endl;
        system("clear");
    } else {
        cout << "查无此人" << endl;
    }
}

void cleanPerson(Addressbooks* abs)
{
    abs->size = 0;
    cout << "通讯录已清空" << endl;
    system("clear");
}

int main()
{
    Addressbooks abs;
    abs.size = 0;

    int select = 0;

    while (true) {
        showMenu();
        cin >> select;
        switch (select) {
            case 1: addPerson(&abs); break;
            case 2: showPerson(&abs); break;
            case 3: deletePerson(&abs); break;
            case 4: findPerson(&abs); break;
            case 5: modifyPerson(&abs); break;
            case 6: cleanPerson(&abs); break;
            case 0: cout << "欢迎下次使用" << endl; return 0;
        }
    }
    return 0;
}