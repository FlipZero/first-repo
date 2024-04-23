#pragma once

#include <Windows.h>

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class Window
{
public:
    Window();
    void NewFunction(WNDCLASS &wndClass, const wchar_t *CLASS_NAME);
    void gg(WNDCLASS &wndClass, const wchar_t *CLASS_NAME);
    Window(const Window &) = delete;
    Window &operator=(const Window &) = delete;
    ~Window();

    bool ProcessMessages();

private:
    HINSTANCE m_hInstance;
    HWND m_hWnd;
};