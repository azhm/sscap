#pragma once

#include <Windows.h>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <tchar.h>
#include <tcpmib.h>

#include "Utils.h"

wchar_t * WINAPI lm_a2u(const char *str) {
    if (str == NULL || lstrlenA(str) == 0) { return NULL; }
    int size_needed = MultiByteToWideChar(CP_UTF8, 0, str, (int)lstrlenA(str), NULL, 0);
    wchar_t *strTo = new wchar_t[size_needed + 1]; strTo[size_needed] = 0;
    MultiByteToWideChar(CP_UTF8, 0, str, (int)lstrlenA(str), strTo, size_needed);
    return strTo;
}

char * WINAPI lm_u2a_s(wchar_t * str) {
    if (str==NULL || lstrlenW(str) == 0) { return NULL; }
    int size_needed = WideCharToMultiByte(CP_UTF8, 0, str, (int)lstrlenW(str), NULL, 0, NULL, NULL);
    char *strTo = new char[size_needed + 1]; strTo[size_needed] = 0;
    WideCharToMultiByte(CP_UTF8, 0, str, (int)lstrlenW(str), strTo, size_needed, NULL, NULL);
    return strTo;
}

char * WINAPI lm_u2a(wchar_t * str) {
    return lm_u2a_s(str);
}

wchar_t* WINAPI lm_a2u_s(const char *str) {
    return lm_a2u(str);
}

wchar_t* WINAPI lm_u82u16_s(const char *u8) {
    return NULL;
}

wchar_t* WINAPI lm_u82u16(const char *u8) {
    return NULL;
}

char * WINAPI lm_u162u8_s(wchar_t* u16) {
    return NULL;
}

char * WINAPI lm_u162u8(wchar_t * str) {
    return NULL;
}

void GetTimeString(time_t t, TCHAR *szTimeFormat, TCHAR *szFormatOut, int len) {
}

int WINAPI SplitStringW(const wstring& input, const wstring& delimiter, vector<wstring>& results, bool includeEmpties) {
    return 0;
}

int WINAPI SplitStringA(const string& input, const string& delimiter, vector<string>& results, bool includeEmpties) {
    return 0;
}

std::string& WINAPI trim(string& s, const std::string& drop) {
    return s;
}

std::wstring& WINAPI trimW(wstring& s, const std::wstring& drop) {
    return s;
}

// 判断文件是否存在
bool IsFileExist(TCHAR *file) {
    return false;
}

char* readallfile(TCHAR *fname, TCHAR *flags) {
    return NULL;
}

char* readallfile(TCHAR *fname, TCHAR *flags, int *outlength) {
    return NULL;
}

double GetTimeInterval(time_t t1, time_t t2) {
    return 0;
}

void Show_bytes_in_char(long long bytes, TCHAR *szBuffer, int len) {
}

string   Replace(string   &str, string string_to_replace, string new_string) {
    return str;
}

BOOL PutTextToClipboardA(LPCSTR pTxtData, HWND hWnd) {
    return FALSE;
}

BOOL CheckTcpPortValid(UINT nPort) {
    return FALSE;
}

UINT SearchAnUnsedPort(UINT nFromPort, UINT nSearchAmount) {
    return 0;
}

string implode(const vector<string>& vec, const char* delim) {
    return string();
}

BOOL ParseDestinationUrl(LPCSTR szURL, LPSTR szProtocol, int p_len, LPSTR szAddress, int a_len, u_short &dwPort, LPSTR szURI, int u_len) {
    return FALSE;
}

char * strdup_printf(const char* fmt, ...) {
    return NULL;
}

WORD HKF2SDK(WORD mod) {
    return 0;
}

std::string LowerStringA(const std::string &str) {
    return string();
}
