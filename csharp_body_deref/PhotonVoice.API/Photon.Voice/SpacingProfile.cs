using System.Diagnostics;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000056")]
internal class SpacingProfile
{
	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x10")]
	private short[] buf;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x18")]
	private bool[] info;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x20")]
	private int capacity;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x24")]
	private int ptr;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x28")]
	private Stopwatch watch;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x30")]
	private long watchLast;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x38")]
	private bool flushed;

	[Token(Token = "0x17000069")]
	public string Dump
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x3C261B0", Offset = "0x3C261B0", VA = "0x3C261B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006A")]
	public int Max
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x3C26400", Offset = "0x3C26400", VA = "0x3C26400")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x3C26020", Offset = "0x3C26020", VA = "0x3C26020")]
	public SpacingProfile(int capacity)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x3C26040", Offset = "0x3C26040", VA = "0x3C26040")]
	public void Start()
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x3C26110", Offset = "0x3C26110", VA = "0x3C26110")]
	public void Update(bool lost, bool flush)
	{
	}
}
