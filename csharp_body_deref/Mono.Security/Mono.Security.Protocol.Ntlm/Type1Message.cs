// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.Type1Message
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000035")]
public class Type1Message : MessageBase
{
	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x18")]
	private string _host;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x20")]
	private string _domain;

	[Token(Token = "0x17000056")]
	public string Domain
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x193DE30", Offset = "0x193C430", VA = "0x18193DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public string Host
	{
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x193DEB0", Offset = "0x193C4B0", VA = "0x18193DEB0")]
		set
		{
		}
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x193DDA0", Offset = "0x193C3A0", VA = "0x18193DDA0")]
	public Type1Message()
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x193D9D0", Offset = "0x193BFD0", VA = "0x18193D9D0", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x193DAD0", Offset = "0x193C0D0", VA = "0x18193DAD0", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
