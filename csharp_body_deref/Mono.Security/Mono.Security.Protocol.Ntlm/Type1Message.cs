// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.Type1Message
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x52C6320", Offset = "0x52C5320", VA = "0x52C6320")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public string Host
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x52C6390", Offset = "0x52C5390", VA = "0x52C6390")]
		set
		{
		}
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x52C62A0", Offset = "0x52C52A0", VA = "0x52C62A0")]
	public Type1Message()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x52C6400", Offset = "0x52C5400", VA = "0x52C6400", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x52C65A0", Offset = "0x52C55A0", VA = "0x52C65A0", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
