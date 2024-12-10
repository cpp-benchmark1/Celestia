// winfinddlg.h
//
// Copyright (C) 2023, Celestia Development Team
//
// Extracted from winmain.cpp:
// Copyright (C) 2001-2007, Chris Laurel <claurel@shatters.net>
//
// Find object dialog.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.


#pragma once

#include <windows.h>

class CelestiaCore;

namespace celestia::win32
{

void ShowFindObjectDialog(HINSTANCE appInstance,
                          HWND appWindow,
                          const CelestiaCore* celestiaCore);

}
