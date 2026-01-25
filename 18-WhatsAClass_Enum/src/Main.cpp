#include <iostream>

/// <summary>
/// Continuation of the Log class where it can be seen the powerful use of
/// the Enum object. Here the enum object replaces the int values that can
/// be modified and also corrects the form in which the if statements works,
/// as now they don't compare to a number but to the reference in the Enum object.
/// </summary>

class Log {
public:
	enum Level {
		LevelError = 0,
		LevelWarning,
		LevelInfo,
		LevelDebug
	};

private:
	Level m_LogLevel = LevelInfo;

public:
	void SetLevel(Level level) {
		m_LogLevel = level;
	}

	void Error(const char* message) {
		if (m_LogLevel >= LevelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}

	void Warn(const char* message) {
		if (m_LogLevel >= LevelWarning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}

	void Info(const char* message) {
		if (m_LogLevel >= LevelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

	void Debug(const char* message) {
		if (m_LogLevel >= LevelDebug) {
			std::cout << "[DEBUG]: " << message << std::endl;
		}
	}
};

int main() {
	Log log;
	log.SetLevel(Log::LevelDebug);

	log.Error("Hello");
	log.Warn("Hello");
	log.Info("Info");
	log.Debug("Info");

	std::cin.get();
}
