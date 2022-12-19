#pragma once
#include <string>
#include <list>

class Editor {
public:

    Editor() = default;
    //Editor();
    // сдвинуть курсор влево
    void Left();
    // сдвинуть курсор вправо
    void Right();
    // вставить символ token
    void Insert(char token);
    // вырезать не более tokens символов, начиная с текущей позиции курсора
    void Cut(size_t tokens = 1);
    // cкопировать не более tokens символов, начиная с текущей позиции курсора
    void Copy(size_t tokens = 1);
    // вставить содержимое буфера в текущую позицию курсора
    void Paste();
    // получить текущее содержимое текстового редактора
    std::string GetText() const;

private:
    std::list<char> text_;
    std::list<char> buffer_;
    std::list<char>::iterator cursor_position_ = text_.end();
};
