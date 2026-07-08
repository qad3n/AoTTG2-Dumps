using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200010F")]
public interface ILogHandler
{
	[Token(Token = "0x6000752")]
	void LogFormat(LogType logType, Object context, string format, params object[] args);

	[Token(Token = "0x6000753")]
	void LogException(Exception exception, Object context);
}
