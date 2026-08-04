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
		[Address(RVA = "0x3ABA710", Offset = "0x3ABA710", VA = "0x3ABA710")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public string Host
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x3ABA790", Offset = "0x3ABA790", VA = "0x3ABA790")]
		set
		{
		}
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3ABA690", Offset = "0x3ABA690", VA = "0x3ABA690")]
	public Type1Message()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3ABA810", Offset = "0x3ABA810", VA = "0x3ABA810", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x3ABA9A0", Offset = "0x3ABA9A0", VA = "0x3ABA9A0", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
