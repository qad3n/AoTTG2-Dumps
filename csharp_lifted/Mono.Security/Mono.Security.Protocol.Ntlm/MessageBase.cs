// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.MessageBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x200001F")]
public abstract class MessageBase
{
	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] header;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x10")]
	private int _type;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x14")]
	private NtlmFlags _flags;

	[Token(Token = "0x17000050")]
	public NtlmFlags Flags
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x52C5DA0", Offset = "0x52C4DA0", VA = "0x52C5DA0")]
		get
		{
			return default(NtlmFlags);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x52C5DB0", Offset = "0x52C4DB0", VA = "0x52C5DB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public int Type
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x52C5DC0", Offset = "0x52C4DC0", VA = "0x52C5DC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x52C5D80", Offset = "0x52C4D80", VA = "0x52C5D80")]
	protected MessageBase(int messageType)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x52C5DD0", Offset = "0x52C4DD0", VA = "0x52C5DD0")]
	protected byte[] PrepareMessage(int messageSize)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x52C5EA0", Offset = "0x52C4EA0", VA = "0x52C5EA0", Slot = "4")]
	protected virtual void Decode(byte[] message)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x52C6000", Offset = "0x52C5000", VA = "0x52C6000")]
	protected bool CheckHeader(byte[] message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000102")]
	public abstract byte[] GetBytes();
}
