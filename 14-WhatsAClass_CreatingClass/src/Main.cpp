#include <iostream>

/// <summary>
/// First example of the creation of a Class. Here it is created a Log class,
/// but this code can be optimized that will be covered in future codes.
/// </summary>

class Log {
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
	const int LogLevelDebug = 3;

private:
	int m_LogLevel = LogLevelInfo;

public:
	void SetLevel(int level) {
		m_LogLevel = level;
	}

	void Error(const char* message) {
		if (m_LogLevel >= LogLevelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}

	void Warn(const char* message) {
		if (m_LogLevel >= LogLevelWarning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}

	void Info(const char* message) {
		if (m_LogLevel >= LogLevelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

	void Debug(const char* message) {
		if (m_LogLevel >= LogLevelDebug) {
			std::cout << "[DEBUG]: " << message << std::endl;
		}
	}
};

int main() {
	Log log;
	log.SetLevel(log.LogLevelWarning);

	log.Error("Hello");
	log.Warn("Hello");
	log.Info("Info");
	log.Debug("Info");

	std::cin.get();
}
