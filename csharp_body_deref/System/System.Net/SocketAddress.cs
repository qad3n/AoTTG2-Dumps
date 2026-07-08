using System.Net.Sockets;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200014B")]
public class SocketAddress
{
	[Token(Token = "0x400069B")]
	[FieldOffset(Offset = "0x10")]
	internal int m_Size;

	[Token(Token = "0x400069C")]
	[FieldOffset(Offset = "0x18")]
	internal byte[] m_Buffer;

	[Token(Token = "0x400069D")]
	[FieldOffset(Offset = "0x20")]
	private bool m_changed;

	[Token(Token = "0x400069E")]
	[FieldOffset(Offset = "0x24")]
	private int m_hash;

	[Token(Token = "0x170001BE")]
	public AddressFamily Family
	{
		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x463A000", Offset = "0x463A000", VA = "0x463A000")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x170001BF")]
	public int Size
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x463A030", Offset = "0x463A030", VA = "0x463A030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C0")]
	public byte this[int offset]
	{
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x463A040", Offset = "0x463A040", VA = "0x463A040")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x463A0B0", Offset = "0x463A0B0", VA = "0x463A0B0")]
	public SocketAddress(AddressFamily family, int size)
	{
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x463A1C0", Offset = "0x463A1C0", VA = "0x463A1C0")]
	internal SocketAddress(IPAddress ipAddress)
	{
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x463A480", Offset = "0x463A480", VA = "0x463A480")]
	internal SocketAddress(IPAddress ipaddress, int port)
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x463A4D0", Offset = "0x463A4D0", VA = "0x463A4D0")]
	internal IPAddress GetIPAddress()
	{
		return null;
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x463A6F0", Offset = "0x463A6F0", VA = "0x463A6F0")]
	internal IPEndPoint GetIPEndPoint()
	{
		return null;
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x463A780", Offset = "0x463A780", VA = "0x463A780", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x463A840", Offset = "0x463A840", VA = "0x463A840", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x463A970", Offset = "0x463A970", VA = "0x463A970", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
