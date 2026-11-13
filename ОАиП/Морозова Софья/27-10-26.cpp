#include <iostream>
using namespace std;

int main() {
    long long N;
    
        cout << "Введите число: ";
        cin >> N;
    while (N < 1 || N > 1000000000){
    cout<<"Ошибка";
    cin>>N;
    }

    long long count = 0;
    cout << N;

    while (N > 9) {
        long long temp = N;
        long long sum = 0;
        
        while (temp > 0) {
            sum+=temp%10;
            temp= temp/10;
        }
        
        N = sum;
        count++;
        cout << "-->" << N;
    }

    cout << "\n Преобразований: " << count;
    cout << "\n Итоговая цифра: " << N << endl;

    return 0;
}
