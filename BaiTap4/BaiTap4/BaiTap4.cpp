// BaiTap4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

int _Is_Int(char buffer[100]);
int _Is_Float(char buffer[100]);
void _Exercise_1(void);
void _Exercise_2(void);
void _Exercise_3(void);
void _Exercise_4(void);
void _Exercise_5(void);
void _Exercise_6(void);
void _Exercise_7(void);
void _Exercise_8(void);
void _Exercise_9(void);
void _Exercise_10(void);
void _Exercise_11(void);
void _Exercise_12(void);
void _Exercise_13(void);
void _Exercise_14(void);
void _Exercise_15(void);
void _Exercise_16(void);
void _Exercise_17(void);
void _Exercise_18(void);
void _Exercise_19(void);
void _Exercise_20(void);
void _Exercise_21(void);
void _Exercise_22(void);
void _Exercise_23(void);
void _Exercise_24(void);
void _Exercise_25(void);
void _Exercise_26(void);
void _Exercise_27(void);
void _Exercise_28(void);
void _Exercise_29(void);
void _Exercise_30(void);

int main()
{
    int _while = 1;
    std::cout << "Hello World\n";
    while (_while)
    {
        char _input[100];
        std::cout << "\n\nNhap BT muon chuyen den (1,2,3,4...), hoac nhap \"exit\" de thoat\n";
        std::cin >> _input;
        if (strcmp(_input, "1") == 0)
        {
            _Exercise_1();
        }
        else if (strcmp(_input, "2") == 0)
        {
            _Exercise_2();
        }
        else if (strcmp(_input, "3") == 0)
        {
            _Exercise_3();
        }
        else if (strcmp(_input, "4") == 0)
        {
            _Exercise_4();
        }
        else if (strcmp(_input, "5") == 0)
        {
            _Exercise_5();
        }
        else if (strcmp(_input, "6") == 0)
        {
            _Exercise_6();
        }
        else if (strcmp(_input, "7") == 0)
        {
            _Exercise_7();
        }
        else if (strcmp(_input, "8") == 0)
        {
            _Exercise_8();
        }
        else if (strcmp(_input, "9") == 0)
        {
            _Exercise_9();
        }
        else if (strcmp(_input, "10") == 0)
        {
            _Exercise_10();
        }
        else if (strcmp(_input, "11") == 0)
        {
            _Exercise_11();
        }
        else if (strcmp(_input, "12") == 0)
        {
            _Exercise_12();
        }
        else if (strcmp(_input, "13") == 0)
        {
            _Exercise_13();
        }
        else if (strcmp(_input, "14") == 0)
        {
            _Exercise_14();
        }
        else if (strcmp(_input, "15") == 0)
        {
            _Exercise_15();
        }
        else if (strcmp(_input, "16") == 0)
        {
            _Exercise_16();
        }
        else if (strcmp(_input, "17") == 0)
        {
            _Exercise_17();
        }
        else if (strcmp(_input, "18") == 0)
        {
            _Exercise_18();
        }
        else if (strcmp(_input, "19") == 0)
        {
            _Exercise_19();
        }
        else if (strcmp(_input, "20") == 0)
        {
            _Exercise_20();
        }
        else if (strcmp(_input, "21") == 0)
        {
            _Exercise_21();
        }
        else if (strcmp(_input, "22") == 0)
        {
            _Exercise_22();
        }
        else if (strcmp(_input, "23") == 0)
        {
            _Exercise_23();
        }
        else if (strcmp(_input, "24") == 0)
        {
            _Exercise_24();
        }
        else if (strcmp(_input, "25") == 0)
        {
            _Exercise_25();
        }
        else if (strcmp(_input, "26") == 0)
        {
            _Exercise_26();
        }
        else if (strcmp(_input, "27") == 0)
        {
            _Exercise_27();
        }
        else if (strcmp(_input, "28") == 0)
        {
            _Exercise_28();
        }
        else if (strcmp(_input, "29") == 0)
        {
            _Exercise_29();
        }
        else if (strcmp(_input, "30") == 0)
        {
            _Exercise_30();
        }
        else if (strcmp(_input, "exit") == 0)
        {
            _while = 0;
        }
    }
}


int _Is_Int(char buffer[100])
{
    int _return = 1;
    if ((isdigit(buffer[0]) == 0) && (buffer[0] != '-') && (buffer[0] != '+'))
    {
        _return = 0;
    }
    int ilen = (int)strlen(buffer);
    for (int i = 1; i < ilen; i++)
    {
        if (isdigit(buffer[i]) == 0)
        {
            _return = 0;
        }
    }
    return _return;
}

int _Is_Float(char buffer[100])
{
    int _return = 1;
    int _dot_position = 0;
    int i, j;
    int ilen = (int)strlen(buffer);
    for (i = 0; i < ilen; i++)
    {
        if (buffer[i] == '.')
        {
            _dot_position = i;
            break;
        }
    }
    if ((_dot_position == 0) && (_Is_Int(buffer) == 0)) _return = 0;
    else
    {
        if ((isdigit(buffer[0]) == 0) && (buffer[0] != '-') && (buffer[0] != '+'))
        {
            _return = 0;
        }
        for (j = 1; j < _dot_position; j++)
        {
            if (isdigit(buffer[j]) == 0)
            {
                _return = 0;
            }
        }
        for (j = _dot_position + 1; j < ilen; j++)
        {
            if (isdigit(buffer[j]) == 0)
            {
                _return = 0;
            }
        }
    }
    return _return;
}

void _Exercise_1(void)
{
    std::cout << "--------------Bai tap 1---------------------\n";
    // Nhap n
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Nhap n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if (n > 0)
                break;
        }
    }
    int *a = new int[n];
    int maxNum = 0;
    maxNum = a[0];
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            std::cout << "\nNhap a[" << i << "]: ";
            std::cin >> _num;
            if (_Is_Int(_num) == 1)
            {
                a[i] = atoi(_num);
                break;
            }
        }
        if (a[i] > maxNum)
        {
            maxNum = a[i];
        }
    }
    std::cout << "\nSo lon nhat trong day la: " << maxNum;
    delete[] a;
}

void _sapXepMangTangDan(int _soPtTrongMang, int* array)
{
    int temp;
    for (int i = 0; i < _soPtTrongMang-1; i++)
    {
        for (int j = i+1; j < _soPtTrongMang; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
void _Exercise_2(void)
{
    std::cout << "--------------Bai tap 2---------------------\n";
    // Nhap n
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Nhap n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if (n > 0)
                break;
        }
    }
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            std::cout << "\nNhap a[" << i << "]: ";
            std::cin >> _num;
            if (_Is_Int(_num) == 1)
            {
                a[i] = atoi(_num);
                break;
            }
        }
    }
    _sapXepMangTangDan(n, a);
    std::cout << "\nDay so duoc sap xep lai la: \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "   ";
    }
    
    delete[] a;
}

void _Exercise_3(void)
{
    std::cout << "--------------Bai tap 3---------------------\n";
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Nhap n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if (n > 0)
                break;
        }
    }
    int* a = new int[n];
    int _count = 0;
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            std::cout << "\nNhap a[" << i << "]: ";
            std::cin >> _num;
            if (_Is_Int(_num) == 1)
            {
                a[i] = atoi(_num);
                break;
            }
        }
        if ((i!=0)&&(a[i]==a[i-1]))
        {
            _count++;
        }
    }
    std::cout << "\nDay so co so cap phan tu lien tiep bang nhau la: " << _count;
    delete[] a;
}

void _Exercise_4(void)
{
    std::cout << "--------------Bai tap 4---------------------\n";
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Nhap n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if (n > 0)
                break;
        }
    }
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            std::cout << "\nNhap a[" << i << "]: ";
            std::cin >> _num;
            if (_Is_Int(_num) == 1)
            {
                a[i] = atoi(_num);
                break;
            }
        }
    }
    int x;
    while (1)
    {
        std::cout << "Nhap x: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            x = atoi(_num);
            break;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
            count++;
        }
    }
    std::cout << "\nSo lan xuat hien cua x la: " << count;
    delete[] a;
}

int _soLonThuHai(int _soPtTrongMang, int* array)
{
    int _max_I, _max_II, _min;
    _max_II = _min = _max_I = array[0];
    for (int i = 0; i < _soPtTrongMang - 1; i++)
    {
        if (array[i] < _min)
        {
            _min = array[i];
        }
        else if (array[i] > _max_I)
        {
            _max_I = array[i];
        }
    }
    _max_II = _min;
    for (int i = 0; i < _soPtTrongMang; i++)
    {
        if (array[i] == _max_I)
        {
            array[i] = _min;
        }
        if (array[i] > _max_II)
        {
            _max_II = array[i];
        }
    }
    return _max_II;
}

void _Exercise_5(void)
{
    std::cout << "--------------Bai tap 5---------------------\n";
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Nhap n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if (n > 0)
                break;
        }
    }
    int* a = new int[n];
    int idenMaxII = 0;
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            std::cout << "\nNhap a[" << i << "]: ";
            std::cin >> _num;
            if (_Is_Int(_num) == 1)
            {
                a[i] = atoi(_num);
                if ((i!=0)&&(a[i]!=a[0]))
                {
                    idenMaxII = 1;
                }
                break;
            }
        }
    }
    if (idenMaxII == 0)
    {
        std::cout << "\nKhong co so lon thu hai";
    }
    else
    {
        std::cout << "\nSo lon thu hai la: " << _soLonThuHai(n,a);
    }
    delete[] a;
}

void _Exercise_6(void)
{
    std::cout << "--------------Bai tap 6---------------------\n";
}

void _Exercise_7(void)
{
    std::cout << "--------------Bai tap 7---------------------\n";
}

void _Exercise_8(void)
{
    std::cout << "--------------Bai tap 8---------------------\n";
}

void _Exercise_9(void)
{
    std::cout << "--------------Bai tap 9---------------------\n";
}

void _Exercise_10(void)
{
    std::cout << "--------------Bai tap 10--------------------\n";
}

void _Exercise_11(void)
{
    std::cout << "--------------Bai tap 11--------------------\n";
}

void _Exercise_12(void)
{
    std::cout << "--------------Bai tap 12--------------------\n";
}

void _Exercise_13(void)
{
    std::cout << "--------------Bai tap 13--------------------\n";
}

void _Exercise_14(void)
{
    std::cout << "--------------Bai tap 14--------------------\n";
}

void _Exercise_15(void)
{
    std::cout << "--------------Bai tap 15--------------------\n";
}

void _Exercise_16(void)
{
    std::cout << "--------------Bai tap 16--------------------\n";
}

void _Exercise_17(void)
{
    std::cout << "--------------Bai tap 17--------------------\n";
}

void _Exercise_18(void)
{
    std::cout << "--------------Bai tap 18--------------------\n";
}

void _Exercise_19(void)
{
    std::cout << "--------------Bai tap 19--------------------\n";
}

void _Exercise_20(void)
{
    std::cout << "--------------Bai tap 20--------------------\n";
}

void _Exercise_21(void)
{
    std::cout << "--------------Bai tap 21--------------------\n";
}

void _Exercise_22(void)
{
    std::cout << "--------------Bai tap 22--------------------\n";
}

void _Exercise_23(void)
{
    std::cout << "--------------Bai tap 23--------------------\n";
}

void _Exercise_24(void)
{
    std::cout << "--------------Bai tap 24--------------------\n";
}

void _Exercise_25(void)
{
    std::cout << "--------------Bai tap 25--------------------\n";
}

void _Exercise_26(void)
{
    std::cout << "--------------Bai tap 26--------------------\n";
}

void _Exercise_27(void)
{
    std::cout << "--------------Bai tap 27--------------------\n";
}

void _Exercise_28(void)
{
    std::cout << "--------------Bai tap 28---------------------\n";
}

void _Exercise_29(void)
{
    std::cout << "--------------Bai tap 29---------------------\n";
}

void _Exercise_30(void)
{
    std::cout << "--------------Bai tap 30---------------------\n";
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
