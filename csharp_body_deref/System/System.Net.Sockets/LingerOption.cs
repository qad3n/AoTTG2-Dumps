using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x20001F9")]
public class LingerOption
{
	[Token(Token = "0x4000A9A")]
	[FieldOffset(Offset = "0x10")]
	private bool enabled;

	[Token(Token = "0x4000A9B")]
	[FieldOffset(Offset = "0x14")]
	private int lingerTime;

	[Token(Token = "0x170002EA")]
	public bool Enabled
	{
		[Token(Token = "0x6000CCB")]
		[Address(RVA = "0x46926F0", Offset = "0x46926F0", VA = "0x46926F0")]
		set
		{
		}
	}

	[Token(Token = "0x170002EB")]
	public int LingerTime
	{
		[Token(Token = "0x6000CCC")]
		[Address(RVA = "0x4692700", Offset = "0x4692700", VA = "0x4692700")]
		set
		{
		}
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x46926D0", Offset = "0x46926D0", VA = "0x46926D0")]
	public LingerOption(bool enable, int seconds)
	{
	}
}
