#include <iostream>
/*using namespace std;
int main(){

int a=1,b=2,n1,n2;
int sum=0;
cout<<"enter the range n1 and n2: ";
cin>>n1>>n2;
while(a<=n1 && b<=n2)
{
sum=sum+(a-b);
a+=1;
b+=1;


}
cout<<"the value of sum:"<<sum;


}*/
using namespace std;
int main()
{

    int n, even = 0, odd = 0;
    int sum;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            even = even + i;
        }
        else
        {

            odd = odd + i;
        }
    }
    sum = even - odd;
    cout << sum;
}
