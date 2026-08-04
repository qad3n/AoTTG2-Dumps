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
[Token(Token = "0x200013A")]
public abstract class EndPoint
{
	[Token(Token = "0x170001AE")]
	public virtual AddressFamily AddressFamily
	{
		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x495DF30", Offset = "0x495DF30", VA = "0x495DF30", Slot = "4")]
		get
		{
			return default(AddressFamily);
		}
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x495DFC0", Offset = "0x495DFC0", VA = "0x495DFC0", Slot = "5")]
	public virtual SocketAddress Serialize()
	{
		return null;
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x495E050", Offset = "0x495E050", VA = "0x495E050", Slot = "6")]
	public virtual EndPoint Create(SocketAddress socketAddress)
	{
		return null;
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x494BB60", Offset = "0x494BB60", VA = "0x494BB60")]
	protected EndPoint()
	{
	}
}
