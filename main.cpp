#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void BubbleSort(vector <T> &data) {
    for (int i = 0; i < data.size() - 1; i++)
        for (int j = i + 1; j < data.size(); j++) {
            if (data[i] > data[j]) {
                swap(data[i], data[j]);
            }
        }
}

template <typename T>
void BubbleSort(T &data, int dataSize) {
    for (int i = 0; i < dataSize-1; i++)
        for (int j = i + 1; j < dataSize; j++) {
            if (data[i] > data[j]) {
                swap(data[i], data[j]);
            }
        }
}

template <typename T>
void display(vector<T> Vector)
{
    for (int i=0; i<Vector.size();i++)
        cout << Vector[i]<<endl;
}

template <typename T>
void display(T data, int Size)
{
    for (int i=0; i<Size;i++)
        cout << data[i]<<endl;
}

class myClass
{
public:
    int a;
};

template <typename T1, typename T2>
void BubbleSort(T1 &data,T2 *field ,int dataSize) {
    cout<<sizeof(T1)<<endl<<endl;
    for (int i = 0; i < dataSize-1; i++)
        for (int j = i + 1; j < dataSize; j++) {
            if (field[i] > field[i+sizeof(T1)]) {
                swap(field[i], field[i+sizeof(T1)]);
            }
        }
}

int main() {
    const int size=10;
    myClass Data[100];
    int *u=&(Data[0].a);
    int a[size];
    for(int i=0; i<size; i++) a[i]=rand()%100000;
  //  BubbleSort(a, size);
    for (int i=0; i<size; i++) cout<<Data[i].a<<endl;
    BubbleSort(Data[0], u, size);
    for (int i=0; i<size; i++) cout<<Data[i].a<<endl;
    return 0;
}