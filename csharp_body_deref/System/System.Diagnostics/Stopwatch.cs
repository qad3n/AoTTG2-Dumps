// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Stopwatch
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x200011C")]
public class Stopwatch
{
	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly long Frequency;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x8")]
	public static readonly bool IsHighResolution;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x10")]
	private long elapsed;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x18")]
	private long started;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x20")]
	private bool is_running;

	[Token(Token = "0x17000125")]
	public TimeSpan Elapsed
	{
		[Token(Token = "0x60006D9")]
		[Address(RVA = "0x2873F00", Offset = "0x2872500", VA = "0x182873F00")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000126")]
	public long ElapsedMilliseconds
	{
		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x2873BB0", Offset = "0x28721B0", VA = "0x182873BB0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000127")]
	public long ElapsedTicks
	{
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x2873EA0", Offset = "0x28724A0", VA = "0x182873EA0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000128")]
	public bool IsRunning
	{
		[Token(Token = "0x60006DC")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x1BC3DB0", Offset = "0x1BC23B0", VA = "0x181BC3DB0")]
	public static extern long GetTimestamp();

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x28739E0", Offset = "0x2871FE0", VA = "0x1828739E0")]
	public static Stopwatch StartNew()
	{
		return null;
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Stopwatch()
	{
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x2873970", Offset = "0x2871F70", VA = "0x182873970")]
	public void Reset()
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x2873A80", Offset = "0x2872080", VA = "0x182873A80")]
	public void Start()
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x2873AE0", Offset = "0x28720E0", VA = "0x182873AE0")]
	public void Stop()
	{
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x2873980", Offset = "0x2871F80", VA = "0x182873980")]
	public void Restart()
	{
	}
}
