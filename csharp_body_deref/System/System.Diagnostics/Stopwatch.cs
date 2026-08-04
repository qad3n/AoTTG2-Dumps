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

[Token(Token = "0x20000DC")]
public class Stopwatch
{
	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly long Frequency;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x8")]
	public static readonly bool IsHighResolution;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x10")]
	private long elapsed;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x18")]
	private long started;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x20")]
	private bool is_running;

	[Token(Token = "0x170000EC")]
	public TimeSpan Elapsed
	{
		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x492C600", Offset = "0x492C600", VA = "0x492C600")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x170000ED")]
	public long ElapsedMilliseconds
	{
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x492C800", Offset = "0x492C800", VA = "0x492C800")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170000EE")]
	public long ElapsedTicks
	{
		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x492C7A0", Offset = "0x492C7A0", VA = "0x492C7A0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170000EF")]
	public bool IsRunning
	{
		[Token(Token = "0x60004FC")]
		[Address(RVA = "0x492C990", Offset = "0x492C990", VA = "0x492C990")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x4924F50", Offset = "0x4924F50", VA = "0x4924F50")]
	public static extern long GetTimestamp();

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x492C4F0", Offset = "0x492C4F0", VA = "0x492C4F0")]
	public static Stopwatch StartNew()
	{
		return null;
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x492C590", Offset = "0x492C590", VA = "0x492C590")]
	public Stopwatch()
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x492C9A0", Offset = "0x492C9A0", VA = "0x492C9A0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x492C5A0", Offset = "0x492C5A0", VA = "0x492C5A0")]
	public void Start()
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x492C9B0", Offset = "0x492C9B0", VA = "0x492C9B0")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x492CA20", Offset = "0x492CA20", VA = "0x492CA20")]
	public void Restart()
	{
	}
}
