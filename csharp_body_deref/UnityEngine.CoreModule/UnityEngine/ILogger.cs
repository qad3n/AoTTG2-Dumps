// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ILogger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000139")]
public interface ILogger : ILogHandler
{
	[Token(Token = "0x170001C0")]
	ILogHandler logHandler
	{
		[Token(Token = "0x60009F5")]
		get;
	}

	[Token(Token = "0x170001C1")]
	bool logEnabled
	{
		[Token(Token = "0x60009F6")]
		get;
	}

	[Token(Token = "0x60009F7")]
	bool IsLogTypeAllowed(LogType logType);

	[Token(Token = "0x60009F8")]
	void Log(LogType logType, object message);

	[Token(Token = "0x60009F9")]
	void Log(LogType logType, object message, Object context);

	[Token(Token = "0x60009FA")]
	void LogError(string tag, object message);

	[Token(Token = "0x60009FB")]
	void LogFormat(LogType logType, string format, params object[] args);
}
