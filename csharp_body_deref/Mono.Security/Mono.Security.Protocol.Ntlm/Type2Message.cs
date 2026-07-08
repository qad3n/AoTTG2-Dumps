using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000024")]
public class Type2Message : MessageBase
{
	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _nonce;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x20")]
	private string _targetName;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _targetInfo;

	[Token(Token = "0x17000055")]
	public byte[] Nonce
	{
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x3A4CD90", Offset = "0x3A4CD90", VA = "0x3A4CD90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	public string TargetName
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x3A4E070", Offset = "0x3A4E070", VA = "0x3A4E070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	public byte[] TargetInfo
	{
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x3A4CD10", Offset = "0x3A4CD10", VA = "0x3A4CD10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3A4DF40", Offset = "0x3A4DF40", VA = "0x3A4DF40")]
	public Type2Message(byte[] message)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3A4DFE0", Offset = "0x3A4DFE0", VA = "0x3A4DFE0", Slot = "1")]
	~Type2Message()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3A4E080", Offset = "0x3A4E080", VA = "0x3A4E080", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3A4E290", Offset = "0x3A4E290", VA = "0x3A4E290", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
