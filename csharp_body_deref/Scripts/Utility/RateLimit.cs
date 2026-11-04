// ==================== AoTTG2 cross-reference ====================
// Type: Utility.RateLimit
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/RateLimit.c
// Prior real C# source (older reference): Assets/Scripts/Utility/RateLimit.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20008C6")]
internal class RateLimit
{
	[Token(Token = "0x4002B97")]
	[FieldOffset(Offset = "0x10")]
	private int _currentUsage;

	[Token(Token = "0x4002B98")]
	[FieldOffset(Offset = "0x14")]
	private int _maxUsage;

	[Token(Token = "0x4002B99")]
	[FieldOffset(Offset = "0x18")]
	private float _resetDelay;

	[Token(Token = "0x4002B9A")]
	[FieldOffset(Offset = "0x1C")]
	private float _lastResetTime;

	[Token(Token = "0x6005355")]
	[Address(RVA = "0x233E870", Offset = "0x233CE70", VA = "0x18233E870")]
	public RateLimit Copy()
	{
		return null;
	}

	[Token(Token = "0x6005356")]
	[Address(RVA = "0x233E9F0", Offset = "0x233CFF0", VA = "0x18233E9F0")]
	public RateLimit(int maxUsage, float resetDelay)
	{
	}

	[Token(Token = "0x6005357")]
	[Address(RVA = "0x233E8F0", Offset = "0x233CEF0", VA = "0x18233E8F0")]
	public bool Peek(int usage = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6005358")]
	[Address(RVA = "0x233E980", Offset = "0x233CF80", VA = "0x18233E980")]
	public bool Use(int usage = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6005359")]
	[Address(RVA = "0x233E940", Offset = "0x233CF40", VA = "0x18233E940")]
	private void TryReset()
	{
	}
}
