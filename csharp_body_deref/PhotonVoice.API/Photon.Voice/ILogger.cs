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
