// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.Type3Message
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3ABB370", Offset = "0x3ABB370", VA = "0x3ABB370")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public string Password
	{
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x3ABB3F0", Offset = "0x3ABB3F0", VA = "0x3ABB3F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public string Username
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x3ABB400", Offset = "0x3ABB400", VA = "0x3ABB400")]
		set
		{
		}
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3ABAFF0", Offset = "0x3ABAFF0", VA = "0x3ABAFF0")]
	public Type3Message(Type2Message type2)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3ABB2A0", Offset = "0x3ABB2A0", VA = "0x3ABB2A0", Slot = "1")]
	~Type3Message()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x3ABB410", Offset = "0x3ABB410", VA = "0x3ABB410", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3ABB820", Offset = "0x3ABB820", VA = "0x3ABB820")]
	private string DecodeString(byte[] buffer, int offset, int len)
	{
		return null;
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3ABB880", Offset = "0x3ABB880", VA = "0x3ABB880")]
	private byte[] EncodeString(string text)
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3ABB910", Offset = "0x3ABB910", VA = "0x3ABB910", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
