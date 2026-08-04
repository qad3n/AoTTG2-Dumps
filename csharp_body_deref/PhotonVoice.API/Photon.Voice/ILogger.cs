// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.ILogger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200006D")]
public interface ILogger
{
	[Token(Token = "0x600024A")]
	void LogError(string fmt, params object[] args);

	[Token(Token = "0x600024B")]
	void LogWarning(string fmt, params object[] args);

	[Token(Token = "0x600024C")]
	void LogInfo(string fmt, params object[] args);

	[Token(Token = "0x600024D")]
	void LogDebug(string fmt, params object[] args);
}
