// BaiTap4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <time.h>   // Tạo số ngẫu nhiên


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
    srand((int)time(0));                // tạo số ngẫu nhiên

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
    char _num[50];
    int n, b, c;
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
    while (1)
    {
        std::cout << "Nhap b: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            b = atoi(_num);
            if (b > 0)
                break;
        }
    }
    while (1)
    {
        std::cout << "Nhap c (c>b): ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            c = atoi(_num);
            if (c > b)
                break;
        }
    }
    // Tinh trung binh cong cac gia tri trong khoang b->c
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] >= b) && (a[i]<=c))
        {
            sum = sum + a[i];
            count++;
        }
    }
    std::cout << "Trung binh cong cac phan tu tu b den c: " << (float)sum*1.0/count;
    delete[] a;
}

void _Exercise_7(void)
{
    std::cout << "--------------Bai tap 7---------------------\n";
    char _num[50];
    int n, b, c;
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
    int _soluongsochan = 0;
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            std::cout << "\nNhap a[" << i << "]: ";
            std::cin >> _num;
            if (_Is_Int(_num) == 1)
            {
                a[i] = atoi(_num);
                if (a[i] % 2 == 0) _soluongsochan++;
                break;
            }
        }
    }
    std::cout << "\nSo luong so chan la: " << _soluongsochan;
    std::cout << "\nSo luong so le la: " << n-_soluongsochan;
    delete[] a;
}

int _IsPrimes(int n)
{
    if (n < 2) return 0;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

void _Exercise_8(void)
{
    std::cout << "--------------Bai tap 8---------------------\n";
    char _num[50];
    int n, b, c;
    while (1)
    {
        std::cout << "Nhap n (0 < n < 10001): ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if ((n > 0) && (0 <= 10000))
                break;
        }
    }
    int* a = new int[n];
    int _soluongsoDuong = 0, _tongsoAm = 0, _tongsoDuong = 0;
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            std::cout << "\nNhap a[" << i << "]: ";
            std::cin >> _num;
            if (_Is_Int(_num) == 1)
            {
                a[i] = atoi(_num);
                if (a[i]>0)
                {
                    _soluongsoDuong++;
                    _tongsoDuong += a[i];
                }
                else if (a[i] < 0)
                {
                    _tongsoAm += a[i];
                }
                break;
            }
        }
    }
    std::cout << "\nTrung binh cong cac so am la: " << (float)_tongsoAm/(n-_soluongsoDuong);
    std::cout << "\nTrung binh cong cac so duong la: " << (float)_tongsoDuong/_soluongsoDuong;
    std::cout << "\nTat ca cac so nguyen to trong mang la: \n";
    for (int i = 0; i < n; i++)
    {
        if (_IsPrimes(a[i])) std::cout << a[i] << "   ";
    }
    delete[] a;
}

int _IsSymmetricalArray(int n, int* a)
{
    
    for (int i = 0; i < n/2; i++)
    {
        if (a[i]!=a[n-1-i])
        {
            return 0;
        }
    }
    return 1;
}
void _Exercise_9(void)
{
    std::cout << "--------------Bai tap 9---------------------\n";
    char _num[50];
    int n, b, c;
    while (1)
    {
        std::cout << "Nhap n (0 < n < 10001): ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if ((n > 0) && (0 <= 10000))
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
    if (_IsSymmetricalArray(n, a))
    {
        std::cout << "\nMang la mang doi xung";
    }
    else
    {
        std::cout << "\nMang khong phai la mang doi xung";
    }
    delete[] a;
}

void _Exercise_10(void)
{
    std::cout << "--------------Bai tap 10--------------------\n";
    char _num[50];
    int n, b, c;
    while (1)
    {
        std::cout << "Nhap n (0 < n < 10001): ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if ((n > 0) && (0 <= 10000))
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
    int _doDai = 1, _soXhNhieuNhat = 0, _countDoDai = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i-1])
        {
            _countDoDai++;
            if (_countDoDai > _doDai)
            {
                _doDai = _countDoDai;
            }
        }
        else
        {
            _countDoDai = 1;
        }
    }
    _countDoDai = 1;
    std::cout << "\nSo co lan xuat hien nhieu nhat trong mang a la: \n";
    if (_doDai==1)
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << a[i] << "   ";
        }
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                _countDoDai++;
                if (_countDoDai == _doDai)
                {
                    std::cout << a[i] << "   ";
                }
            }
            else
            {
                _countDoDai = 1;
            }
        }
    }
    delete[] a;
}

void _Exercise_11(void)
{
    std::cout << "--------------Bai tap 11--------------------\n";
    char _num[50];
    int n, X;
    while (1)
    {
        std::cout << "Nhap n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
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
    while (1)
    {
        std::cout << "Nhap X: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            X = atoi(_num);
            break;
        }
    }
    int _mark = 1;
    int _abs = 0;
    
    std::cout << "\nVi tri phan tu tren a co gia tri gan voi X nhat la: \n";
    int _minB = a[0];
    int* b = new int[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = abs(a[i] - X);
        if (b[i] < _minB)
        {
            _minB = b[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == _minB)
        {
            std::cout << i << "   ";
        }
    }
    delete[] a;
    delete[] b;
}


void _Exercise_12(void)
{
    std::cout << "--------------Bai tap 12--------------------\n";
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Nhap n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            break;
        }
    }
    int* a = new int[n];
    std::cout << "\nMang duoc tao random: \n";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%100;
        std::cout << a[i] << "   ";
    }
    std::cout << "\nMang co cac so khac nhau: \n" << a[0] << "   ";
    for (int i = 1; i < n; i++)
    {
        // neu khac nhung so truoc thi in ra
        int _khac = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                _khac = 0;
            }
        }
        if (_khac == 1)
        {
            std::cout << a[i] << "   ";
        }
    }
    delete[] a;
}

void _Exercise_13(void)
{
    std::cout << "--------------Bai tap 13--------------------\n";
    char _num[50];
    int n, X;
    while (1)
    {
        std::cout << "Nhap n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
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
                int _khacNhau = 1;
                for (int j = 0; j < i; j++)
                {
                    if (a[i] == a[j])
                    {
                        _khacNhau = 0;
                    }
                }
                if (_khacNhau == 1)
                {
                    break;
                }
                else
                {
                    std::cout << "\nSo nay da ton tai. Nhap lai!!!\n";
                }
                
            }
        }
    }
    std::cout << "\nMang vua nhap: \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "   ";
    }
    delete[] a;
}

void _Exercise_14(void)
{
    std::cout << "--------------Bai tap 14--------------------\n";
    // Nhap mang (a, N)
    char _num[50];
    int n, m, p, k;
    while (1)
    {
        std::cout << "Mang (a,N). Nhap N: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
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
    // Nhap mang (b, M)
    while (1)
    {
        std::cout << "Mang (b,M). Nhap M: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            m = atoi(_num);
            break;
        }
    }
    int* b = new int[m];
    for (int i = 0; i < m; i++)
    {
        while (1)
        {
            std::cout << "\nNhap b[" << i << "]: ";
            std::cin >> _num;
            if (_Is_Int(_num) == 1)
            {
                b[i] = atoi(_num);
                break;
            }
        }
    }
    // Nhap so nguyen (0<=p<N)
    while (1)
    {
        std::cout << "Nhap p: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            p = atoi(_num);
            if ((p<n)&&(p>=0))
            {
                break;
            }
        }
    }
    // Mang sau khi duoc chen
    int i;
    std::cout << "\nMang a:  \n";
    for (i = 0; i < n; i++)
    {
        std::cout << a[i] << "   ";
    }
    std::cout << "\nMang b:  \n";
    for (i = 0; i < m; i++)
    {
        std::cout << b[i] << "   ";
    }
    std::cout << "\nMang a sau khi chen mang b vao:  \n";
    k = n + m;
    int* c = new int[k];
    for (i = 0; i < k; i++)
    {
        if (i < p)
        {
            c[i] = a[i];
        }
        else if (i<p+m)
        {
            c[i] = b[i - p];
        }
        else
        {
            c[i] = a[i - m];
        }
        
    }
    delete[] a;
    a = new int[k];
    for (i = 0; i < k; i++)
    {
        a[i] = c[i];
        std::cout << a[i] << "   ";
    }
    delete[] a;
    delete[] b;
    delete[] c;
}

void _swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void _bubbleSort(int* arr, int n)
{
    int i, j;
    bool _haveSwap = false;
    for (i = 0; i < n - 1; i++) {
        // i phần tử cuối cùng đã được sắp xếp
        _haveSwap = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                _swap(&arr[j], &arr[j + 1]);
                _haveSwap = true; // Kiểm tra lần lặp này có swap không
            }
        }
        // Nếu không có swap nào được thực hiện => mảng đã sắp xếp. Không cần lặp thêm
        if (_haveSwap == false) {
            break;
        }
    }
}

void _Exercise_15(void)
{
    // Nhập số n và dãy các số nguyên  a[0], a[1],..., a[n-1] 
    // rồi sắp xếp dãy trên theo thứ tự tăng dần theo phương pháp nổi bọt (bubble sort).
    std::cout << "--------------Bai tap 15--------------------\n";
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Mang (a,N). Nhap N: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
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
    std::cout << "\nMang a sau khi sap xep:\n";
    _bubbleSort(a, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "   ";
    }
    delete[] a;
}

void _nhapMang_aN(int* a, int &n)
{
    char _num[50];
    while (1)
    {
        std::cout << "Mang (a,N). Nhap N: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            break;
        }
    }
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
}

void _Exercise_16(void)
{
    // Nhập số liệu  cho dãy số nguyên  a0 , a1 ,..., an-1   và  một giá trị thực  x. 
    // Giả sử dãy  a đã được sắp xếp theo thứ tự tăng dần. 
    // Hãy chèn  giá trị  x vào dãy  a sao cho vẫn giữ được tính sắp xếp của mảng.
    std::cout << "--------------Bai tap 16--------------------\n";
    int n;
    int* a = new int[n];
    _nhapMang_aN(a, n);

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
