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
		[Address(RVA = "0x3ABA190", Offset = "0x3ABA190", VA = "0x3ABA190")]
		get
		{
			return default(NtlmFlags);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x3ABA1A0", Offset = "0x3ABA1A0", VA = "0x3ABA1A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public int Type
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x3ABA1B0", Offset = "0x3ABA1B0", VA = "0x3ABA1B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3ABA170", Offset = "0x3ABA170", VA = "0x3ABA170")]
	protected MessageBase(int messageType)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3ABA1C0", Offset = "0x3ABA1C0", VA = "0x3ABA1C0")]
	protected byte[] PrepareMessage(int messageSize)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3ABA290", Offset = "0x3ABA290", VA = "0x3ABA290", Slot = "4")]
	protected virtual void Decode(byte[] message)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3ABA3F0", Offset = "0x3ABA3F0", VA = "0x3ABA3F0")]
	protected bool CheckHeader(byte[] message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000102")]
	public abstract byte[] GetBytes();
}
