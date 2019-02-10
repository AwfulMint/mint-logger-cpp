# Mint Logger v0.1
---

### About
---
Well, this is a simple logger I will use to my C++ projects from now, you are free to use and edit as you wish. But for the sake of the good manners please dont copy-past the repository, change the name and distribute as yours ;).

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
