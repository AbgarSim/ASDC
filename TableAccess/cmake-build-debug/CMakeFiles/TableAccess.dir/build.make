# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\University\ADSC\TableAccess

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\University\ADSC\TableAccess\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\TableAccess.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\TableAccess.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\TableAccess.dir\flags.make

CMakeFiles\TableAccess.dir\main.cpp.obj: CMakeFiles\TableAccess.dir\flags.make
CMakeFiles\TableAccess.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\University\ADSC\TableAccess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TableAccess.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TableAccess.dir\main.cpp.obj /FdCMakeFiles\TableAccess.dir\ /FS -c D:\University\ADSC\TableAccess\main.cpp
<<

CMakeFiles\TableAccess.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TableAccess.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\TableAccess.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\University\ADSC\TableAccess\main.cpp
<<

CMakeFiles\TableAccess.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TableAccess.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TableAccess.dir\main.cpp.s /c D:\University\ADSC\TableAccess\main.cpp
<<

CMakeFiles\TableAccess.dir\Person.cpp.obj: CMakeFiles\TableAccess.dir\flags.make
CMakeFiles\TableAccess.dir\Person.cpp.obj: ..\Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\University\ADSC\TableAccess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TableAccess.dir/Person.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TableAccess.dir\Person.cpp.obj /FdCMakeFiles\TableAccess.dir\ /FS -c D:\University\ADSC\TableAccess\Person.cpp
<<

CMakeFiles\TableAccess.dir\Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TableAccess.dir/Person.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\TableAccess.dir\Person.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\University\ADSC\TableAccess\Person.cpp
<<

CMakeFiles\TableAccess.dir\Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TableAccess.dir/Person.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TableAccess.dir\Person.cpp.s /c D:\University\ADSC\TableAccess\Person.cpp
<<

CMakeFiles\TableAccess.dir\DataService.cpp.obj: CMakeFiles\TableAccess.dir\flags.make
CMakeFiles\TableAccess.dir\DataService.cpp.obj: ..\DataService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\University\ADSC\TableAccess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TableAccess.dir/DataService.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TableAccess.dir\DataService.cpp.obj /FdCMakeFiles\TableAccess.dir\ /FS -c D:\University\ADSC\TableAccess\DataService.cpp
<<

CMakeFiles\TableAccess.dir\DataService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TableAccess.dir/DataService.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\TableAccess.dir\DataService.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\University\ADSC\TableAccess\DataService.cpp
<<

CMakeFiles\TableAccess.dir\DataService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TableAccess.dir/DataService.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TableAccess.dir\DataService.cpp.s /c D:\University\ADSC\TableAccess\DataService.cpp
<<

CMakeFiles\TableAccess.dir\DataModel.cpp.obj: CMakeFiles\TableAccess.dir\flags.make
CMakeFiles\TableAccess.dir\DataModel.cpp.obj: ..\DataModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\University\ADSC\TableAccess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TableAccess.dir/DataModel.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TableAccess.dir\DataModel.cpp.obj /FdCMakeFiles\TableAccess.dir\ /FS -c D:\University\ADSC\TableAccess\DataModel.cpp
<<

CMakeFiles\TableAccess.dir\DataModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TableAccess.dir/DataModel.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\TableAccess.dir\DataModel.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\University\ADSC\TableAccess\DataModel.cpp
<<

CMakeFiles\TableAccess.dir\DataModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TableAccess.dir/DataModel.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TableAccess.dir\DataModel.cpp.s /c D:\University\ADSC\TableAccess\DataModel.cpp
<<

CMakeFiles\TableAccess.dir\MainMenu.cpp.obj: CMakeFiles\TableAccess.dir\flags.make
CMakeFiles\TableAccess.dir\MainMenu.cpp.obj: ..\MainMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\University\ADSC\TableAccess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/TableAccess.dir/MainMenu.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TableAccess.dir\MainMenu.cpp.obj /FdCMakeFiles\TableAccess.dir\ /FS -c D:\University\ADSC\TableAccess\MainMenu.cpp
<<

CMakeFiles\TableAccess.dir\MainMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TableAccess.dir/MainMenu.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\TableAccess.dir\MainMenu.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\University\ADSC\TableAccess\MainMenu.cpp
<<

CMakeFiles\TableAccess.dir\MainMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TableAccess.dir/MainMenu.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TableAccess.dir\MainMenu.cpp.s /c D:\University\ADSC\TableAccess\MainMenu.cpp
<<

# Object files for target TableAccess
TableAccess_OBJECTS = \
"CMakeFiles\TableAccess.dir\main.cpp.obj" \
"CMakeFiles\TableAccess.dir\Person.cpp.obj" \
"CMakeFiles\TableAccess.dir\DataService.cpp.obj" \
"CMakeFiles\TableAccess.dir\DataModel.cpp.obj" \
"CMakeFiles\TableAccess.dir\MainMenu.cpp.obj"

# External object files for target TableAccess
TableAccess_EXTERNAL_OBJECTS =

TableAccess.exe: CMakeFiles\TableAccess.dir\main.cpp.obj
TableAccess.exe: CMakeFiles\TableAccess.dir\Person.cpp.obj
TableAccess.exe: CMakeFiles\TableAccess.dir\DataService.cpp.obj
TableAccess.exe: CMakeFiles\TableAccess.dir\DataModel.cpp.obj
TableAccess.exe: CMakeFiles\TableAccess.dir\MainMenu.cpp.obj
TableAccess.exe: CMakeFiles\TableAccess.dir\build.make
TableAccess.exe: CMakeFiles\TableAccess.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\University\ADSC\TableAccess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable TableAccess.exe"
	"C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\TableAccess.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\TableAccess.dir\objects1.rsp @<<
 /out:TableAccess.exe /implib:TableAccess.lib /pdb:D:\University\ADSC\TableAccess\cmake-build-debug\TableAccess.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\TableAccess.dir\build: TableAccess.exe

.PHONY : CMakeFiles\TableAccess.dir\build

CMakeFiles\TableAccess.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TableAccess.dir\cmake_clean.cmake
.PHONY : CMakeFiles\TableAccess.dir\clean

CMakeFiles\TableAccess.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\University\ADSC\TableAccess D:\University\ADSC\TableAccess D:\University\ADSC\TableAccess\cmake-build-debug D:\University\ADSC\TableAccess\cmake-build-debug D:\University\ADSC\TableAccess\cmake-build-debug\CMakeFiles\TableAccess.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\TableAccess.dir\depend
