
#include <iostream>
using namespace std;
template <typename T>
T incr(T x) {//increase
    return x + 1;

}
//yer değiştirme ( class T )
template <typename T>
void substitution(T& x, T& y) {
    T temp = x;
    x = y;
    y = temp;

}
template<class T>
class myclass {
public:
    T data;
    myclass(T data) : data(data) {

    }
};
int main()
{
    //datası int yapıldı
    myclass<int> b(10); //şablon sınıftan nesne oluşturuldu
    cout << b.data << endl;




    //// değişkenlerimizin değerleri sürekli değişebilir 
  ///  int a = 5;
  ///  int b = 10;
  ///  cout << a << "\t" << b << endl;
   /// substitution(a, b);
   /// cout << a << "\t" << b << endl;



}