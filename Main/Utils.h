#pragma once
#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::wstring StringToWString(const std::string &str);
std::vector<float> LoadWavFile(const std::string& wavPath);
char GetPressedAlphaNumericKey();