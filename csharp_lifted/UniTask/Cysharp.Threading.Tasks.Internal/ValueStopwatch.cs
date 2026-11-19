// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.ValueStopwatch
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200024E")]
internal readonly struct ValueStopwatch
{
	[Token(Token = "0x40006A4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly double TimestampToTicks;

	[Token(Token = "0x40006A5")]
	[FieldOffset(Offset = "0x0")]
	private readonly long startTimestamp;

	[Token(Token = "0x17000079")]
	public TimeSpan Elapsed
	{
		[Token(Token = "0x6000D37")]
		[Address(RVA = "0x630C550", Offset = "0x630B550", VA = "0x630C550")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700007A")]
	public bool IsInvalid
	{
		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x630C6B0", Offset = "0x630B6B0", VA = "0x630C6B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007B")]
	public long ElapsedTicks
	{
		[Token(Token = "0x6000D39")]
		[Address(RVA = "0x630C5D0", Offset = "0x630B5D0", VA = "0x630C5D0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x630C4E0", Offset = "0x630B4E0", VA = "0x630C4E0")]
	public static ValueStopwatch StartNew()
	{
		return default(ValueStopwatch);
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x630C540", Offset = "0x630B540", VA = "0x630C540")]
	private ValueStopwatch(long startTimestamp)
	{
	}
}
