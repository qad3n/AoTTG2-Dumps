// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.SocketAddress
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Sockets;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002D3")]
public class SocketAddress
{
	[Token(Token = "0x4000AB1")]
	[FieldOffset(Offset = "0x10")]
	internal int m_Size;

	[Token(Token = "0x4000AB2")]
	[FieldOffset(Offset = "0x18")]
	internal byte[] m_Buffer;

	[Token(Token = "0x4000AB3")]
	[FieldOffset(Offset = "0x20")]
	private bool m_changed;

	[Token(Token = "0x4000AB4")]
	[FieldOffset(Offset = "0x24")]
	private int m_hash;

	[Token(Token = "0x17000413")]
	public AddressFamily Family
	{
		[Token(Token = "0x60013B3")]
		[Address(RVA = "0x27D2350", Offset = "0x27D0950", VA = "0x1827D2350")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x17000414")]
	public int Size
	{
		[Token(Token = "0x60013B4")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000415")]
	public byte this[int offset]
	{
		[Token(Token = "0x60013B5")]
		[Address(RVA = "0x27D2390", Offset = "0x27D0990", VA = "0x1827D2390")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x27D1F10", Offset = "0x27D0510", VA = "0x1827D1F10")]
	public SocketAddress(AddressFamily family, int size)
	{
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x27D2030", Offset = "0x27D0630", VA = "0x1827D2030")]
	internal SocketAddress(IPAddress ipAddress)
	{
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x27D1EB0", Offset = "0x27D04B0", VA = "0x1827D1EB0")]
	internal SocketAddress(IPAddress ipaddress, int port)
	{
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x27D1920", Offset = "0x27CFF20", VA = "0x1827D1920")]
	internal IPAddress GetIPAddress()
	{
		return null;
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x27D1B90", Offset = "0x27D0190", VA = "0x1827D1B90")]
	internal IPEndPoint GetIPEndPoint()
	{
		return null;
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x27D16C0", Offset = "0x27CFCC0", VA = "0x1827D16C0", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x27D17F0", Offset = "0x27CFDF0", VA = "0x1827D17F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x27D1C30", Offset = "0x27D0230", VA = "0x1827D1C30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
