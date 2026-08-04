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
		[Address(RVA = "0x4A1EEF0", Offset = "0x4A1EEF0", VA = "0x4A1EEF0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000078")]
	public bool IsInvalid
	{
		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x4A1F050", Offset = "0x4A1F050", VA = "0x4A1F050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000079")]
	public long ElapsedTicks
	{
		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x4A1EF70", Offset = "0x4A1EF70", VA = "0x4A1EF70")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x4A1EE80", Offset = "0x4A1EE80", VA = "0x4A1EE80")]
	public static ValueStopwatch StartNew()
	{
		return default(ValueStopwatch);
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x4A1EEE0", Offset = "0x4A1EEE0", VA = "0x4A1EEE0")]
	private ValueStopwatch(long startTimestamp)
	{
	}
}
