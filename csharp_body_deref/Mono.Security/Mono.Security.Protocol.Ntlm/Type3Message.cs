using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000025")]
public class Type3Message : MessageBase
{
	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x18")]
	private NtlmAuthLevel _level;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x20")]
	private byte[] _challenge;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x28")]
	private string _host;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x30")]
	private string _domain;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x38")]
	private string _username;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x40")]
	private string _password;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x48")]
	private Type2Message _type2;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x50")]
	private byte[] _lm;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x58")]
	private byte[] _nt;

	[Token(Token = "0x17000058")]
	public string Domain
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0x3A4E6B0", Offset = "0x3A4E6B0", VA = "0x3A4E6B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public string Password
	{
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x3A4E730", Offset = "0x3A4E730", VA = "0x3A4E730")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public string Username
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x3A4E740", Offset = "0x3A4E740", VA = "0x3A4E740")]
		set
		{
		}
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3A4E330", Offset = "0x3A4E330", VA = "0x3A4E330")]
	public Type3Message(Type2Message type2)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3A4E5E0", Offset = "0x3A4E5E0", VA = "0x3A4E5E0", Slot = "1")]
	~Type3Message()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x3A4E750", Offset = "0x3A4E750", VA = "0x3A4E750", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3A4EB60", Offset = "0x3A4EB60", VA = "0x3A4EB60")]
	private string DecodeString(byte[] buffer, int offset, int len)
	{
		return null;
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3A4EBC0", Offset = "0x3A4EBC0", VA = "0x3A4EBC0")]
	private byte[] EncodeString(string text)
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3A4EC50", Offset = "0x3A4EC50", VA = "0x3A4EC50", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
