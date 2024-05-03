
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
if (s1 < s2 && s1 < s3) {
cout << s1;
} else if(s2 < s1 && s2 <s3) {
  cout <<s2;
} else {
  cout << s3;
}
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  double D = B * B - 4 * A * C;
  if (D > 0 && A != 0)
  {
    double d_sqrt = sqrt (D);
    double x1 = (-B + d_sqrt) / (2*A);
    double x2 = (-B - d_sqrt) / (2*A);
    cout << x1 << " " << x2 << endl;
  }
  else if (D==0 && A != 0)
  {
    double d_sqrt = sqrt (D);
    double x1 = (-B + d_sqrt) / (2*A);
    cout << x1 << endl;
  }
  else if (A==0 && B!=0)
  {
    cout << (-1*(C))/B << endl;
  }
  else if (A!=0 && B==0)
  {
    cout << sqrt (C/A) << endl;
  }
  else
  {
    cout <<"";
  }
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  if (b==0)
  {
    cout << "Impossible" << endl;
  }
  else 
  {
    cout << a/b << endl;
  }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
  double porc;
  double desc;
  if (n > a && n < b){
    porc = x/100 * n;
    desc = n - porc;
  }
  else if (n > b){
    porc = y/100 * n;
    desc = n - porc;
  }
  else {
    desc = n;
  }
  cout << desc << endl;
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  int res = character;
  if (res >= 97 && res < 123){
    cout << "lower-case alphabet" << endl;
  }
  else if (res >= 65 && res < 91){
    cout << "upper-case alphabet" << endl;
  }
  else{
    cout << "not an alphabet" << endl;
  }
}

void exercise_6(int a) {
  // TODO: YOUR CODE HERE
if(a == 1){
  cout << "Monday" << endl;
}
else if(a == 2){
  cout << "Tuesday" << endl;
}
else if(a == 3){
  cout << "Wednesday" << endl;
}
else if(a == 4){
  cout << "Thursday" << endl;
}
else if(a == 5){
  cout << "Friday" << endl;
}
else if(a == 6){
  cout << "Saturday" << endl;
}
else if(a == 7){
  cout << "Sunday" << endl;
}
else{
  cout << "Invalid input" << endl;
}
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if (r>=0)
  {
    cout << 4*3.14* r*r << endl;
  }
  else
  {
    cout << "Error: Radius cannot be negative." << endl; 
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
int h;
int m;
if(seconds < 0){
    cout << "Error: Input seconds cannot be negative." << endl;
}
else {
h = seconds/3600;
seconds = seconds%3600;
m = seconds/60;
seconds = seconds%60;
  if(h < 10 && m < 10 && seconds < 10){
    cout << "0" << h << ":" << "0" << m << ":" << "0" << seconds << endl;
}
else if(h < 10 && m >= 10 && seconds >= 10){
    cout << "0" << h << ":" << m << ":" << seconds << endl; 
}
else if(h < 10 && m >= 10 && seconds < 10){
    cout << "0" << h << ":" << m << ":" << "0" << seconds << endl;
}
else if(h < 10 && m < 10 && seconds >= 10){
    cout << "0" << h << ":" << "0" << m << ":" << seconds << endl;
}
else if(h >= 10 && m < 10 && seconds < 10){
    cout << h << ":" << "0" << m << ":" << "0" << seconds << endl; 
}
else if(h >= 10 && m >= 10 && seconds < 10){
    cout << h << ":" << m << ":" << "0" << seconds << endl;
}
else{
  cout << h << ":" << m << ":" << seconds << endl;
} 
}
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  char caracter1 = s1[0];
  char caracter2 = s2[0];
  char caracter3 = s3[0];
  char caracter4 = s4[0];
  char caracter5 = s5[0];
  cout << caracter1 << caracter2 << caracter3 << caracter4 << caracter5 << endl;
  if ( caracter1 == caracter5) {
    return "Hemos encontrado algo!";
  }
  else {
    return "Aun sin suerte"; 
  }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  if (a < 0 && b < 0) {
    return 0;
  }
  else{
  int sum = a + b;
  int digit_count = to_string(sum).size();

        int result = sum * digit_count;
        return result;
    }
  }

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  if (number == 11235813) {
    return "Se encontro a Fibonacci";
  }
  else{
    return "Esto no es de Fibonacci";
  }
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {

if(color4== "?" && numb1==numb4|| numb4==-1 && color1==color4|| color1==color4 && numb1==numb4){
  cout << 1 << endl;
}

if(color4== "?" && numb2==numb4|| numb4==-1 && color2==color4|| color2==color4 && numb2==numb4){
  cout << 2 << endl;
}

if(color4== "?" && numb3==numb4|| numb4==-1 && color3==color4|| color3==color4 && numb3==numb4){
  cout << 3 << endl;
}

}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
if(age >= 18 && years_of_experience >= 0 && years_of_experience < 3){
  return "Project coordinator";
}
else if(age >= 18 && years_of_experience >= 3 && years_of_experience < 5){
  return "Project manager";
}
else if(age >= 18 && years_of_experience >= 5){
  return "Senior project manager";
}
else{
  return "Not eligible";
}
return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if(number_of_docs <= 0){
    return "No se encontraron documentos";
  }
  else if (number_of_docs == 1) {
    return "Se encontro un documento";
  }
  else if (number_of_docs > 1){
    return to_string (number_of_docs) + " documentos encontrados";
  }
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
  cout << "Permutamos: a => b, b => c, c => a" << endl;
  cout << "Los valores despues de la permutacion son: a = " << c << " b = " << a << " c = " << b << endl;

}

void exercise_16(int debut, int fin) {
    int hours;
    int tarifa;

    if(debut == fin){
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
    }
    else if(debut > 24 || fin > 24 || debut < 0 || fin < 0){
        cout << "Las horas deben estar entre 0 y 24!" << endl;
    }
    else if(debut > fin){
        cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
    }
    else if(debut >=0 && debut <= 24 && fin >=0 && fin <=24){

            if(debut <= 7 && fin <= 7){
                hours = fin - debut;
                tarifa = hours * 1;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
                cout << "El monto total a pagar es de " << tarifa << " boliviano(s)." << endl;

            }else if(debut <= 17 && debut >= 7 && fin >= 7 && fin <= 17){
                hours = fin - debut;
                tarifa = hours * 2;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
                cout << "El monto total a pagar es de " << tarifa << " boliviano(s)." << endl;

            }else if(debut <= 24 && debut >= 17 && fin >= 17 && fin <= 24){
                hours = fin - debut;
                tarifa = hours * 1;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
                cout << "El monto total a pagar es de " << tarifa << " boliviano(s)." << endl;

            }else if(debut <= 7 && fin >= 7 && fin <= 17){
                hours = fin - debut;
                int hours1 = debut-7;
                int tarifa1 = hours1 * 1;
                int hours2 = hours - hours1;
                int tarifa2 = hours2 * 2;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
                cout << hours2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
                cout << "El monto total a pagar es de " << tarifa1 + tarifa2 << " boliviano(s)." << endl;
            }else if(debut <= 7 && fin >= 17 && fin <= 24){
                hours = fin - debut;
                int hours1 = 7-debut;
                int tarifa1 = hours1 * 1;
                int hours2 = fin-17;
                int tarifa2 = hours2 * 1;
                int hours11 = hours1 + hours2;
                int tarifa11 = hours11 * 1;
                int hours3 = hours - hours11;
                int tarifa3 = hours3 * 2;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours11 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
                cout << hours3 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
                cout << "El monto total a pagar es de " << tarifa1 + tarifa2 + tarifa3 << " boliviano(s)." << endl;
            }else if(debut <= 17 && debut >= 7 && fin >= 17 && fin <= 24){
                hours = fin - debut;
                int hours1 = 17-debut;
                int tarifa1 = hours1 * 2;
                int hours2 = hours - hours1;
                int tarifa2 = hours2 * 1;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours2 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
                cout << hours1 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
                cout << "El monto total a pagar es de " << tarifa1 + tarifa2 << " boliviano(s)." << endl;
                
            }
    }
}