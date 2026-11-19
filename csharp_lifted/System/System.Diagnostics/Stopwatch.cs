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

[Token(Token = "0x20000DD")]
public class Stopwatch
{
	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x0")]
	public static readonly long Frequency;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x8")]
	public static readonly bool IsHighResolution;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x10")]
	private long elapsed;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x18")]
	private long started;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0x20")]
	private bool is_running;

	[Token(Token = "0x170000F6")]
	public TimeSpan Elapsed
	{
		[Token(Token = "0x6000523")]
		[Address(RVA = "0x6208050", Offset = "0x6207050", VA = "0x6208050")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x170000F7")]
	public long ElapsedMilliseconds
	{
		[Token(Token = "0x6000524")]
		[Address(RVA = "0x62082B0", Offset = "0x62072B0", VA = "0x62082B0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170000F8")]
	public long ElapsedTicks
	{
		[Token(Token = "0x6000525")]
		[Address(RVA = "0x6208250", Offset = "0x6207250", VA = "0x6208250")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170000F9")]
	public bool IsRunning
	{
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x6208470", Offset = "0x6207470", VA = "0x6208470")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6000520")]
	[Address(RVA = "0x62012D0", Offset = "0x62002D0", VA = "0x62012D0")]
	public static extern long GetTimestamp();

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x6207F40", Offset = "0x6206F40", VA = "0x6207F40")]
	public static Stopwatch StartNew()
	{
		return null;
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x6207FE0", Offset = "0x6206FE0", VA = "0x6207FE0")]
	public Stopwatch()
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x6208480", Offset = "0x6207480", VA = "0x6208480")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x6207FF0", Offset = "0x6206FF0", VA = "0x6207FF0")]
	public void Start()
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x6208490", Offset = "0x6207490", VA = "0x6208490")]
	public void Stop()
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x6208500", Offset = "0x6207500", VA = "0x6208500")]
	public void Restart()
	{
	}
}
