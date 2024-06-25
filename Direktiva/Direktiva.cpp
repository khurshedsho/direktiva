#include <iostream>
#define MODE 0
#define cout std::cout
#define endl std::endl
#define cin std::cin

int add(int a, int b) {
    cout << "Результат сложения: " << a + b << endl;
    return 0;
}

int main() {
    setlocale(LC_ALL, "RU");

#ifdef MODE
#if MODE == 0
    cout << "Работаю в режиме тренировки!" << endl;
#elif MODE == 1
    cout << "Работаю в боевом режиме" << endl;
    int a, b;
    cout << "Введите число 1: ";
    cin >> a;
    cout << "Введите число 2: ";
    cin >> b;
    add(a, b);
#else
    cout << "Неизвестный режим. Завершение работы" << endl;
#endif
#else
#error "Неизвестный режим. Убедитесь, что MODE имеет значение 0 или 1."
#endif

    return 0;
}
