using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20006F3")]
internal class RateLimit
{
	[Token(Token = "0x400217A")]
	[FieldOffset(Offset = "0x10")]
	private int _currentUsage;

	[Token(Token = "0x400217B")]
	[FieldOffset(Offset = "0x14")]
	private int _maxUsage;

	[Token(Token = "0x400217C")]
	[FieldOffset(Offset = "0x18")]
	private float _resetDelay;

	[Token(Token = "0x400217D")]
	[FieldOffset(Offset = "0x1C")]
	private float _lastResetTime;

	[Token(Token = "0x6004491")]
	[Address(RVA = "0x407BC80", Offset = "0x407BC80", VA = "0x407BC80")]
	public RateLimit Copy()
	{
		return null;
	}

	[Token(Token = "0x6004492")]
	[Address(RVA = "0x407BCF0", Offset = "0x407BCF0", VA = "0x407BCF0")]
	public RateLimit(int maxUsage, float resetDelay)
	{
	}

	[Token(Token = "0x6004493")]
	[Address(RVA = "0x407BD30", Offset = "0x407BD30", VA = "0x407BD30")]
	public bool Peek(int usage = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6004494")]
	[Address(RVA = "0x407BDB0", Offset = "0x407BDB0", VA = "0x407BDB0")]
	public bool Use(int usage = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6004495")]
	[Address(RVA = "0x407BD80", Offset = "0x407BD80", VA = "0x407BD80")]
	private void TryReset()
	{
	}
}
