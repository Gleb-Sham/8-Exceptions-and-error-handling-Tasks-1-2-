#include <iostream>
#include <string>
#include <Windows.h>

class bad_length
{
public:
    const char* message;
    bad_length(const char* msg) : message(msg) {}
};

int function(std::string str, int forbidden_length)
{
    int length = str.length();
    if (length == forbidden_length)
    {
        throw bad_length("Вы ввели слово запретной длины! До свидания");
    }
    return length;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int forbidden_len;
    std::string word;

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_len;

    while (true)
    {
        std::cout << "Введите слово: ";
        std::cin >> word;

        try
        {
            int len = function(word, forbidden_len);
            std::cout << "Длина слова \"" << word << "\" равна " << len << std::endl;
        }
        catch (const bad_length& e)
        {
            std::cout << e.message << std::endl;
            break;
        }
    }

    return EXIT_SUCCESS;
}