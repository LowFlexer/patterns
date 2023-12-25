#include <iostream>

class AutoServiceManager {
private:
    static AutoServiceManager* instance;

    // Приватний конструктор, щоб заборонити створення екземплярів класу ззовні
    AutoServiceManager() {
        // Ініціалізація конструктора
    }

public:
    // Глобальна точка доступу для отримання екземпляру класу
    static AutoServiceManager* getInstance() {
        if (instance == nullptr) {
            instance = new AutoServiceManager();
        }
        return instance;
    }

    // Додайте інші методи тут, які відображають функціональність автосервісу
};

// Ініціалізація статичної змінної класу
AutoServiceManager* AutoServiceManager::instance = nullptr;

int main() {
    // Отримання єдиного екземпляру класу
    AutoServiceManager* manager1 = AutoServiceManager::getInstance();
    AutoServiceManager* manager2 = AutoServiceManager::getInstance();

    // Перевірка, чи це справді один екземпляр
    if (manager1 == manager2) {
        std::cout << "Both managers refer to the same instance." << std::endl;
    }
    else {
        std::cout << "Managers are different instances." << std::endl;
    }

    return 0;
}
