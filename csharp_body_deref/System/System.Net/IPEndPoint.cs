using System.Net.Sockets;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x200011F")]
public class IPEndPoint : EndPoint
{
	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x10")]
	private IPAddress _address;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x18")]
	private int _port;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x0")]
	internal static IPEndPoint Any;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x8")]
	internal static IPEndPoint IPv6Any;

	[Token(Token = "0x17000169")]
	public override AddressFamily AddressFamily
	{
		[Token(Token = "0x60006E4")]
		[Address(RVA = "0x4626970", Offset = "0x4626970", VA = "0x4626970", Slot = "4")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x1700016A")]
	public IPAddress Address
	{
		[Token(Token = "0x60006E6")]
		[Address(RVA = "0x4626A70", Offset = "0x4626A70", VA = "0x4626A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016B")]
	public int Port
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x4626A80", Offset = "0x4626A80", VA = "0x4626A80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x46269A0", Offset = "0x46269A0", VA = "0x46269A0")]
	public IPEndPoint(IPAddress address, int port)
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x4626A90", Offset = "0x4626A90", VA = "0x4626A90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x4626B40", Offset = "0x4626B40", VA = "0x4626B40", Slot = "5")]
	public override SocketAddress Serialize()
	{
		return null;
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x4626BA0", Offset = "0x4626BA0", VA = "0x4626BA0", Slot = "6")]
	public override EndPoint Create(SocketAddress socketAddress)
	{
		return null;
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x4626D90", Offset = "0x4626D90", VA = "0x4626D90", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x4626E40", Offset = "0x4626E40", VA = "0x4626E40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
