
#include <iostream>
using namespace std;
int main(){
    int cgpa;
    cout<<"Enter Your CGPA ";
    cin>>cgpa;
    if((cgpa>=9) && (cgpa<=10)){
        cout<<"Outstanding";
    }
    else if((cgpa>=8)&&(cgpa<9)){
        cout<<"Excellent";
    }
    else if((cgpa>=7)&&(cgpa<8)){
        cout<<"Very Good";
    }
    else if((cgpa>=5)&&(cgpa<7)){
        cout<<"Good";
    }
    else if((cgpa>=4)&&(cgpa<5)){
        cout<<"Satisfactory";
    }
    else if((cgpa<4)){
        cout<<"Reappear";
    }
    
    return 0;
}