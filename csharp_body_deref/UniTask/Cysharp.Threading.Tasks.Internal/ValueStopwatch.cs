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
		[Address(RVA = "0x2950190", Offset = "0x294E790", VA = "0x182950190")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700007A")]
	public bool IsInvalid
	{
		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007B")]
	public long ElapsedTicks
	{
		[Token(Token = "0x6000D39")]
		[Address(RVA = "0x29500A0", Offset = "0x294E6A0", VA = "0x1829500A0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x294FFE0", Offset = "0x294E5E0", VA = "0x18294FFE0")]
	public static ValueStopwatch StartNew()
	{
		return default(ValueStopwatch);
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	private ValueStopwatch(long startTimestamp)
	{
	}
}
