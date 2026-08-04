// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.IPEndPoint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x494BA70", Offset = "0x494BA70", VA = "0x494BA70", Slot = "4")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x1700016A")]
	public IPAddress Address
	{
		[Token(Token = "0x60006E6")]
		[Address(RVA = "0x494BB70", Offset = "0x494BB70", VA = "0x494BB70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016B")]
	public int Port
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x494BB80", Offset = "0x494BB80", VA = "0x494BB80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x494BAA0", Offset = "0x494BAA0", VA = "0x494BAA0")]
	public IPEndPoint(IPAddress address, int port)
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x494BB90", Offset = "0x494BB90", VA = "0x494BB90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x494BC40", Offset = "0x494BC40", VA = "0x494BC40", Slot = "5")]
	public override SocketAddress Serialize()
	{
		return null;
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x494BCA0", Offset = "0x494BCA0", VA = "0x494BCA0", Slot = "6")]
	public override EndPoint Create(SocketAddress socketAddress)
	{
		return null;
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x494BE90", Offset = "0x494BE90", VA = "0x494BE90", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x494BF40", Offset = "0x494BF40", VA = "0x494BF40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
