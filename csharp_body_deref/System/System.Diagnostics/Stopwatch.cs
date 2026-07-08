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
		[Address(RVA = "0x4607500", Offset = "0x4607500", VA = "0x4607500")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x170000ED")]
	public long ElapsedMilliseconds
	{
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x4607700", Offset = "0x4607700", VA = "0x4607700")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170000EE")]
	public long ElapsedTicks
	{
		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x46076A0", Offset = "0x46076A0", VA = "0x46076A0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170000EF")]
	public bool IsRunning
	{
		[Token(Token = "0x60004FC")]
		[Address(RVA = "0x4607890", Offset = "0x4607890", VA = "0x4607890")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x45FFE50", Offset = "0x45FFE50", VA = "0x45FFE50")]
	public static extern long GetTimestamp();

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x46073F0", Offset = "0x46073F0", VA = "0x46073F0")]
	public static Stopwatch StartNew()
	{
		return null;
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x4607490", Offset = "0x4607490", VA = "0x4607490")]
	public Stopwatch()
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x46078A0", Offset = "0x46078A0", VA = "0x46078A0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x46074A0", Offset = "0x46074A0", VA = "0x46074A0")]
	public void Start()
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x46078B0", Offset = "0x46078B0", VA = "0x46078B0")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x4607920", Offset = "0x4607920", VA = "0x4607920")]
	public void Restart()
	{
	}
}
