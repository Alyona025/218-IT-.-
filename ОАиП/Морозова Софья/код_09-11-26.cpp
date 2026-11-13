#include <iostream>
using namespace std;

int main() 
{
  int n, steps=0, sum, temp, digit, count;
  int odd, zeros, minDigit, even, maxDigit;
  cout<<"Введите n ";
  cin>>n;

  if(n<1 || n>1000000000){
    cout<<"Ошибка";
    return 0;
  }
  while(n>=10){
    temp=n;
    even=0;
    maxDigit=0;
    odd=0;
    zeros=0;
    minDigit=9;
    sum=0;
    count=0;
    while(temp>0){
        digit=temp%10;
        sum=sum+digit;
        count++;
        if(digit%2==0)
          even++;
          if(digit>maxDigit)
          maxDigit=digit;

          if(digit%2!=0)
          odd++;
          if(digit==0)
          zeros++;
          if(digit<minDigit)
          minDigit=digit;

        temp= temp/10;
    }
    cout<<"Число "<<n<<endl;
    cout<<"Сумма "<<sum<<endl;
    cout<<"Количество цифр "<<count<<endl;
    cout<<"Количество нулей "<<zeros<<endl;
    cout<<"Нечетные "<<odd<<endl;
    cout<<"Четные "<<even<<endl;
    cout<<"Минимальная цифра "<<minDigit<<endl;
    cout<<"Максимальная цифра "<<maxDigit<<endl;
    n=sum;
    steps++;
  }
  cout<<"Всего преобразований "<<steps<<endl;
  cout<<"Итоговая цифра "<<n<<endl;
return 0;

}