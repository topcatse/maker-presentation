BASE_DIR   = path.getabsolute(".")
BUILD_PATH = path.join(BASE_DIR, "build")

solution "TickCounterSolution"
	location(path.join(BUILD_PATH, _ACTION))
	targetdir(path.join(BUILD_PATH, "bin"))

	configurations {
		"Release",
		"Debug"
	}
	
	platforms {
		"Native", -- for targets where bitness is not specified
	}

configuration "Debug"
	flags       { "Symbols" }
	defines     { "DEBUG=1" }
    buildoptions {"-std=c++11"}
	
configuration "Release"
	flags       { "OptimizeSize" }
    buildoptions {"-std=c++11"}

project "TickCounter"
	language "C++"
	kind     "ConsoleApp"
	
	files {
		"TickCounter/*.cpp", "TickCounter/*.h"
	}

