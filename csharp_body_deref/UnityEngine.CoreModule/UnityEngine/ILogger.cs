using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000110")]
public interface ILogger : ILogHandler
{
	[Token(Token = "0x17000161")]
	ILogHandler logHandler
	{
		[Token(Token = "0x6000754")]
		get;
	}

	[Token(Token = "0x17000162")]
	bool logEnabled
	{
		[Token(Token = "0x6000755")]
		get;
	}

	[Token(Token = "0x6000756")]
	bool IsLogTypeAllowed(LogType logType);

	[Token(Token = "0x6000757")]
	void Log(LogType logType, object message);

	[Token(Token = "0x6000758")]
	void Log(LogType logType, object message, Object context);

	[Token(Token = "0x6000759")]
	void LogError(string tag, object message);

	[Token(Token = "0x600075A")]
	void LogFormat(LogType logType, string format, params object[] args);
}
