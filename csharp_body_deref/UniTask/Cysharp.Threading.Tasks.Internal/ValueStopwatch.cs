using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200024B")]
internal readonly struct ValueStopwatch
{
	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0x0")]
	private static readonly double TimestampToTicks;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x0")]
	private readonly long startTimestamp;

	[Token(Token = "0x17000077")]
	public TimeSpan Elapsed
	{
		[Token(Token = "0x6000D13")]
		[Address(RVA = "0x46F9DF0", Offset = "0x46F9DF0", VA = "0x46F9DF0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000078")]
	public bool IsInvalid
	{
		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x46F9F50", Offset = "0x46F9F50", VA = "0x46F9F50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000079")]
	public long ElapsedTicks
	{
		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x46F9E70", Offset = "0x46F9E70", VA = "0x46F9E70")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x46F9D80", Offset = "0x46F9D80", VA = "0x46F9D80")]
	public static ValueStopwatch StartNew()
	{
		return default(ValueStopwatch);
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x46F9DE0", Offset = "0x46F9DE0", VA = "0x46F9DE0")]
	private ValueStopwatch(long startTimestamp)
	{
	}
}
