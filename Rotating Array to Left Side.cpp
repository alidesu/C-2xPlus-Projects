#include <iostream>;
using namespace std;
int main() {

    int A[6] {31,21,41,61,51,71};
    int B[6] {0};
    int k = 0;
    int n = 6;
    cout<<"Enter the no. of position-(k) that you want to move left: ";
    cin>>k;

    for (int i = 0; i < 6; ++i) {
        B[(i+k)%n] = A[i];
    }
    for (int i = 0; i < 6; ++i) {
        cout<<A[i]<<", ";
    }
    cout<<endl;

    for (int i = 0; i < 6; ++i) {
        cout<<B[i]<<", ";
    }
    return 0;
}
