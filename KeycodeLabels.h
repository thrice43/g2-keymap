/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _UI_KEYCODE_LABELS_H
#define _UI_KEYCODE_LABELS_H

struct KeycodeLabel {
    const char *literal;
    int value;
};

static const KeycodeLabel KEYCODES[] = {
    { "SOFT_LEFT", 1 },
    { "SOFT_RIGHT", 2 },
    { "HOME", 3 },
    { "BACK", 4 },
    { "CALL", 5 },
    { "ENDCALL", 6 },
    { "0", 7 },
    { "1", 8 },
    { "2", 9 },
    { "3", 10 },
    { "4", 11 },
    { "5", 12 },
    { "6", 13 },
    { "7", 14 },
    { "8", 15 },
    { "9", 16 },
    { "STAR", 17 },
    { "POUND", 18 },
    { "DPAD_UP", 19 },
    { "DPAD_DOWN", 20 },
    { "DPAD_LEFT", 21 },
    { "DPAD_RIGHT", 22 },
    { "DPAD_CENTER", 23 },
    { "VOLUME_UP", 24 },
    { "VOLUME_DOWN", 25 },
    { "POWER", 26 },
    { "CAMERA", 27 },
    { "CLEAR", 28 },
    { "A", 29 },
    { "B", 30 },
    { "C", 31 },
    { "D", 32 },
    { "E", 33 },
    { "F", 34 },
    { "G", 35 },
    { "H", 36 },
    { "I", 37 },
    { "J", 38 },
    { "K", 39 },
    { "L", 40 },
    { "M", 41 },
    { "N", 42 },
    { "O", 43 },
    { "P", 44 },
    { "Q", 45 },
    { "R", 46 },
    { "S", 47 },
    { "T", 48 },
    { "U", 49 },
    { "V", 50 },
    { "W", 51 },
    { "X", 52 },
    { "Y", 53 },
    { "Z", 54 },
    { "COMMA", 55 },
    { "PERIOD", 56 },
    { "ALT_LEFT", 57 },
    { "ALT_RIGHT", 58 },
    { "SHIFT_LEFT", 59 },
    { "SHIFT_RIGHT", 60 },
    { "TAB", 61 },
    { "SPACE", 62 },
    { "SYM", 63 },
    { "EXPLORER", 64 },
    { "ENVELOPE", 65 },
    { "ENTER", 66 },
    { "DEL", 67 },
    { "GRAVE", 68 },
    { "MINUS", 69 },
    { "EQUALS", 70 },
    { "LEFT_BRACKET", 71 },
    { "RIGHT_BRACKET", 72 },
    { "BACKSLASH", 73 },
    { "SEMICOLON", 74 },
    { "APOSTROPHE", 75 },
    { "SLASH", 76 },
    { "AT", 77 },
    { "NUM", 78 },
    { "HEADSETHOOK", 79 },
    { "FOCUS", 80 },
    { "PLUS", 81 },
    { "MENU", 82 },
    { "NOTIFICATION", 83 },
    { "SEARCH", 84 },
    { "MEDIA_PLAY_PAUSE", 85 },
    { "MEDIA_STOP", 86 },
    { "MEDIA_NEXT", 87 },
    { "MEDIA_PREVIOUS", 88 },
    { "MEDIA_REWIND", 89 },
    { "MEDIA_FAST_FORWARD", 90 },
    { "MUTE", 91 },
    { "USER1", 92 },
    { "USER2", 93 },
    { "USER3", 94 },
    { "USER4", 95 },
    { "USER5", 96 },
    { "FUNC_1", 97 },
    { "FUNC_2", 98 },
    { "FUNC_3", 99 },
    { "FUNC_4", 100 },
    { "FUNC_5", 101 },
    { "FUNC_6", 102 },
    { "FUNC_7", 103 },
    { "FUNC_8", 104 },
    { "QUECHAR", 105 },
    {"BTN_MOUSE",106},
    // NOTE: If you add a new keycode here you must also add it to:
    //   (enum KeyCode, in this file)
    //   frameworks/base/core/java/android/view/KeyEvent.java
    //   tools/puppet_master/PuppetMaster.nav_keys.py
    //   frameworks/base/core/res/res/values/attrs.xml

    { NULL, 0 }
};

// These constants need to match the above mappings.
typedef enum KeyCode {
    kKeyCodeUnknown = 0,

    kKeyCodeSoftLeft = 1,
    kKeyCodeSoftRight = 2,
    kKeyCodeHome = 3,
    kKeyCodeBack = 4,
    kKeyCodeCall = 5,
    kKeyCodeEndCall = 6,
    kKeyCode0 = 7,
    kKeyCode1 = 8,
    kKeyCode2 = 9,
    kKeyCode3 = 10,
    kKeyCode4 = 11,
    kKeyCode5 = 12,
    kKeyCode6 = 13,
    kKeyCode7 = 14,
    kKeyCode8 = 15,
    kKeyCode9 = 16,
    kKeyCodeStar = 17,
    kKeyCodePound = 18,
    kKeyCodeDpadUp = 19,
    kKeyCodeDpadDown = 20,
    kKeyCodeDpadLeft = 21,
    kKeyCodeDpadRight = 22,
    kKeyCodeDpadCenter = 23,
    kKeyCodeVolumeUp = 24,
    kKeyCodeVolumeDown = 25,
    kKeyCodePower = 26,
    kKeyCodeCamera = 27,
    kKeyCodeClear = 28,
    kKeyCodeA = 29,
    kKeyCodeB = 30,
    kKeyCodeC = 31,
    kKeyCodeD = 32,
    kKeyCodeE = 33,
    kKeyCodeF = 34,
    kKeyCodeG = 35,
    kKeyCodeH = 36,
    kKeyCodeI = 37,
    kKeyCodeJ = 38,
    kKeyCodeK = 39,
    kKeyCodeL = 40,
    kKeyCodeM = 41,
    kKeyCodeN = 42,
    kKeyCodeO = 43,
    kKeyCodeP = 44,
    kKeyCodeQ = 45,
    kKeyCodeR = 46,
    kKeyCodeS = 47,
    kKeyCodeT = 48,
    kKeyCodeU = 49,
    kKeyCodeV = 50,
    kKeyCodeW = 51,
    kKeyCodeX = 52,
    kKeyCodeY = 53,
    kKeyCodeZ = 54,
    kKeyCodeComma = 55,
    kKeyCodePeriod = 56,
    kKeyCodeAltLeft = 57,
    kKeyCodeAltRight = 58,
    kKeyCodeShiftLeft = 59,
    kKeyCodeShiftRight = 60,
    kKeyCodeTab = 61,
    kKeyCodeSpace = 62,
    kKeyCodeSym = 63,
    kKeyCodeExplorer = 64,
    kKeyCodeEnvelope = 65,
    kKeyCodeNewline = 66,
    kKeyCodeDel = 67,
    kKeyCodeGrave = 68,
    kKeyCodeMinus = 69,
    kKeyCodeEquals = 70,
    kKeyCodeLeftBracket = 71,
    kKeyCodeRightBracket = 72,
    kKeyCodeBackslash = 73,
    kKeyCodeSemicolon = 74,
    kKeyCodeApostrophe = 75,
    kKeyCodeSlash = 76,
    kKeyCodeAt = 77,
    kKeyCodeNum = 78,
    kKeyCodeHeadSetHook = 79,
    kKeyCodeFocus = 80,
    kKeyCodePlus = 81,
    kKeyCodeMenu = 82,
    kKeyCodeNotification = 83,
    kKeyCodeSearch = 84,
    kKeyCodePlayPause = 85,
    kKeyCodeStop = 86,
    kKeyCodeNextSong = 87,
    kKeyCodePreviousSong = 88,
    kKeyCodeRewind = 89,
    kKeyCodeForward = 90,
    kKeyCodeMute = 91,
    kKeyCodeUser1 = 92,
    kKeyCodeUser2 = 93,
    kKeyCodeUser3 = 94,
    kKeyCodeUser4 = 95,
    kKeyCodeUser5 = 96,
    kKeyCodeFunc1 = 97,
    kKeyCodeFunc2 = 98,
    kKeyCodeFunc3 = 99,
    kKeyCodeFunc4 = 100,
    kKeyCodeFunc5 = 101,
    kKeyCodeFunc6 = 102,
    kKeyCodeFunc7 = 103,
    kKeyCodeFunc8 = 104,
    kKeyCodeQuechar = 105,
    kKeyCodeBtnMouse = 106
} KeyCode;

static const KeycodeLabel FLAGS[] = {
    { "WAKE", 0x00000001 },
    { "WAKE_DROPPED", 0x00000002 },
    { "SHIFT", 0x00000004 },
    { "CAPS_LOCK", 0x00000008 },
    { "ALT", 0x00000010 },
    { "ALT_GR", 0x00000020 },
    { "MENU", 0x00000040 },
    { "LAUNCHER", 0x00000080 },
    { NULL, 0 }
};

#endif // _UI_KEYCODE_LABELS_H
