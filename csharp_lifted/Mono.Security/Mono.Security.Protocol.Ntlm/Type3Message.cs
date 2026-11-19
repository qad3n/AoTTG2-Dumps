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
		[Address(RVA = "0x52C6FA0", Offset = "0x52C5FA0", VA = "0x52C6FA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public string Password
	{
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x52C7010", Offset = "0x52C6010", VA = "0x52C7010")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public string Username
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x52C7020", Offset = "0x52C6020", VA = "0x52C7020")]
		set
		{
		}
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x52C6C10", Offset = "0x52C5C10", VA = "0x52C6C10")]
	public Type3Message(Type2Message type2)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x52C6EC0", Offset = "0x52C5EC0", VA = "0x52C6EC0", Slot = "1")]
	~Type3Message()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x52C7030", Offset = "0x52C6030", VA = "0x52C7030", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x52C7430", Offset = "0x52C6430", VA = "0x52C7430")]
	private string DecodeString(byte[] buffer, int offset, int len)
	{
		return null;
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x52C7480", Offset = "0x52C6480", VA = "0x52C7480")]
	private byte[] EncodeString(string text)
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x52C7510", Offset = "0x52C6510", VA = "0x52C7510", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
