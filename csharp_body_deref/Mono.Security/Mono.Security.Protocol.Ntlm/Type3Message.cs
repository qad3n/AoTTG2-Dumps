// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.Type3Message
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000037")]
public class Type3Message : MessageBase
{
	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x18")]
	private NtlmAuthLevel _level;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x20")]
	private byte[] _challenge;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x28")]
	private string _host;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x30")]
	private string _domain;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x38")]
	private string _username;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x40")]
	private string _password;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x48")]
	private Type2Message _type2;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x50")]
	private byte[] _lm;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x58")]
	private byte[] _nt;

	[Token(Token = "0x1700005B")]
	public string Domain
	{
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x193F230", Offset = "0x193D830", VA = "0x18193F230")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public string Password
	{
		[Token(Token = "0x6000139")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public string Username
	{
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x193EFA0", Offset = "0x193D5A0", VA = "0x18193EFA0")]
	public Type3Message(Type2Message type2)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x193E740", Offset = "0x193CD40", VA = "0x18193E740", Slot = "1")]
	~Type3Message()
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x193E3F0", Offset = "0x193C9F0", VA = "0x18193E3F0", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x193E380", Offset = "0x193C980", VA = "0x18193E380")]
	private string DecodeString(byte[] buffer, int offset, int len)
	{
		return null;
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x193E6B0", Offset = "0x193CCB0", VA = "0x18193E6B0")]
	private byte[] EncodeString(string text)
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x193E7F0", Offset = "0x193CDF0", VA = "0x18193E7F0", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
