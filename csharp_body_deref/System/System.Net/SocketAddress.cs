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

[Token(Token = "0x2000294")]
public class SocketAddress
{
	[Token(Token = "0x40009E2")]
	[FieldOffset(Offset = "0x10")]
	internal int m_Size;

	[Token(Token = "0x40009E3")]
	[FieldOffset(Offset = "0x18")]
	internal byte[] m_Buffer;

	[Token(Token = "0x40009E4")]
	[FieldOffset(Offset = "0x20")]
	private bool m_changed;

	[Token(Token = "0x40009E5")]
	[FieldOffset(Offset = "0x24")]
	private int m_hash;

	[Token(Token = "0x170003E4")]
	public AddressFamily Family
	{
		[Token(Token = "0x60011F5")]
		[Address(RVA = "0x62A6D90", Offset = "0x62A5D90", VA = "0x62A6D90")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x170003E5")]
	public int Size
	{
		[Token(Token = "0x60011F6")]
		[Address(RVA = "0x62A6DC0", Offset = "0x62A5DC0", VA = "0x62A6DC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E6")]
	public byte this[int offset]
	{
		[Token(Token = "0x60011F7")]
		[Address(RVA = "0x62A6DD0", Offset = "0x62A5DD0", VA = "0x62A6DD0")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x62A6E40", Offset = "0x62A5E40", VA = "0x62A6E40")]
	public SocketAddress(AddressFamily family, int size)
	{
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x62A6F50", Offset = "0x62A5F50", VA = "0x62A6F50")]
	internal SocketAddress(IPAddress ipAddress)
	{
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x62A7210", Offset = "0x62A6210", VA = "0x62A7210")]
	internal SocketAddress(IPAddress ipaddress, int port)
	{
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x62A7260", Offset = "0x62A6260", VA = "0x62A7260")]
	internal IPAddress GetIPAddress()
	{
		return null;
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x62A7470", Offset = "0x62A6470", VA = "0x62A7470")]
	internal IPEndPoint GetIPEndPoint()
	{
		return null;
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x62A7500", Offset = "0x62A6500", VA = "0x62A7500", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x62A75B0", Offset = "0x62A65B0", VA = "0x62A75B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x62A76F0", Offset = "0x62A66F0", VA = "0x62A76F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
