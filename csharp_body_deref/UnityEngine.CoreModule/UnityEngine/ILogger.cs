// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ILogger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000113")]
public interface ILogger : ILogHandler
{
	[Token(Token = "0x17000162")]
	ILogHandler logHandler
	{
		[Token(Token = "0x6000756")]
		get;
	}

	[Token(Token = "0x17000163")]
	bool logEnabled
	{
		[Token(Token = "0x6000757")]
		get;
	}

	[Token(Token = "0x6000758")]
	bool IsLogTypeAllowed(LogType logType);

	[Token(Token = "0x6000759")]
	void Log(LogType logType, object message);

	[Token(Token = "0x600075A")]
	void Log(LogType logType, object message, Object context);

	[Token(Token = "0x600075B")]
	void LogError(string tag, object message);

	[Token(Token = "0x600075C")]
	void LogFormat(LogType logType, string format, params object[] args);
}
