// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.Logger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/Logger.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A9")]
public class Logger : ILogger
{
	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x1D84870", Offset = "0x1D82E70", VA = "0x181D84870", Slot = "4")]
	public void LogError(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x1D84930", Offset = "0x1D82F30", VA = "0x181D84930", Slot = "5")]
	public void LogWarning(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x1D848D0", Offset = "0x1D82ED0", VA = "0x181D848D0", Slot = "6")]
	public void LogInfo(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x1D84810", Offset = "0x1D82E10", VA = "0x181D84810", Slot = "7")]
	public void LogDebug(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Logger()
	{
	}
}
