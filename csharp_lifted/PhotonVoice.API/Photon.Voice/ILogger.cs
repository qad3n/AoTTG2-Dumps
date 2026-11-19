// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.ILogger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200006B")]
public interface ILogger
{
	[Token(Token = "0x6000248")]
	void LogError(string fmt, params object[] args);

	[Token(Token = "0x6000249")]
	void LogWarning(string fmt, params object[] args);

	[Token(Token = "0x600024A")]
	void LogInfo(string fmt, params object[] args);

	[Token(Token = "0x600024B")]
	void LogDebug(string fmt, params object[] args);
}
