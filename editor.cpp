
#include "editor.h"

void Editor::Left() {
    cursor_position_--;
}

void Editor::Right() {
    cursor_position_++;
}

void Editor::Insert(char token) {
    text_.insert(cursor_position_, token);
    //cursor_position_ = text_.end();
}

void Editor::Cut(size_t tokens) {

}

void Editor::Copy(size_t tokens) {

}

void Editor::Paste() {

}

std::string Editor::GetText() const {

    std::string s1;
return s1;
}
