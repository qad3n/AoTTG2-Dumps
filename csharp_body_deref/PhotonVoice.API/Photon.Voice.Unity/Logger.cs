using Il2CppDummyDll;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A7")]
public class Logger : ILogger
{
	[Token(Token = "0x6000392")]
	[Address(RVA = "0x3C42C50", Offset = "0x3C42C50", VA = "0x3C42C50", Slot = "4")]
	public void LogError(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x3C42CB0", Offset = "0x3C42CB0", VA = "0x3C42CB0", Slot = "5")]
	public void LogWarning(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x3C42D10", Offset = "0x3C42D10", VA = "0x3C42D10", Slot = "6")]
	public void LogInfo(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x3C42D70", Offset = "0x3C42D70", VA = "0x3C42D70", Slot = "7")]
	public void LogDebug(string fmt, params object[] args)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x3C42DD0", Offset = "0x3C42DD0", VA = "0x3C42DD0")]
	public Logger()
	{
	}
}
