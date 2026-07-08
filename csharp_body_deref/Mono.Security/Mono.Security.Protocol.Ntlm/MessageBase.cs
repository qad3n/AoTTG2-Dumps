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
		[Address(RVA = "0x3A4D4D0", Offset = "0x3A4D4D0", VA = "0x3A4D4D0")]
		get
		{
			return default(NtlmFlags);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x3A4D4E0", Offset = "0x3A4D4E0", VA = "0x3A4D4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public int Type
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x3A4D4F0", Offset = "0x3A4D4F0", VA = "0x3A4D4F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3A4D4B0", Offset = "0x3A4D4B0", VA = "0x3A4D4B0")]
	protected MessageBase(int messageType)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3A4D500", Offset = "0x3A4D500", VA = "0x3A4D500")]
	protected byte[] PrepareMessage(int messageSize)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3A4D5D0", Offset = "0x3A4D5D0", VA = "0x3A4D5D0", Slot = "4")]
	protected virtual void Decode(byte[] message)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3A4D730", Offset = "0x3A4D730", VA = "0x3A4D730")]
	protected bool CheckHeader(byte[] message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000102")]
	public abstract byte[] GetBytes();
}
