#include <iostream>
using namespace std;

int main()
{
    long long N;
    long long sum;
    int kol = 0;
    long long cop;
    cout << "Введите число: ";
    cin >> N ;
    cout << "\n";
  if (N < 10)
    {
        cout << "Ошибка, введите число не меньше 10" << endl;
        return 1;
    }

    while(N >= 10) // пока число многозначное
    {
        sum = 0;
        cop = N;
        while (cop > 0)
        {
            sum += cop % 10;
            cop /= 10;
        }
           N = sum;
           kol++;
           cout << N << " -> ";    
    }
           cout << "\n Преобразований: " << kol << endl;
           cout << "Итоговая цифра: " << N;


   
}


 

