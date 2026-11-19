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
[Token(Token = "0x2000268")]
public class IPEndPoint : EndPoint
{
	[Token(Token = "0x40008CA")]
	[FieldOffset(Offset = "0x10")]
	private IPAddress _address;

	[Token(Token = "0x40008CB")]
	[FieldOffset(Offset = "0x18")]
	private int _port;

	[Token(Token = "0x40008CC")]
	[FieldOffset(Offset = "0x0")]
	internal static IPEndPoint Any;

	[Token(Token = "0x40008CD")]
	[FieldOffset(Offset = "0x8")]
	internal static IPEndPoint IPv6Any;

	[Token(Token = "0x1700038F")]
	public override AddressFamily AddressFamily
	{
		[Token(Token = "0x60010E5")]
		[Address(RVA = "0x6294B20", Offset = "0x6293B20", VA = "0x6294B20", Slot = "4")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x17000390")]
	public IPAddress Address
	{
		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x6294C10", Offset = "0x6293C10", VA = "0x6294C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000391")]
	public int Port
	{
		[Token(Token = "0x60010E8")]
		[Address(RVA = "0x6294C20", Offset = "0x6293C20", VA = "0x6294C20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60010E6")]
	[Address(RVA = "0x6294B50", Offset = "0x6293B50", VA = "0x6294B50")]
	public IPEndPoint(IPAddress address, int port)
	{
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x6294C30", Offset = "0x6293C30", VA = "0x6294C30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x6294CE0", Offset = "0x6293CE0", VA = "0x6294CE0", Slot = "5")]
	public override SocketAddress Serialize()
	{
		return null;
	}

	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x6294D40", Offset = "0x6293D40", VA = "0x6294D40", Slot = "6")]
	public override EndPoint Create(SocketAddress socketAddress)
	{
		return null;
	}

	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x6294F40", Offset = "0x6293F40", VA = "0x6294F40", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x6294FE0", Offset = "0x6293FE0", VA = "0x6294FE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
