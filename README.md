# Mint Logger v0.1
---

### About
---
Well, this is a simple logger I will use to my C++ projects from now, you are free to use and edit as you wish. But for the sake of the good manners please dont copy-past the repository, change the name and distribute as yours ;).

### How to compile
---
To compile Mint Logger you need GCC G++ and Python 3. Here's a simple snippet to install both in APT based distros:
```sh
sudo apt-get install build-essential python3 -y
```

Now to start the building type:
```sh
python3 build.py
```

The binary will be put in the bin folder. You  can also run tests by executing the "test.sh" shell script.

Report ANY errors if you found someone ;)

### How to use
---
#### Functions
* Log
```cpp
void Log(const char* message, Level level);
```
* Log Levels
```cpp
enum Level {
    WARNING, ERROR
};
```

#### Example
```cpp
Logger logger("MyLogFile.log");

logger.Log("Hello, World!", Logger::WARNING);
```

### Development Plans:
---
* Logging via TCP socket.
* Log variable information (mem location, mem content)
