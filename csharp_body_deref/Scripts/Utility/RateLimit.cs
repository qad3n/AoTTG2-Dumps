// ==================== AoTTG2 cross-reference ====================
// Type: Utility.RateLimit
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/RateLimit.c
// Prior real C# source (older reference): Assets/Scripts/Utility/RateLimit.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000931")]
internal class RateLimit
{
	[Token(Token = "0x4002E50")]
	[FieldOffset(Offset = "0x10")]
	private int _currentUsage;

	[Token(Token = "0x4002E51")]
	[FieldOffset(Offset = "0x14")]
	private int _maxUsage;

	[Token(Token = "0x4002E52")]
	[FieldOffset(Offset = "0x18")]
	private float _resetDelay;

	[Token(Token = "0x4002E53")]
	[FieldOffset(Offset = "0x1C")]
	private float _lastResetTime;

	[Token(Token = "0x60056B0")]
	[Address(RVA = "0x5CF0450", Offset = "0x5CEF450", VA = "0x5CF0450")]
	public RateLimit Copy()
	{
		return null;
	}

	[Token(Token = "0x60056B1")]
	[Address(RVA = "0x5CF04D0", Offset = "0x5CEF4D0", VA = "0x5CF04D0")]
	public RateLimit(int maxUsage, float resetDelay)
	{
	}

	[Token(Token = "0x60056B2")]
	[Address(RVA = "0x5CF0510", Offset = "0x5CEF510", VA = "0x5CF0510")]
	public bool Peek(int usage = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x60056B3")]
	[Address(RVA = "0x5CF0590", Offset = "0x5CEF590", VA = "0x5CF0590")]
	public bool Use(int usage = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x60056B4")]
	[Address(RVA = "0x5CF0560", Offset = "0x5CEF560", VA = "0x5CF0560")]
	private void TryReset()
	{
	}
}
