// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.EndPoint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Sockets;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000283")]
public abstract class EndPoint
{
	[Token(Token = "0x170003D4")]
	public virtual AddressFamily AddressFamily
	{
		[Token(Token = "0x60011BF")]
		[Address(RVA = "0x62A5B30", Offset = "0x62A4B30", VA = "0x62A5B30", Slot = "4")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x62A5BC0", Offset = "0x62A4BC0", VA = "0x62A5BC0", Slot = "5")]
	public virtual SocketAddress Serialize()
	{
		return null;
	}

	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x62A5C50", Offset = "0x62A4C50", VA = "0x62A5C50", Slot = "6")]
	public virtual EndPoint Create(SocketAddress socketAddress)
	{
		return null;
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x62A5C70", Offset = "0x62A4C70", VA = "0x62A5C70")]
	protected EndPoint()
	{
	}
}
