//Мakar_3043_lab1_number π with specified precision (Leibniz series)

float test(float i) { //расчетная функция
    float i1 = -1, z = 0, j = 0, i2 = 0, pi;
    while (j <= i) { // цикл для вычисления бесконечной суммы 
        while (z <= j) {
            i1 *= -1; 
            z++;
        }
        i2 = i1 / (2 * j + 1) + i2;
        j++;
    };
    pi = 4 * i2;
    return pi;
}

int check(int o) { //тестирующая функция
    float p;
    int x = 0, y = 5, c = 0, result;
    float pi[5] = { 3.1514930725, 3.1425914764, 3.1416985989, 3.1416058540, 3.1415972710 };

    while (x < y) { // цикл для проверки значений числа пи
        p = test(o);
        if (p == pi[c]) result = 0;
        else result = 1;
        c++;
        o *= 10;
        x++;
        if (result == 1) break;
    }
    return result;
}

int main() { //целевая функция
    int o = 100;
    int result = check(o);
    return result;
}
