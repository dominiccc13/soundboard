# Soundboard Usage Guide

## Requirements
* Windows OS
* C++17 runtime / Visual C++ Redistributable
* Windows SDK and Standard C++ libraries
* VB-Audio Virtual Cable (VB-Cable)

## Audio Setup
To play audio through your microphone:
1. Open **Control Panel** > **Sound** > **Recording**.
2. Double-click your primary microphone, go to the **Listen** tab, and check **Listen to this device**.
3. Set your primary recording device to **CABLE Output**.

## Launching
1. You made need to adjust soundbiteBasePath in line 1 of the main() function in Main.cpp.
2. Open the `Build` folder.
3. Run `soundboard.exe`.

To confirm the application is running, check Task Manager or open the hidden icons menu in the Windows system tray.

## Controls
Left-click the system tray icon to view available soundbites and their assigned keys.

* **Play Sound:** `Ctrl` + `Shift` + `Alt` + `[Key]`
* **Exit:** `Ctrl` + `Shift` + `Alt` + `Q`

Alternatively, exit by right-clicking the system tray icon and selecting **Exit**, or by ending the process in Task Manager.