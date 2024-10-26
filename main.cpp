#include <iostream>

using namespace std;

class matrix {
  private:
    int value1;
    int value2;
    int value3;
    int value4;
  
  public:
    matrix(int value1, int value2, int value3, int value4){
      this-> value1 = value1;
      this-> value2 = value2;
      this-> value3 = value3;
      this-> value4 = value4;
    }

    void print_matrix (){
      cout << "\nResult:\nValue 1: " << value1 << "\nValue 2: " << value2 << "\nValue 3: " << value3 <<  "\nValue 4: " << value4 << "\n";
    }

    matrix operator + (matrix other_value){
      int new_value1 = other_value.value1 + value1;
      int new_value2 = other_value.value2 + value2;
      int new_value3 = other_value.value3 + value3;
      int new_value4 = other_value.value4 + value4;
      return matrix (new_value1, new_value2, new_value3, new_value4);
    }

    matrix operator - (matrix other_value){
      int new_value1 = value1 - other_value.value1;
      int new_value2 = value2 - other_value.value2;
      int new_value3 = value3 - other_value.value3;
      int new_value4 = value4 - other_value.value4;
      return matrix (new_value1, new_value2, new_value3, new_value4);
    }

    matrix operator * (matrix other_value){
      int new_value1 = (other_value.value1 * value1) + (value2 * other_value.value3);
      int new_value2 = (value1 * other_value.value2) + (value2 * other_value.value4);
      int new_value3 = (value3 * other_value.value1) + (value4 * other_value.value3);
      int new_value4 = (value3 * other_value.value2) + (value4 * other_value.value4);
      return matrix (new_value1, new_value2, new_value3, new_value4);
    }
};

int main () { 
  string ask1;
  cout << "which operator do you wanna use?➕➖✖️" << "\n";
  cin >> ask1;
  
  if(ask1 == "+"){
    cout << "\nMatrix # 1 information:\n";
    int a_value_1;
    cout << "a value: ";
    cin >> a_value_1;

    int b_value_1;
    cout << "b value: ";
    cin >> b_value_1;

    int c_value_1;
    cout << "c value: ";
    cin >> c_value_1;

    int d_value_1;
    cout << "d value: ";
    cin >> d_value_1;
    
    cout << "\nMatrix # 2 information:\n";
    int a_value_2;
    cout << "a value: ";
    cin >> a_value_2;

    int b_value_2;
    cout << "b value: ";
    cin >> b_value_2;

    int c_value_2;
    cout << "c value: ";
    cin >> c_value_2;

    int d_value_2;
    cout << "d value: ";
    cin >> d_value_2;
    
    matrix object1 = matrix (a_value_1, b_value_1, c_value_1, d_value_1);
    matrix object2 = matrix (a_value_2, b_value_2, c_value_2, d_value_2);
    matrix object3 = object1 + object2;
    object3.print_matrix();
  }

  if(ask1 == "-"){
    cout << "\nMatrix # 1 information:\n";
    int a_value_1;
    cout << "a value: ";
    cin >> a_value_1;

    int b_value_1;
    cout << "b value: ";
    cin >> b_value_1;

    int c_value_1;
    cout << "c value: ";
    cin >> c_value_1;

    int d_value_1;
    cout << "d value: ";
    cin >> d_value_1;

    cout << "\nMatrix # 2 information:\n";
    int a_value_2;
    cout << "a value: ";
    cin >> a_value_2;

    int b_value_2;
    cout << "b value: ";
    cin >> b_value_2;

    int c_value_2;
    cout << "c value: ";
    cin >> c_value_2;

    int d_value_2;
    cout << "d value: ";
    cin >> d_value_2;

    matrix object1 = matrix (a_value_1, b_value_1, c_value_1, d_value_1);
    matrix object2 = matrix (a_value_2, b_value_2, c_value_2, d_value_2);
    matrix object3 = object1 - object2;
    object3.print_matrix();
  }

  if(ask1 == "*"){
    cout << "\nMatrix # 1 information:\n";
    int a_value_1;
    cout << "a value: ";
    cin >> a_value_1;

    int b_value_1;
    cout << "b value: ";
    cin >> b_value_1;

    int c_value_1;
    cout << "c value: ";
    cin >> c_value_1;

    int d_value_1;
    cout << "d value: ";
    cin >> d_value_1;

    cout << "\nMatrix # 2 information:\n";
    int a_value_2;
    cout << "a value: ";
    cin >> a_value_2;

    int b_value_2;
    cout << "b value: ";
    cin >> b_value_2;

    int c_value_2;
    cout << "c value: ";
    cin >> c_value_2;

    int d_value_2;
    cout << "d value: ";
    cin >> d_value_2;

    matrix object1 = matrix (a_value_1, b_value_1, c_value_1, d_value_1);
    matrix object2 = matrix (a_value_2, b_value_2, c_value_2, d_value_2);
    matrix object3 = object1 * object2;
    object3.print_matrix();
  }
}
