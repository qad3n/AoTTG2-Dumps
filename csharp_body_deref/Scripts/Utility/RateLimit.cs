// ==================== AoTTG2 cross-reference ====================
// Type: Utility.RateLimit
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/RateLimit.c
// Prior real C# source (older reference): Assets/Scripts/Utility/RateLimit.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000741")]
internal class RateLimit
{
	[Token(Token = "0x40022D7")]
	[FieldOffset(Offset = "0x10")]
	private int _currentUsage;

	[Token(Token = "0x40022D8")]
	[FieldOffset(Offset = "0x14")]
	private int _maxUsage;

	[Token(Token = "0x40022D9")]
	[FieldOffset(Offset = "0x18")]
	private float _resetDelay;

	[Token(Token = "0x40022DA")]
	[FieldOffset(Offset = "0x1C")]
	private float _lastResetTime;

	[Token(Token = "0x60046F9")]
	[Address(RVA = "0x4393C60", Offset = "0x4393C60", VA = "0x4393C60")]
	public RateLimit Copy()
	{
		return null;
	}

	[Token(Token = "0x60046FA")]
	[Address(RVA = "0x4393CD0", Offset = "0x4393CD0", VA = "0x4393CD0")]
	public RateLimit(int maxUsage, float resetDelay)
	{
	}

	[Token(Token = "0x60046FB")]
	[Address(RVA = "0x4393D10", Offset = "0x4393D10", VA = "0x4393D10")]
	public bool Peek(int usage = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x60046FC")]
	[Address(RVA = "0x4393D90", Offset = "0x4393D90", VA = "0x4393D90")]
	public bool Use(int usage = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x60046FD")]
	[Address(RVA = "0x4393D60", Offset = "0x4393D60", VA = "0x4393D60")]
	private void TryReset()
	{
	}
}
