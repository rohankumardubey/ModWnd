#pragma once
#include <Windows.h>
#include "CaptainHook.h"

/// \brief A Move Manager for handling window movements
class move_manager
{
public:
	/// \brief Initialize a new move manager and hook to modifier key down
	explicit move_manager(LPVOID param);
	/// \brief Delete this move manager and unhook any key down
	~move_manager();
private:
	/// \brief Move the given Window (by handle) to the specified position
	/// \param window A handle to the Window
	/// \param x The X coordinate in pixels
	/// \param y The Y coordinate in pixels
	static void move(HWND window, int x, int y);
	/// \brief The keyboard hook
	captain_hook hook_;
};
