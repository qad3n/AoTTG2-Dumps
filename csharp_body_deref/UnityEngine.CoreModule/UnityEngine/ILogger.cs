// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ILogger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000137")]
public interface ILogger : ILogHandler
{
	[Token(Token = "0x170001BB")]
	ILogHandler logHandler
	{
		[Token(Token = "0x60009E2")]
		get;
	}

	[Token(Token = "0x170001BC")]
	bool logEnabled
	{
		[Token(Token = "0x60009E3")]
		get;
	}

	[Token(Token = "0x60009E4")]
	bool IsLogTypeAllowed(LogType logType);

	[Token(Token = "0x60009E5")]
	void Log(LogType logType, object message);

	[Token(Token = "0x60009E6")]
	void Log(LogType logType, object message, Object context);

	[Token(Token = "0x60009E7")]
	void LogError(string tag, object message);

	[Token(Token = "0x60009E8")]
	void LogFormat(LogType logType, string format, params object[] args);
}
