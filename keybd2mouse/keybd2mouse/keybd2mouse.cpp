#include <Windows.h>
#include <iostream>


// VK_LEFT - cursor moves leftward.
// VK_UP - cursor moves upward.
// VK_RIGHT - cursor moves rightward.
// VK_DOWN - cursor moves down.

// VK_ENTER - clicks with left mouse.


int main() {
    
    while (true) {
        if (GetAsyncKeyState(0x25) & 0x8000) {
            POINT currentPos;
            if (GetCursorPos(&currentPos)) {
                int newX = currentPos.x + (-1);
                if (SetCursorPos(newX, currentPos.y)) {
                    std::cout << "(" << newX << ", " << currentPos.y << ")" << std::endl;
                    Sleep(0.1);
                }
            }
        }

        if (GetAsyncKeyState(0x26) & 0x8000) {
            POINT currentPos;
            if (GetCursorPos(&currentPos)) {
                int newY = currentPos.y + (-1);
                if (SetCursorPos(currentPos.x, newY)) {
                    std::cout << "(" << currentPos.x << ", " << newY << ")" << std::endl;
                    Sleep(0.1);
                }
            }
        }

        if (GetAsyncKeyState(0x27) & 0x8000) {
            POINT currentPos;
            if (GetCursorPos(&currentPos)) {
                int newX = currentPos.x + 1;
                if (SetCursorPos(newX, currentPos.y)) {
                    std::cout << "(" << newX << ", " << currentPos.y << ")" << std::endl;
                    Sleep(0.1);
                }
            }
        }

        if (GetAsyncKeyState(0x28) & 0x8000) {
            POINT currentPos;
            if (GetCursorPos(&currentPos)) {
                int newY = currentPos.y + 1;
                if (SetCursorPos(currentPos.x, newY)) {
                    std::cout << "(" << currentPos.x << ", " << newY << ")" << std::endl;
                    Sleep(0.1);
                }
            }
        }

        if (GetAsyncKeyState(0x28) & 0x8000) {
            POINT currentPos;
            if (GetCursorPos(&currentPos)) {
                int newY = currentPos.y + 1;
                if (SetCursorPos(currentPos.x, newY)) {
                    std::cout << "(" << currentPos.x << ", " << newY << ")" << std::endl;
                    Sleep(0.1);
                }
            }
        }


        if (GetAsyncKeyState(0x0D) & 0x8000) {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            Sleep(1);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        }


        Sleep(0.8f);
    }

    return 0;
}
