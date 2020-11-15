#include <iostream> 
#include <iomanip> 
#include <time.h> 
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)         cout << setw(4) << a[i];     cout << endl;
}
void Sort(int* a, const int size)  // метод обм≥ну (бульбашки) 
{
    for (int i = 1; i < size; i++)     // л≥чильник ≥терац≥й    
        for (int j=0; j<size-i; j++)   // номер поточного елемента       
            if (a[j + 1] > a[j])           // €кщо порушено умову впор€дкуванн€       
            {                          // - обм≥н елемент≥в м≥сц€ми          
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }


}
int main() {
    srand((unsigned)time(NULL));  // ≥н≥ц≥ал≥зац≥€ генератора випадкових чисел    
    const int n=5;     int a[n]; 
    int Low = -5;     int High = 23;

    Create(a, n, Low, High);
    Print(a, n);
    Sort(a, n);
      Print(a, n);

         
    return 0;
}
