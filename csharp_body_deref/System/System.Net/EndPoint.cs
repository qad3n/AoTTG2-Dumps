using System.Net.Sockets;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x200013A")]
public abstract class EndPoint
{
	[Token(Token = "0x170001AE")]
	public virtual AddressFamily AddressFamily
	{
		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x4638E30", Offset = "0x4638E30", VA = "0x4638E30", Slot = "4")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x4638EC0", Offset = "0x4638EC0", VA = "0x4638EC0", Slot = "5")]
	public virtual SocketAddress Serialize()
	{
		return null;
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x4638F50", Offset = "0x4638F50", VA = "0x4638F50", Slot = "6")]
	public virtual EndPoint Create(SocketAddress socketAddress)
	{
		return null;
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x4626A60", Offset = "0x4626A60", VA = "0x4626A60")]
	protected EndPoint()
	{
	}
}
