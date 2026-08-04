// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ILogHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000112")]
public interface ILogHandler
{
	[Token(Token = "0x6000754")]
	void LogFormat(LogType logType, Object context, string format, params object[] args);

	[Token(Token = "0x6000755")]
	void LogException(Exception exception, Object context);
}
