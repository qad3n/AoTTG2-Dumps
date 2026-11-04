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
[Token(Token = "0x20002C2")]
public abstract class EndPoint
{
	[Token(Token = "0x17000403")]
	public virtual AddressFamily AddressFamily
	{
		[Token(Token = "0x600137D")]
		[Address(RVA = "0x27C93E0", Offset = "0x27C79E0", VA = "0x1827C93E0", Slot = "4")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x27C93B0", Offset = "0x27C79B0", VA = "0x1827C93B0", Slot = "5")]
	public virtual SocketAddress Serialize()
	{
		return null;
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x27C9380", Offset = "0x27C7980", VA = "0x1827C9380", Slot = "6")]
	public virtual EndPoint Create(SocketAddress socketAddress)
	{
		return null;
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected EndPoint()
	{
	}
}
