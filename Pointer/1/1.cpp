#include <iostream>
#include <string>

using namespace std;

void generic_swap(void *a, void *b, int size)
{
    char tmp = NULL;
    for (size--; size >= 0; size--)
    {
        cout << size << " ";
        tmp = ((char*)a)[size];
        cout << tmp << " " << endl;
        ((char*)a)[size] = ((char*)b)[size];
        ((char*)b)[size] = tmp;
    }
}

void generic_swap2(void *a, void *b, size_t size)
{
    char *pa = (char *)a;
    char *pb = (char *)b;
    char tmp = NULL;
    int i;
    for (i = 0; i<size; ++i) {
        cout << i << " ";
        tmp = pa[i];
        cout << tmp << " " << endl;
        pa[i] = pb[i];
        pb[i] = tmp;
    }
}

int main()
{
    double num1 = 143.546463477, num2 = 34.8584546253;
    //int num1 = 435345666, num2 = 10;

    //generic_swap2(&num1, &num2, sizeof(int));
    //cout << num1 << " " << num2 << endl;

    //generic_swap(&num1, &num2, sizeof(int));
    //cout << num1 << " " << num2 << endl;

    cout.precision(15);
    generic_swap2(&num1, &num2, sizeof(double));
    cout << num1 << " " << num2 << endl;

    generic_swap(&num1, &num2, sizeof(double));
    cout << num1 << " " << num2 << endl;

    return 0;
}