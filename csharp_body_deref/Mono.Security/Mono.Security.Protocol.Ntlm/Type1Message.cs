using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000023")]
public class Type1Message : MessageBase
{
	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x18")]
	private string _host;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x20")]
	private string _domain;

	[Token(Token = "0x17000053")]
	public string Domain
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x3A4DA50", Offset = "0x3A4DA50", VA = "0x3A4DA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public string Host
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x3A4DAD0", Offset = "0x3A4DAD0", VA = "0x3A4DAD0")]
		set
		{
		}
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3A4D9D0", Offset = "0x3A4D9D0", VA = "0x3A4D9D0")]
	public Type1Message()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3A4DB50", Offset = "0x3A4DB50", VA = "0x3A4DB50", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x3A4DCE0", Offset = "0x3A4DCE0", VA = "0x3A4DCE0", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
