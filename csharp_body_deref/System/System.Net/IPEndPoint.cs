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
[Token(Token = "0x20002A7")]
public class IPEndPoint : EndPoint
{
	[Token(Token = "0x4000999")]
	[FieldOffset(Offset = "0x10")]
	private IPAddress _address;

	[Token(Token = "0x400099A")]
	[FieldOffset(Offset = "0x18")]
	private int _port;

	[Token(Token = "0x400099B")]
	[FieldOffset(Offset = "0x0")]
	internal static IPEndPoint Any;

	[Token(Token = "0x400099C")]
	[FieldOffset(Offset = "0x8")]
	internal static IPEndPoint IPv6Any;

	[Token(Token = "0x170003BE")]
	public override AddressFamily AddressFamily
	{
		[Token(Token = "0x60012A3")]
		[Address(RVA = "0x2902EC0", Offset = "0x29014C0", VA = "0x182902EC0", Slot = "4")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x170003BF")]
	public IPAddress Address
	{
		[Token(Token = "0x60012A5")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C0")]
	public int Port
	{
		[Token(Token = "0x60012A6")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x2902DE0", Offset = "0x29013E0", VA = "0x182902DE0")]
	public IPEndPoint(IPAddress address, int port)
	{
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x2902B50", Offset = "0x2901150", VA = "0x182902B50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x2902AE0", Offset = "0x29010E0", VA = "0x182902AE0", Slot = "5")]
	public override SocketAddress Serialize()
	{
		return null;
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x29027A0", Offset = "0x2900DA0", VA = "0x1829027A0", Slot = "6")]
	public override EndPoint Create(SocketAddress socketAddress)
	{
		return null;
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x29029F0", Offset = "0x2900FF0", VA = "0x1829029F0", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x2902AA0", Offset = "0x29010A0", VA = "0x182902AA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
